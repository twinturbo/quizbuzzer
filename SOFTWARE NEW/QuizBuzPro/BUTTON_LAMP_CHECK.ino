void YN(int YNA){
  Serial.print("YNA"); Serial.println(YNA);
  if (YNA == 0) { lcd.setCursor(0, 2);lcd.print("Is Disabled");}
  if (YNA == 1) { lcd.setCursor(0, 2);lcd.print("Is Enabled");}
  lcd.setCursor(0, 3);lcd.print("Right YES / Wrong NO");
  }


void BOOT_OPTIONS() {
  int ANS = 0 ;
  
  lcd.clear();
  LINE(0);
  lcd.setCursor(0, 1);lcd.print("    BOOT OPTIONS");
  LINE(2);
  delay(2000);
  lcd.clear();
  LINE(0);
  lcd.setCursor(0, 1);lcd.print("Katy Logo On Boot");
  YN(katy);
  while ( ANS == 0 ) { 
    if (digitalRead(CORRECT) == 0 ) {EEPROM.write(KOB,1); katy = 1; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Katy Logo = Yes");} 
    if (digitalRead(WRONG)   == 0 ) {EEPROM.write(KOB,0); katy = 0; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Katy Logo = No");} 
    }
  delay(2000);
  ANS = 0;  
  lcd.setCursor(0, 1);lcd.print("Quiz Logo On Boot");
  YN(LOGOd);
  while ( ANS == 0 ) { 
    if (digitalRead(CORRECT) == 0 ) {EEPROM.write(LOB,1); LOGOd = 1 ;ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Quiz Logo = Yes");} 
    if (digitalRead(WRONG)   == 0 ) {EEPROM.write(LOB,0); LOGOd = 0 ;ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Quiz Logo = No");} 
    }
  delay(2000);
  ANS = 0;  
  lcd.setCursor(0, 1);lcd.print("Lamp Test On Boot");
  YN(lamp);
  while ( ANS == 0 ) { 
    if (digitalRead(CORRECT) == 0 ) {EEPROM.write(AOM,1); lamp = 1; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Lamp Test = Yes");} 
    if (digitalRead(WRONG)   == 0 ) {EEPROM.write(AOM,0); lamp = 0; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Lamp Test = No");} 
    }
  delay(2000);
  ANS = 0;  
  lcd.setCursor(0, 1);lcd.print("Button Test On Boot");
  YN(button);
  while ( ANS == 0 ) { 
    if (digitalRead(CORRECT) == 0 ) {EEPROM.write(BOB,1); button = 1; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Button Test = Yes");} 
    if (digitalRead(WRONG)   == 0 ) {EEPROM.write(BOB,0); button = 0; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Button Test = No");} 
    }
  delay(2000);
  ANS = 0;  
  lcd.setCursor(0, 1);lcd.print("Captain Test On Boot");
  YN(captain);
  while ( ANS == 0 ) { 
    if (digitalRead(CORRECT) == 0 ) {EEPROM.write(COB,1); captain = 1; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Captain Test = Yes");} 
    if (digitalRead(WRONG)   == 0 ) {EEPROM.write(COB,0); captain = 0; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Captain Test = No");} 
    }
  delay(2000);
  ANS = 0;  
  lcd.setCursor(0, 1);lcd.print("Score Persists ReBoot");
  YN(S_S);
  while ( ANS == 0 ) { 
    if (digitalRead(CORRECT) == 0 ) {EEPROM.write(S_S,1); S_S = 1; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Persistence = Yes");} 
    if (digitalRead(WRONG)   == 0 ) {EEPROM.write(S_S,0); S_S = 0; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Persistence = No");} 
    }
  Serial.println(EEPROM.read(KOB));
  Serial.println(EEPROM.read(LOB));
  Serial.println(EEPROM.read(AOM));
  Serial.println(EEPROM.read(BOB));
  Serial.println(EEPROM.read(COB));
  Serial.println(EEPROM.read(S_S));
  /*
  int LOGOd = 0; // Quiz Logo on boot
  int lamp = 0; // Lamp Check on boot 
  int button = 0; // Button Check on boot
  int captain = 0; //captain sound on boot
 */

  
}


void BUTTON_CHECK() {
lcd.clear();lcd.setCursor(0, 0);  lcd.print("====================");
              lcd.setCursor(0, 1);lcd.print("    BUTTON CHECK    ");
              lcd.setCursor(0, 2);lcd.print("====================");
              PORTB = B00000000; OUTOFF();
//Serial.print("WRONG SHOULD BE UNPRESSED 1 > "); Serial.println(digitalRead(WRONG));
//Serial.print("RIGHT SHOULD BE UNPRESSED 1 > "); Serial.println(digitalRead(CORRECT));
//Serial.print("RESET SHOULD BE UNPRESSED 1 > "); Serial.println(digitalRead(RESET));
//Serial.print("OTHER SHOULD BE UNPRESSED 1 > "); Serial.println(digitalRead(OTHER));  
delay(1000);
int xtc = 0; 
int wtc = 0;
int rtc = 0;
int otc = 0;
int ctc = 0;
lcd.clear();
lcd.setCursor(0,0); lcd.print("Press Wrong      ");
lcd.setCursor(0,1); lcd.print("Press Right      ");
lcd.setCursor(0,3); lcd.print("Press Cliff      ");
lcd.setCursor(0,2); lcd.print("Press Reset      ");


while (xtc != 10){
    if (digitalRead(WRONG) == LOW) { /*Serial.println("WRONG PRESSED ")*/;wtc = wtc+1; /*Serial.println(wtc);*/ lcd.setCursor(0,0); lcd.print("Wrong Pressed");}
    if (digitalRead(CORRECT) == LOW) { /*Serial.println("CORRECT PRESSED ");*/ctc = ctc+1; /*Serial.println(ctc); */lcd.setCursor(0,1); lcd.print("Right Pressed");}
    if (digitalRead(RESET) == LOW) { /*Serial.println("RESET PRESSED ")*/;rtc = rtc+1; /*Serial.println(rtc);*/ lcd.setCursor(0,2); lcd.print("Reset Pressed");} 
    if (digitalRead(OTHER) == LOW) { /*Serial.println("OTHER PRESSED ")*/;otc = otc+1; /*Serial.println(otc); */ lcd.setCursor(0,3); lcd.print("Cliff Pressed");}
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
 PORTB = B00000001; OUTOFF();
 for (int y=0 ; y<2; y++){ 
  for (int x=0 ; x<6; x++){ 
   pinMode(BUZZ_[x], OUTPUT);
                 
   Serial.print("# Lamp                     "); Serial.print(x); Serial.println(" #");
    LINES();
   digitalWrite(BUZZ_[x],HIGH);lcd.setCursor((x+1)*3-1,3);lcd.print("O");  delay(200);  digitalWrite(BUZZ_[x],LOW); lcd.setCursor((x+1)*3-1,3);lcd.print("X");
  }
  delay(100);
 }
}
