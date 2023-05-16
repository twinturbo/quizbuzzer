#include <DMXSerial.h>
#include <DMXSerial_avr.h>
#include <DMXSerial_megaavr.h>

/*
Quizbuzz by R Clayton 
For Arduino Mega Pro Mini
V0.2.0

*/



//Physical Pin Assignment
//digital reciver reads
int TEAM_[10] = {37,38,39,40,41,42,43,43,45,46};

//digital button reads
int BUT_[8] = {29,30,31,32,33,34,35,36};
int RESET = BUT_[1];
int CORRECT = BUT_[2];
int WRONG = BUT_[3];

//digital write lamps
int BUZZ_[10] = {11,12,13,22,23,24,25,26};

//digital mp3
int PORTB_1 = 4;
int PORTB_2 = 5;
int PORTB_3 = 6;
int PORTB_4 = 7;
int PORTB_5 = 50;
int PORTB_6 = 51;
int PORTB_7 = 52;
int PORTB_8 = 53;
int MP3_EN = 2;


//DMX Interface 
int DMX_RX = 19;
int DMX_TX = 18;

//AUXILIARY
int AUX_[27] = {17,16,15,14,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,47,48,49,3,8,9,10};
// 

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
String ts9 = "  ---  - Halliday"; // university of life 
String ts10 = " ---  - Halliday"; // university of life 

int SCORE_[10]  = {0,0,0,0,0,0,0,0};
//int busy = A4;

//not sure why this needs to be here and not in the IF.
int TEAM_1bp = 0;
int TEAM_2bp = 0;
int TEAM_3bp = 0;
int TEAM_4bp = 0;
int TEAM_5bp = 0;
int TEAM_6bp = 0;


void setup() {
  // put your setup code here, to run once:]
  DDRC = B00011111;
  Serial.begin(9600);
  //pinMode(reset,INPUT_PULLUP);
  for (int x=1 ; x<10; x++){ 
   pinMode(TEAM_[x], INPUT_PULLUP);
  }
  for (int x=1 ; x<8; x++){ 
   pinMode(BUT_[x], INPUT_PULLUP);
  }
  for (int x=1 ; x<10; x++){ 
   pinMode(BUZZ_[x], OUTPUT);
   digitalWrite(BUZZ_[x],HIGH);
  }
  score();
  lampcheck();
}

void loop() {
  //read quiz buttons
  delay(200);
  if (readystate == 1) {
  if (digitalRead(TEAM_[1]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts1); Serial.println(" Answered"); SCORE_[1]++; readystate = 0; receivedChar = 'k' ;  digitalWrite(BUZZ_[1], LOW); soundoutput(); }
  if (digitalRead(TEAM_[2]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts2); Serial.println(" Answered"); SCORE_[2]++; readystate = 0; receivedChar = 'W' ;  digitalWrite(BUZZ_[2], LOW); soundoutput(); }
  if (digitalRead(TEAM_[3]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts3); Serial.println(" Answered"); SCORE_[3]++; readystate = 0; receivedChar = 's' ;  digitalWrite(BUZZ_[3], LOW); soundoutput(); }
  if (digitalRead(TEAM_[4]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts4); Serial.println(" Answered"); SCORE_[4]++; readystate = 0; receivedChar = 'm' ;  digitalWrite(BUZZ_[4], LOW); soundoutput(); }
  if (digitalRead(TEAM_[5]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts5); Serial.println(" Answered"); SCORE_[5]++; readystate = 0; receivedChar = 't' ;  digitalWrite(BUZZ_[5], LOW); soundoutput(); }
  if (digitalRead(TEAM_[6]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts6); Serial.println(" Answered"); SCORE_[6]++; readystate = 0; receivedChar = 'h' ;  digitalWrite(BUZZ_[6], LOW);  soundoutput(); }   
  if (digitalRead(TEAM_[7]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts7); Serial.println(" Answered"); SCORE_[7]++; readystate = 0; receivedChar = 'h' ;  digitalWrite(BUZZ_[7], LOW);  soundoutput(); }   
  if (digitalRead(TEAM_[8]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts8); Serial.println(" Answered"); SCORE_[8]++; readystate = 0; receivedChar = 'h' ;  digitalWrite(BUZZ_[86], LOW);  soundoutput(); }   
  if (digitalRead(TEAM_[9]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts9); Serial.println(" Answered"); SCORE_[9]++; readystate = 0; receivedChar = 'h' ;  digitalWrite(BUZZ_[9], LOW);  soundoutput(); }   
  if (digitalRead(TEAM_[10]) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts10); Serial.println(" Answered"); SCORE_[10]++; readystate = 0; receivedChar = 'h' ;  digitalWrite(BUZZ_[10], LOW);  soundoutput(); }   
  
  }
 
  //if (digitalRead(reset) == 1 ) { Serial.println("LAMP off"); receivedChar = 'c' ;  Serial.println("RESET"); soundoutput(); } 
  delay(100);
  if (Serial.available() >0){
  receivedChar = Serial.read();
  soundoutput();
  }
  
  //Serial.print("a5 "); Serial.println(analogRead(A5));
  //Serial.print("a6 "); Serial.println(analogRead(A6));
  //Serial.print("a7 "); Serial.println(analogRead(A7));
  //if (analogRead(A5) > 500 ){  receivedChar = 'r' ; soundoutput(); } //reset
  //if (analogRead(A6) > 500 ){  receivedChar = 'D' ; soundoutput(); } //incorrect
  //if (analogRead(A7) >= 1000 ){ receivedChar = 'B' ; soundoutput; } //bonus
  if (digitalRead(RESET) == 1 ) {  receivedChar = 'r' ; soundoutput(); } //reset
  if (digitalRead(WRONG) == 1 ) {  receivedChar = 'D' ; soundoutput(); } //incorrect
  //if (digitalRead(CORRECT) == 1 ) {  receivedChar = 'r' ; soundoutput(); } //correct 
  //if (digitalRead(BONUS) == 1 ) {  receivedChar = 'B' ; soundoutput(); } //bonus
  
    
 }
  
