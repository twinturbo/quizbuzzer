/*
Quizbuzz by R Clayton 
For Arduino Mega Pro Mini
V0.2.0
*/


#include <DMXSerial.h>
//DMXX library on port2
#include <DMXSerial_avr.h>
// Eprom Library for saving and loading DMX Values
#include <EEPROM.h>
// LCD library for the 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x3F, 20, 4);


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
int SS_[] = {106, 107, 108, 109, 110 , 111} ; 

//Physical Pin Assignment
//digital reciver reads
// 6 Teams
//Need to set portL as input
int TEAM_[] = {44,45,46,47,48,49};
//Team Score
int SCORE_[]  = {0,0,0,0,0,0,0,0};


/*
struct dmxdata
{ 
    int PAN, TILT, FOCUS, ZOOM;
} ;

dmxdata dmxset[5]; 
dmxset[5].PAN = 50;
*/

//DMX Values for moving head per team
int DMX_X_[] = {0,0,0,0,0,0};
int DMX_Y_[] = {0,0,0,0,0,0};
int DMX_Z_[] = {0,0,0,0,0,0};
int DMX_F_[] = {0,0,0,0,0,0};

//Ligting fixture manual setup ( overridden by DMX_LOAD )
int FixMap = 0;
int Shutter = 1+3 ; //240
int Dimmer = 2+3 ; //255
int Colour = 3+3 ; // red 14, gren 55, white 0, blue 70
int RED = 14;
int GREEN = 55;
int WHITE = 0;
int BLUE = 70;
int Focus = 6+3 ; //0-255
int Pans = 8+3 ; //0=255
int Tilt = 10+3 ; //0-255
int Speed = 12+3 ; //3-245 fast - slow
int Zoom = 0 ;

int Gobo = 8 ; 
int Prism = 12 ;
int Rotate = 13 ;


// A table setting used somewhere.
int TableD = 0;

//digital button reads
//Auxiliary Buttons 
int BUT_[] = {30,31,32,33,34,35,36,37};
// Top Pannel Controls 
int RESET = BUT_[5];
int CORRECT = BUT_[7];
int WRONG = BUT_[4];
int OTHER = BUT_[6];

 
//digital write lamps
//IS THIS CORRECT??
//8-11-23  updated array values to new Version Board 
int BUZZ_[] = {22,24,26,28,23,25};
//Correct

//digital mp3
//MP3 Pin enable used in OUTOFF Routine
int MP3_EN = 2;

//AUXILIARY
// All worong
//int AUX_[27] = {17,16,15,14,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,47,48,49,3,8,9,10};
// 

//control flags and paramaters
long randNumber; //Random number for wrong,right sounds
String receivedChar = "hello"; //control character for most options
int team = 0; //Used for score correction in decrement and wrong.
int readystate = 1; //controls if the quiz buzers are active. 
String reset = "null"; //controls the state to reset from wrong/right and re-enable the main loop.
char SC = "P"; // Sound Check ( T = Team (main and Decremetn, A = Adverts , F = Films,  X = wrong  Y = right 

//Team Display Strings
String ts1 = " Cooo n 2 in ma bru";
String tm1 = " McClay";
String lcs1 = "MM";

String ts2 = " Tones of Time"; 
String tm2 = " Tones";
String lcs2 = "LT";
String ts3 = " Tashly wrs ya Ash"; 
String tm3 = " Wilson";
String lcs3 = "AW";
         
String ts4 = " Bessies Besties";
String tm4 = " Bestwick";
String lcs4 = "JB";
              
String ts5 = " APaulin Perfmnce";
String tm5 = " Haliday";  
String lcs5 = "PH";
 
String ts6 = " Daren to be difrnt";
String tm6 = " Kelton";   
String lcs6 = "DK";



int scTeam = 9;
int PlusMinus = 0 ;
int TeamX = 10 ;





void setup() {
  Serial.begin(9600);
  if ( EEPROM.read(S_S) == 1 ){
    for (int x=0 ; x<6; x++){ 
    
    (SCORE_[x] = EEPROM.read(SS_[x]));
    
  }
  }  
  delay(5000);
  
  lcd.init();
  lcd.backlight();
    
  DDRA = B11111111;
  PORTA = B00000000;
  DDRB = B11111111;
  PORTB = B11111111;
  DMXSerial.init(DMXController);
  // put your setup code here, to run once:]
  //pinMode(reset,INPUT_PULLUP);
  for (int x=0 ; x<6; x++){ 
   pinMode(TEAM_[x], INPUT_PULLUP);
  }
  pinMode(42, INPUT_PULLUP);
  pinMode(43, INPUT_PULLUP);
  pinMode(MP3_EN, INPUT_PULLUP);
  
  for (int x=0 ; x<8; x++){ 
   pinMode(BUT_[x], INPUT_PULLUP);
  }
  //
  if ( katy == 1 ){KATY();}
  if ( LOGOd == 1 ){LOGO();}
  if ( lamp == 1 ){LAMP_CHECK();}
  if ( button == 1 ){BUTTON_CHECK();}
  if ( captain == 1 ) {SC = 'T' ; soundcheck();} 
  //
  delay(2000);
  /*for (int x=0 ; x<8; x++){ 
   pinMode(BUZZ_[x], OUTPUT);
   digitalWrite(BUZZ_[x],HIGH);
  }*/
  Serial.println("MENU SCORE INIT");
  DMX_LOAD();
  GO_HOME();
  SCORE();
  }

void loop() {
  if (readystate == 1){
  /*if (digitalRead(TEAM_[0]) == 1 ) { LINES(); Serial.print(ts1); Serial.println(" Answered"); SCORE_[0]++; readystate = 0; receivedChar = 'c1' ;  digitalWrite(BUZZ_[0], LOW); SOUND_OUTPUT(); }
  if (digitalRead(TEAM_[1]) == 1 ) { LINES(); Serial.print(ts2); Serial.println(" Answered"); SCORE_[1]++; readystate = 0; receivedChar = 'c2' ;  digitalWrite(BUZZ_[1], LOW); SOUND_OUTPUT(); }
  if (digitalRead(TEAM_[2]) == 1 ) { LINES(); Serial.print(ts3); Serial.println(" Answered"); SCORE_[2]++; readystate = 0; receivedChar = 'c3' ;  digitalWrite(BUZZ_[2], LOW); SOUND_OUTPUT(); }
  if (digitalRead(TEAM_[3]) == 1 ) { LINES(); Serial.print(ts4); Serial.println(" Answered"); SCORE_[3]++; readystate = 0; receivedChar = 'c4' ;  digitalWrite(BUZZ_[3], LOW); SOUND_OUTPUT(); }
  if (digitalRead(TEAM_[4]) == 1 ) { LINES(); Serial.print(ts5); Serial.println(" Answered"); SCORE_[4]++; readystate = 0; receivedChar = 'c5' ;  digitalWrite(BUZZ_[4], LOW); SOUND_OUTPUT(); }
  if (digitalRead(TEAM_[5]) == 1 ) { LINES(); Serial.print(ts6); Serial.println(" Answered"); SCORE_[5]++; readystate = 0; receivedChar = 'c6' ;  digitalWrite(BUZZ_[5], LOW); SOUND_OUTPUT(); }   
  */}
 
  delay(10);
  if (Serial.available() >0){
  receivedChar = Serial.readString();receivedChar.trim();
  //String str   = Serial.readString();str.trim();
  //Serial.print("Recived "); Serial.println(receivedChar);
  SOUND_OUTPUT();}

  
  //EMP OUT WITH NO PHYSICALAS
  if (digitalRead(RESET) == 0 ) {  receivedChar = 'e' ; SOUND_OUTPUT(); } //reset
  if (digitalRead(WRONG) == 0 ) {  receivedChar = 'W' ; SOUND_OUTPUT(); } //incorrect
  if (digitalRead(CORRECT) == 0 ) {  receivedChar = 'R'; SOUND_OUTPUT(); } //correct 
  if (digitalRead(OTHER) == 0 ) {  receivedChar = 'C' ;  SOUND_OUTPUT(); receivedChar = "null" ; } //bonus
     
 }
  
