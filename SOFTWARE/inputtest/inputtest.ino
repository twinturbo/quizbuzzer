void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
   pinMode(37, INPUT);
    Serial.println("CX");
}

void loop() {
  // put your main code here, to run repeatedly:
  int ON = 0 ;
  //Serial.println(x);
  ON = digitalRead(37);
  //Serial.print(x);Serial.print(" "); Serial.println(ON);
   if ( ON == 1 ) {
    Serial.print(37);Serial.print(" "); Serial.println(ON);
   delay(200);
   Serial.println("CC");
  }
  
  }
  
