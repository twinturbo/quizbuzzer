void OUTOFF()
{
if( digitalRead(MP3_EN) == 0 ){
    PORTB = B11111111;
        int playing = 1;
    while ( playing == 1 ) {
    //Serial.println("Playing "); Serial.println(digitalRead(MP3_EN));
    //delay (1000);
    
    if (digitalRead(MP3_EN) == 1 ) { break;}
   }
}
//Serial.println("OUTOFF");
}
