void BUTTON_CHECK() {
lcd.clear();lcd.setCursor(0, 0);  lcd.print("====================");
              lcd.setCursor(0, 1);lcd.print("    BUTTON CHECK    ");
              lcd.setCursor(0, 2);lcd.print("====================");
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
lcd.clear();
lcd.setCursor(0,0);
while (xtc != 10){
    if (digitalRead(WRONG) == LOW) { Serial.println("WRONG PRESSED ");wtc = wtc+1; Serial.println(wtc); lcd.setCursor(0,0); lcd.print("Wrong Pressed");}
    if (digitalRead(CORRECT) == LOW) { Serial.println("CORRECT PRESSED ");ctc = ctc+1; Serial.println(ctc); lcd.setCursor(0,1); lcd.print("Right Pressed");}
    if (digitalRead(RESET) == LOW) { Serial.println("RESET PRESSED ");rtc = rtc+1; Serial.println(rtc); lcd.setCursor(0,2); lcd.print("Reset Pressed");} 
    if (digitalRead(OTHER) == LOW) { Serial.println("OTHER PRESSED ");otc = otc+1; Serial.println(otc); lcd.setCursor(0,3); lcd.print("Cliff Presed");}
    if (rtc > 1 and ctc > 1 and otc > 1 and wtc > 1) {xtc = 10;}
    
    
    delay(20);
   }
   lcd.setCursor(16,0); lcd.print("#"); delay(100);
   lcd.setCursor(17,0); lcd.print("#"); delay(100);
   lcd.setCursor(18,0); lcd.print("#"); delay(100);
   lcd.setCursor(19,0); lcd.print("#"); delay(100);
   lcd.setCursor(19,0); lcd.print("#"); delay(100);
   lcd.setCursor(19,1); lcd.print("#"); delay(100);
   lcd.setCursor(19,2); lcd.print("#"); delay(100);
   lcd.setCursor(19,3); lcd.print("#"); delay(100);
   lcd.setCursor(18,3); lcd.print("#"); delay(100);
   lcd.setCursor(17,3); lcd.print("#"); delay(100);
   lcd.setCursor(16,3); lcd.print("#"); delay(100);
   lcd.setCursor(16,2); lcd.print("#"); delay(100);
   lcd.setCursor(16,1); lcd.print("#"); delay(100);
   delay(2000);
   
   
   
   
   
   }



void LAMP_CHECK()
{
 CLS();
 LINES();
 Serial.println("# Performing Output Lamp Test#"); 
 LINES();
 lcd.clear();LINE(0);
 lcd.setCursor(0, 1);lcd.print("    LAMP CHECK     ");
 LINE(2);
 lcd.setCursor(0, 3);
 lcd.print("  X  X  X  X  X  X");
 for (int y=0 ; y<2; y++){ 
  for (int x=0 ; x<6; x++){ 
   pinMode(BUZZ_[x], OUTPUT);
                 
   Serial.print("# Lamp                     "); Serial.print(x); Serial.println(" #");
    LINES();
   digitalWrite(BUZZ_[x],HIGH);lcd.setCursor((x+1)*3-1,3);lcd.print("O");  delay(400);  digitalWrite(BUZZ_[x],LOW); lcd.setCursor((x+1)*3-1,3);lcd.print("X");
  }
  delay(100);
 }
}
