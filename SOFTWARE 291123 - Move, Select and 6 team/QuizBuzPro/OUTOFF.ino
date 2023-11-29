void OUTOFF()
{
Serial.print("OUTOFF "); Serial.println(receivedChar);
Serial.print("MP3 EN ");Serial.println(digitalRead(MP3_EN));
delay(300);
Serial.print("MP3 EN ");Serial.println(digitalRead(MP3_EN));
MP3_EN = 0;
while ( digitalRead(MP3_EN) == 0 ){
    Serial.println("Playing");
    //play = digitalRead(MP3_EN);
    delay(20);
   }
Serial.println("OUTOFF");
delay(500);
PORTB = B11111111;
MP3_EN = 1;
receivedChar = "@";  
}



/*{
  for (int x=0 ; x<8; x++){ 
  digitalWrite(BUZZ_[x],HIGH);
  }
}*/
