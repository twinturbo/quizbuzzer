/*
Quizbuzz by R Clayton 
For Arduino Mega Pro Mini
 */


//Physical Pin Assignment
//digital reciver reads
int TEAM_1 = 37;
int TEAM_2 = 38;
int TEAM_3 = 39;
int TEAM_4 = 40;
int TEAM_5 = 41;
int TEAM_6 = 42;
int TEAM_7 = 43;
int TEAM_8 = 44;
int TEAM_9 = 45;
int TEAM_10 = 46;

//digital button reads
int BUT_1 = 29;
int BUT_2 = 30;
int BUT_3 = 31;
int BUT_4 = 32;
int BUT_5 = 33;
int BUT_6 = 34;
int BUT_7 = 35;
int BUT_8 = 46;

//digital write lamps
int BUZZ_1 = 11;  
int BUZZ_2 = 12;  
int BUZZ_3 = 13;  
int BUZZ_4 = 22; 
int BUZZ_5 = 23; 
int BUZZ_6 = 24; 
int BUZZ_7 = 25; 
int BUZZ_8 = 26; 
int BUZZ_9 = 27;
int BUZZ_10 = 28;

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
int AUX_1 = 17;
int AUX_2 = 16;
int AUX_3 = 15;
int AUX_4 = 14;
int AUX_5 = A0;
int AUX_6 = A1;
int AUX_7 = A2;
int AUX_8 = A3;
int AUX_9 = A4;
int AUX_10 = A5;
int AUX_11 = A6;
int AUX_12 = A7;
int AUX_13 = A8;
int AUX_14 = A9;
int AUX_15 = A10;
int AUX_16 = A11;
int AUX_17 = A12;
int AUX_18 = A13;
int AUX_19 = A14;
int AUX_20 = A15;
int AUX_21 = 47;
int AUX_22 = 48;
int AUX_23 = 49;
int AUX_24 = 3;
int AUX_25 = 8;
int AUX_26 = 9;
int AUX_27 = 10;


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


int t1 = 0;
int t2 = 0;
int t3 = 0;
int t4 = 0;
int t5 = 0;
int t6 = 0;

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
  /*pinMode(TEAM_2,INPUT_PULLUP);
  pinMode(TEAM_3,INPUT_PULLUP);
  pinMode(TEAM_4,INPUT_PULLUP);
  pinMode(TEAM_5,INPUT_PULLUP);
  pinMode(TEAM_6,INPUT_PULLUP);
  pinMode(TEAM_7,INPUT_PULLUP);
  pinMode(TEAM_8,INPUT_PULLUP);
  pinMode(TEAM_9,INPUT_PULLUP);
  pinMode(TEAM_10,INPUT_PULLUP);*/
  
  
  
  pinMode(A5,INPUT);
  pinMode(A6,INPUT);
  pinMode(A7,INPUT);
    
  pinMode(BUZZ_1,OUTPUT);
  pinMode(BUZZ_2,OUTPUT);
  pinMode(BUZZ_3,OUTPUT);
  pinMode(BUZZ_4,OUTPUT);
  pinMode(BUZZ_5,OUTPUT);
  pinMode(BUZZ_6,OUTPUT);
  digitalWrite(BUZZ_1,HIGH);
  digitalWrite(BUZZ_2,HIGH);
  digitalWrite(BUZZ_3,HIGH);
  digitalWrite(BUZZ_4,HIGH);
  digitalWrite(BUZZ_5,HIGH);
  digitalWrite(BUZZ_6,HIGH);
  score();
  lampcheck();
}

void loop() {
  //read quiz buttons
  delay(200);
  if (readystate == 1) {
  if (digitalRead(TEAM_1) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts1); Serial.println(" Answered"); t1++; readystate = 0; receivedChar = 'k' ;  digitalWrite(BUZZ_1, LOW); soundoutput(); }
  if (digitalRead(TEAM_2) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts2); Serial.println(" Answered"); t2++; readystate = 0; receivedChar = 'W' ;  digitalWrite(BUZZ_2, LOW); soundoutput(); }
  if (digitalRead(TEAM_3) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts3); Serial.println(" Answered"); t3++; readystate = 0; receivedChar = 's' ;  digitalWrite(BUZZ_3, LOW); soundoutput(); }
  if (digitalRead(TEAM_4) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts4); Serial.println(" Answered"); t4++; readystate = 0; receivedChar = 'm' ;  digitalWrite(BUZZ_4, LOW); soundoutput(); }
  if (digitalRead(TEAM_5) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts5); Serial.println(" Answered"); t5++; readystate = 0; receivedChar = 't' ;  digitalWrite(BUZZ_5, LOW); soundoutput(); }
  if (digitalRead(TEAM_6) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts6); Serial.println(" Answered"); t6++; readystate = 0; receivedChar = 'h' ;  digitalWrite(BUZZ_6, LOW);  soundoutput(); }   
  
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
  if (analogRead(A5) > 500 ){  receivedChar = 'r' ; soundoutput(); } //reset
  if (analogRead(A6) > 500 ){  receivedChar = 'D' ; soundoutput(); } //incorrect
  //if (analogRead(A7) >= 1000 ){ receivedChar = 'B' ; soundoutput; } //bonus
  
    
 }
  
