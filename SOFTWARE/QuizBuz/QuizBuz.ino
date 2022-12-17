
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

//digital reads
int team1 = 2;
int team2 = 3;
int team3 = 4;
int team4 = 5;
int team5 = 6;
int team6 = 7;

//digital write lamps
int buzz1 = 10;  
int buzz2 = 11;  
int buzz3 = 12;  
int buzz4 = 9; 
int buzz5 = 8; 
int buzz6 = 13;  

//int busy = A4;

//not sure why this needs to be here and not in the IF.
int team1bp = 0;
int team2bp = 0;
int team3bp = 0;
int team4bp = 0;
int team5bp = 0;
int team6bp = 0;


void setup() {
  // put your setup code here, to run once:]
  DDRC = B00011111;
  Serial.begin(9600);
  //pinMode(reset,INPUT_PULLUP);
  pinMode(team1,INPUT_PULLUP);
  pinMode(team2,INPUT_PULLUP);
  pinMode(team3,INPUT_PULLUP);
  pinMode(team4,INPUT_PULLUP);
  pinMode(team5,INPUT_PULLUP);
  pinMode(team6,INPUT_PULLUP);
  pinMode(A5,INPUT);
  pinMode(A6,INPUT);
  pinMode(A7,INPUT);
    
  pinMode(buzz1,OUTPUT);
  pinMode(buzz2,OUTPUT);
  pinMode(buzz3,OUTPUT);
  pinMode(buzz4,OUTPUT);
  pinMode(buzz5,OUTPUT);
  pinMode(buzz6,OUTPUT);
  digitalWrite(buzz1,HIGH);
  digitalWrite(buzz2,HIGH);
  digitalWrite(buzz3,HIGH);
  digitalWrite(buzz4,HIGH);
  digitalWrite(buzz5,HIGH);
  digitalWrite(buzz6,HIGH);
  score();
  lampcheck();
}

void loop() {
  //read quiz buttons
  delay(200);
  if (readystate == 1) {
  if (digitalRead(team1) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts1); Serial.println(" Answered"); t1++; readystate = 0; receivedChar = 'k' ;  digitalWrite(buzz1, LOW); soundoutput(); }
  if (digitalRead(team2) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts2); Serial.println(" Answered"); t2++; readystate = 0; receivedChar = 'W' ;  digitalWrite(buzz2, LOW); soundoutput(); }
  if (digitalRead(team3) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts3); Serial.println(" Answered"); t3++; readystate = 0; receivedChar = 's' ;  digitalWrite(buzz3, LOW); soundoutput(); }
  if (digitalRead(team4) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts4); Serial.println(" Answered"); t4++; readystate = 0; receivedChar = 'm' ;  digitalWrite(buzz4, LOW); soundoutput(); }
  if (digitalRead(team5) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts5); Serial.println(" Answered"); t5++; readystate = 0; receivedChar = 't' ;  digitalWrite(buzz5, LOW); soundoutput(); }
  if (digitalRead(team6) == 1 ) { Serial.println("----------------------------------------------------------------------"); Serial.print(ts6); Serial.println(" Answered"); t6++; readystate = 0; receivedChar = 'h' ;  digitalWrite(buzz6, LOW);  soundoutput(); }   
  
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
  
