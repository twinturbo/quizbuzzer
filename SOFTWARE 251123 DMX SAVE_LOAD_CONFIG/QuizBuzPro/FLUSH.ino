void FLUSH(){
  while(Serial.available() > 0) {char t = Serial.read(); Serial.println("something in buffer1");}
  delay(5);
  while(Serial.available() > 0) {char t = Serial.read(); Serial.println("something in buffer2");}
  delay(5);
  while(Serial.available() > 0) {char t = Serial.read(); Serial.println("something in buffer2");}
  delay(5);
 }
