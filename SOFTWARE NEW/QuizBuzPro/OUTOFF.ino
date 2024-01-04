void OUTOFF()
{
Serial.println("outoffstarted");
delay(500);
if( digitalRead(MP3_EN) == 0 ){
    lcd.setCursor(19,3),lcd.print("#");
    PORTB = B11111111;
        int playing = 1;
    while ( playing == 1 ) {
    //Serial.print(">> "); Serial.println(digitalRead(MP3_EN));
    delay (500);
    lcd.setCursor(19,3),lcd.print(" ");
    delay (500);
    if (digitalRead(MP3_EN) == 1 ) { break;}
   }
}
//Serial.println("OUTOFF");
}
