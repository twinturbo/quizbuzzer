void FLUSH(){
  while(Serial.available() > 0) {char t = Serial.read(); /*Serial.println("something in buffer1")*/;}
  delay(100);
  while(Serial.available() > 0) {char t = Serial.read(); /*Serial.println("something in buffer2")*/;}
  delay(100);
  while(Serial.available() > 0) {char t = Serial.read(); Serial.println("something in buffer2");}
  delay(100);
 }

 void CLS(){for ( int CLS = 0; CLS<80 ; CLS++) { Serial.println(); }}

 void LINE(int xl) {
  lcd.setCursor(0,xl);lcd.print("####################");
}

void LINES() {
  Serial.println("##############################");
}
    
