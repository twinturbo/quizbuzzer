#include <DMXSerial.h>
#include <DMXSerial_avr.h>

//int myArray[] = {10,20,30,40,50};
//for (int xy : myArray) { } // for each element in the array  Serial.println(xy);


/*
Quizbuzz by R Clayton 
For Arduino Mega Pro Mini
V0.2.0

*/



//Physical Pin Assignment
//digital reciver reads
// 8 Teams
//Need to set portL as input
int TEAM_[] = {42,43,44,45,46,47,48,49};
int DMX_X_[] = {0,0,0,0,0,0};
int DMX_Y_[] = {0,0,0,0,0,0};
int DMX_Z_[] = {0,0,0,0,0,0};


//digital button reads
//8-11-23  updated array values to new Version Board 
// Need to set portC as input
int BUT_[] = {30,31,32,33,34,35,36,37};
int RESET = BUT_[0];
int CORRECT = BUT_[1];
int WRONG = BUT_[2];

//digital write lamps
//IS THIS CORRECT??
//8-11-23  updated array values to new Version Board 
int BUZZ_[] = {22,23,24,25,26,27,28,29};
//Correct

//digital mp3
// 8/11/23 - updated pins , 
// need to decrement port number by 1, 
//need to set portB as output.
/*
int PORTB_1 = 53;
int PORTB_2 = 52;
int PORTB_3 = 51;
int PORTB_4 = 50;
int PORTB_5 = 10;
int PORTB_6 = 11;
int PORTB_7 = 12;
int PORTB_8 = 13;*/
int MP3_EN = 2;


// NOT NEEDED
//DMX Interface 
/*int DMX_RX = 19;
int DMX_TX = 18;
*/


//AUXILIARY
// All worong
//int AUX_[27] = {17,16,15,14,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,47,48,49,3,8,9,10};
// 


/* Unverified from here
 *  
 *  
 *  
 *  
 *  
 *  
 *  
 *  
 */




long randNumber;
char receivedChar = "";
int team = 0;
int readystate = 1;
String ts1 = "  CIST - Kelton"; // Carlisle Institute of Squirrels and Technology
String ts2 = "  DUC  - Wazowski"; // Ducks Uni Cambridge
String ts3 = "  SUO  - Stacey"; // Sumbag Uni Oxford
String ts4 = "  DEER - Mohammed"; // University of No Eye Deer.
String ts5 = "  LTU  - Tones"; // Llowda Tones University 
String ts6 = "  ULC  - Halliday"; // university of life 
String ts7 = "  ---  - Halliday"; // university of life 
String ts8 = "  ---  - Halliday"; // university of life 

int SCORE_[]  = {0,0,0,0,0,0,0,0};

//not sure why this needs to be here and not in the IF.
/* int TEAM_1bp = 0;
int TEAM_2bp = 0;
int TEAM_3bp = 0;
int TEAM_4bp = 0;
int TEAM_5bp = 0;
int TEAM_6bp = 0;*/


void setup() {
  DDRA = B11111111;
  PORTA = B00000000;
  DDRB = B11111111;
  PORTB = B00000000;
  DMXSerial.init(DMXController);
  // put your setup code here, to run once:]
  Serial.begin(9600);
  //pinMode(reset,INPUT_PULLUP);
  for (int x=0 ; x<8; x++){ 
   pinMode(TEAM_[x], INPUT_PULLUP);
  }
  pinMode(42, INPUT_PULLUP);
  pinMode(43, INPUT_PULLUP);


  
  for (int x=0 ; x<8; x++){ 
   pinMode(BUT_[x], INPUT_PULLUP);
  }


  DMX_SETUP();
  /*for (int x=0 ; x<8; x++){ 
   pinMode(BUZZ_[x], OUTPUT);
   digitalWrite(BUZZ_[x],HIGH);
  }*/
  pinMode(MP3_EN, INPUT_PULLUP);
  Serial.println("MENU SCORE INIT");
  delay(2000);
  score();
  Serial.println("LAMPCHECK");
  lampcheck();
  delay(2000);
}

void loop() {
  //read quiz buttons
  //delay(2000);
  if (readystate == 1){
  //Serial.print(TEAM_[0]); Serial.print(" T1 "); Serial.println(digitalRead(TEAM_[0]));
  //Serial.print(TEAM_[1]); Serial.print(" T2 "); Serial.println(digitalRead(TEAM_[1]));
  //if (digitalRead(TEAM_[0]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts1); Serial.println(" Answered"); SCORE_[0]++; readystate = 0; receivedChar = 'k' ;  digitalWrite(BUZZ_[0], LOW); soundoutput(); }
  //if (digitalRead(TEAM_[1]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts2); Serial.println(" Answered"); SCORE_[1]++; readystate = 0; receivedChar = 'W' ;  digitalWrite(BUZZ_[1], LOW); soundoutput(); }
  if (digitalRead(TEAM_[2]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts3); Serial.println(" Answered"); SCORE_[2]++; readystate = 0; receivedChar = 's' ;  digitalWrite(BUZZ_[2], LOW); soundoutput(); }
  if (digitalRead(TEAM_[3]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts4); Serial.println(" Answered"); SCORE_[3]++; readystate = 0; receivedChar = 'm' ;  digitalWrite(BUZZ_[3], LOW); soundoutput(); }
  if (digitalRead(TEAM_[4]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts5); Serial.println(" Answered"); SCORE_[4]++; readystate = 0; receivedChar = 't' ;  digitalWrite(BUZZ_[4], LOW); soundoutput(); }
  if (digitalRead(TEAM_[5]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts6); Serial.println(" Answered"); SCORE_[5]++; readystate = 0; receivedChar = 'h' ;  digitalWrite(BUZZ_[5], LOW);  soundoutput(); }   
  if (digitalRead(TEAM_[6]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts7); Serial.println(" Answered"); SCORE_[6]++; readystate = 0; receivedChar = 'h' ;  digitalWrite(BUZZ_[6], LOW);  soundoutput(); }   
  if (digitalRead(TEAM_[7]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts8); Serial.println(" Answered"); SCORE_[7]++; readystate = 0; receivedChar = 'h' ;  digitalWrite(BUZZ_[7], LOW);  soundoutput(); }   
  }
 
  delay(10);
  if (Serial.available() >0){
  receivedChar = Serial.read();
  Serial.println(receivedChar);
  soundoutput();
  }

  /*TEMP OUT WITH NO PHYSICALAS
  if (digitalRead(RESET) == 1 ) {  receivedChar = 'r' ; soundoutput(); } //reset
  if (digitalRead(WRONG) == 1 ) {  receivedChar = 'D' ; soundoutput(); } //incorrect*/
 
  
  //if (digitalRead(CORRECT) == 1 ) {  receivedChar = 'r' ; soundoutput(); } //correct 
  //if (digitalRead(BONUS) == 1 ) {  receivedChar = 'B' ; soundoutput(); } //bonus
     
 }
  
