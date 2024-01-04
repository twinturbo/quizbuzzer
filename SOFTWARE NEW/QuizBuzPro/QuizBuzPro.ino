/*
  Quizbuzz by R Clayton
  For Arduino Mega Pro Mini
  Hardware QuiZbuzzer V0.1.3
  V0.0.x
*/

//LIBARY INCLDUES
#include <DMXSerial.h>
//DMXX library on port2
#include <DMXSerial_avr.h>
// Eprom Library for saving and loading DMX Values
#include <EEPROM.h>
// LCD library for the
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x3F, 20, 4);

//enable the reset function , used in utility menu
void(* resetFunc) (void) = 0;


//System Options eeprom locations
int KOB = 100;
int LOB = 101;
int AOM = 102;
int BOB = 103;
int COB = 104;
int S_S = 105;

//System Boot Options from eeprom ( set in utility mrnu )
int katy = EEPROM.read(KOB); //KATY Logo on boot
int LOGOd = EEPROM.read(LOB); // Quiz Logo on boot
int lamp = EEPROM.read(AOM); // Lamp Check on boot
int button = EEPROM.read(BOB); // Button Check on boot
int captain = EEPROM.read(COB); //captain sound on boot
int S_S_V = EEPROM.read(S_S); //reload saved score on boot

//Score values stored in eeprom
int SS_[] = {106, 107, 108, 109, 110 , 111} ;



//Physical Pin Assignment
//digital reciver reads
// 6 Teams
//Need to set portL as input
int TEAM_[] = {44, 45, 46, 47, 48, 49};
//Team Score
//Runtime scores, loaded from SS_[] if boot option S_S = 1, set from utility menu.
int SCORE_[]  = {0, 0, 0, 0, 0, 0, 0, 0};

//DMX Values for moving head per team, initial set but loaed by DMX load if boot option enabled
int DMX_X_[] = {0, 0, 0, 0, 0, 0};
int DMX_Y_[] = {0, 0, 0, 0, 0, 0};
int DMX_Z_[] = {0, 0, 0, 0, 0, 0};
int DMX_F_[] = {0, 0, 0, 0, 0, 0};

//spectrapix channel offset, used in SPEC_ routines to offset changel from CH1 
//https://www.prolight.co.uk/product_manual/EQLED058_Manual.pdf
int sc = 14;


//Ligting fixture manual setup some overridden by DMX_LOAD ) 
//https://www.prolight.co.uk/product_manual/EQLED054_EQLED054A_Manual.pdf
int FixMap = 0; // Relativly redundant as not compensating for other primary fixrtures.
int Shutter = 1 + 3 ; //240
int Dimmer = 2 + 3 ; //255
int Colour = 3 + 3 ; // red 14, gren 55, white 0, blue 70
int RED = 14;
int GREEN = 55;
int WHITE = 0;
int BLUE = 70;
int Focus = 6 + 3 ; //0-255
int Pans = 8 + 3 ; //0=255
int Tilt = 10 + 3 ; //0-255
int Speed = 12 + 3 ; //3-245 fast - slow
int Zoom = 0 ;
int Gobo = 8 ; // Standard Gobo
int Prism = 12 ; // 3 Facet and linera prism 
int Rotate = 13 ;



// A table setting used somewhere.
int TableD = 0;

//digital button reads
//Auxiliary Buttons
int BUT_[] = {30, 31, 32, 33, 34, 35, 36, 37};

// Top Pannel Controls [from array] 
int RESET = BUT_[5]; //0-7 35
int CORRECT = BUT_[7]; //0-7 37
int WRONG = BUT_[4]; //0-7 34
int OTHER = BUT_[6]; //0-7 36


//digital outputs for relays to control Lightboard Lamps.
int BUZZ_[] = {22, 24, 26, 28, 23, 25};

//digital mp3
//MP3 Pin enable used in OUTOFF Routine, low? when playing. 
int MP3_EN = 2;

//AUXILIARY
// All worong not implemented
//int AUX_[27] = {17,16,15,14,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,47,48,49,3,8,9,10};
//

//control flags and paramaters
long randNumber; //Random number for wrong,right sounds
String receivedChar = "hello"; //control character for most options
int team = 0; //Used for score correction in decrement and wrong.
int readystate = 1; //controls if the quiz buzers are active.
String reset = "null"; //controls the state to reset from wrong/right and re-enable the main loop.
String SC = "P"; // Sound Check ( T = Team (main and Decremetn, A = Adverts , F = Films,  X = wrong  Y = right

//Team Display Strings ( TS = Long Team Name, Tm = Captains Name, LCS LCD Initials score Board.
String ts[6] {" Cooo n 2 in ma bru", " Tones of Time", " Tashly wrs ya Ash" , " Bessies Besties" , " APaulin Perfmnce", " Daren to be difrnt"};
String tm[6] {" McClay" , " Tones", " Wilson", " Breadstick", " Haliday", " Keton"};
String lcs[6] {"MM","LT","AW","JB","PH","DK"};



int scTeam = 9;
int PlusMinus = 0 ;
int TeamX = 10 ;

void setup() {
  Serial.begin(9600);
  Serial.print("SV ");Serial.println(S_S_V);
  if ( EEPROM.read(S_S_V) == 1 ) {
    for (int x = 0 ; x < 6; x++) {

      (SCORE_[x] = EEPROM.read(SS_[x]));

    }
  }
  delay(4000);
  
  lcd.init();
  lcd.backlight();

  DDRA = B11111111;
  PORTA = B00000000;
  DDRB = B11111111;
  PORTB = B11111111;
   
  DMXSerial.init(DMXController);
  //spectarpix set zero
  for ( int colour  = 1; colour <= 53; colour++ ) {
    DMXSerial.write(sc + colour, 0);

  }
  DMX_LOAD();
  GO_HOME();
  SPEC_COL(5);


  // put your setup code here, to run once:]
  //pinMode(reset,INPUT_PULLUP);
  for (int x = 0 ; x < 6; x++) {
    pinMode(TEAM_[x], INPUT_PULLUP);
  }
  pinMode(42, INPUT_PULLUP);
  pinMode(43, INPUT_PULLUP);
  pinMode(MP3_EN, INPUT_PULLUP);

  for (int x = 0 ; x < 8; x++) {
    pinMode(BUT_[x], INPUT_PULLUP);
  }
  //
  if ( katy == 1 ) {KATY();}
  if ( LOGOd == 1 ) {LOGO();}
  if ( lamp == 1 ) {LAMP_CHECK();}
  if ( button == 1 ) {BUTTON_CHECK();}
  if ( captain == 1 ) {SC = "ST" ; SOUNDCHECK(); }
  //
  /*for (int x=0 ; x<8; x++){
    pinMode(BUZZ_[x], OUTPUT);
    digitalWrite(BUZZ_[x],HIGH);
    }*/
  //QUIZBATTLE();
  SCORE();
}

void loop() {
  //Serial.print("DR1 "); Serial.println(readystate);
  if (readystate == 1) {
    team = 0;
    if (digitalRead(TEAM_[0]) == 1 ) {
      LINES();
      Serial.print(ts[0]);
      Serial.println(" Answered");
      SCORE_[0]++;
      readystate = 0;
      Serial.print("DR2 ");
      receivedChar = "c1" ;
      digitalWrite(BUZZ_[0], HIGH);
      SOUND_OUTPUT();
    }
    delay(100);
    if (digitalRead(TEAM_[1]) == 1 ) {
      LINES();
      Serial.print(ts[1]);
      Serial.println(" Answered");
      SCORE_[1]++;
      readystate = 0;
      receivedChar = "c2" ;
      digitalWrite(BUZZ_[1], HIGH);
      SOUND_OUTPUT();
    }
    delay(100);
    if (digitalRead(TEAM_[2]) == 1 ) {
      LINES();
      Serial.print(ts[2]);
      Serial.println(" Answered");
      SCORE_[2]++;
      readystate = 0;
      receivedChar = "c3" ;
      digitalWrite(BUZZ_[2], HIGH);
      SOUND_OUTPUT();
    }
    delay(100);
    if (digitalRead(TEAM_[3]) == 1 ) {
      LINES();
      Serial.print(ts[3]);
      Serial.println(" Answered");
      SCORE_[3]++;
      readystate = 0;
      receivedChar = "c4" ;
      digitalWrite(BUZZ_[3], HIGH);
      SOUND_OUTPUT();
    }
    delay(100);
    if (digitalRead(TEAM_[4]) == 1 ) {
      LINES();
      Serial.print(ts[4]);
      Serial.println(" Answered");
      SCORE_[4]++;
      readystate = 0;
      receivedChar = "c5" ;
      digitalWrite(BUZZ_[4], HIGH);
      SOUND_OUTPUT();
    }
    delay(100);
    if (digitalRead(TEAM_[5]) == 1 ) {
      LINES();
      Serial.print(ts[5]);
      Serial.println(" Answered");
      SCORE_[5]++;
      readystate = 0;
      receivedChar = "c6" ;
      digitalWrite(BUZZ_[5], HIGH);
      SOUND_OUTPUT();
    }
  }

  delay(10);
  if (Serial.available() > 0) {
    receivedChar = Serial.readString(); receivedChar.trim();
    Serial.println("RC1 "); Serial.println(receivedChar);
    //String str   = Serial.readString();str.trim();
    //Serial.print("Recived "); Serial.println(receivedChar);
    SOUND_OUTPUT();
  }


  //EMP OUT WITH NO PHYSICALAS
  if (digitalRead(RESET) == 0 ) {
    receivedChar = 'e' ;  //reset
    SOUND_OUTPUT();
  }
  if (digitalRead(WRONG) == 0 ) {
    receivedChar = 'W' ;  //incorrect
    SOUND_OUTPUT();
  }
  if (digitalRead(CORRECT) == 0 ) {
    receivedChar = 'R';  //correct
    SOUND_OUTPUT();
  }
  if (digitalRead(OTHER) == 0 ) {
    receivedChar = 'C' ;   //bonus
    SOUND_OUTPUT();
    receivedChar = "null" ;
  }

}
