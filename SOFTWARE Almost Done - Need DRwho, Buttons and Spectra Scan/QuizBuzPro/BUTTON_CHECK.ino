void BUTTON_CHECK() {
Serial.print("WRONG SHOULD BE UNPRESSED 1 > "); Serial.println(digitalRead(WRONG));
Serial.print("RIGHT SHOULD BE UNPRESSED 1 > "); Serial.println(digitalRead(CORRECT));
Serial.print("RESET SHOULD BE UNPRESSED 1 > "); Serial.println(digitalRead(RESET));
Serial.print("OTHER SHOULD BE UNPRESSED 1 > "); Serial.println(digitalRead(OTHER));  
delay(1000);
int xtc = 0; 
int wtc = 0;
int rtc = 0;
int otc = 0;
int ctc = 0;

while (xtc != 10){
    if (digitalRead(WRONG) == LOW) { Serial.println("WRONG PRESSED ");wtc = wtc+1; Serial.println(wtc);}
    if (digitalRead(CORRECT) == LOW) { Serial.println("CORRECT PRESSED ");ctc = ctc+1; Serial.println(ctc); readystate = 0; receivedChar = 'd' ;  digitalWrite(BUZZ_[0], LOW); soundoutput(); }
    if (digitalRead(RESET) == LOW) { Serial.println("RESET PRESSED ");rtc = rtc+1; Serial.println(rtc);}
    if (digitalRead(OTHER) == LOW) { Serial.println("OTHER PRESSED ");otc = otc+1; Serial.println(otc);}
    if (rtc > 1 and ctc > 1 and otc > 1 and wtc > 1) {xtc = 10;}
    
    
    delay(20);
   }


  
}
