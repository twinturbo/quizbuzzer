void LAMP_CHECK()
{
 CLS();
 Serial.println("======================================");
 Serial.println("= Performing Output Lamp Check       = "); 
 Serial.println("======================================"); 
 lcd.clear();LINE(0);
 lcd.setCursor(0, 1);lcd.print("    LAMP CHECK     ");
 LINE(2);
 lcd.setCursor(0, 3);
 lcd.print("  X  X  X  X  X  X");
 for (int y=0 ; y<2; y++){ 
  for (int x=0 ; x<6; x++){ 
   pinMode(BUZZ_[x], OUTPUT);
   Serial.print("= Lamp                            = "); Serial.print(x); Serial.println(" =");
    Serial.println("===================================");
   digitalWrite(BUZZ_[x],HIGH);lcd.setCursor((x+1)*3-1,3);lcd.print("O");  delay(400);  digitalWrite(BUZZ_[x],LOW); lcd.setCursor((x+1)*3-1,3);lcd.print("X");
  }
  delay(100);
 }
}
