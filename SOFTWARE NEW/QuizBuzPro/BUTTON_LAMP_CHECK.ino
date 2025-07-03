void YN(int YNA){
  Serial.print("YNA"); Serial.println(YNA);
  switch(YNA){
  case 0: lcd.setCursor(0, 2);lcd.print("Is Disabled");break;
  case 1: lcd.setCursor(0, 2);lcd.print("Is Enabled");break;
  }
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
  /*
  
  Serial.print(EEPROM.read(KOB)); Serial.print(" K "); Serial.println(katy);
  Serial.print(EEPROM.read(LOB)); Serial.print(" Log "); Serial.println(LOGOd);
  Serial.print(EEPROM.read(AOM)); Serial.print(" Lamp "); Serial.println(lamp);
  Serial.print(EEPROM.read(BOB)); Serial.print(" B ");Serial.println(button);
  Serial.print(EEPROM.read(COB)); Serial.print(" C ");Serial.println(captain);
  Serial.print(EEPROM.read(S_S)); Serial.print(" P ");Serial.println(S_S_V);
  for ( int opt = 1 ; opt <= 6 ; opt ++){
  int optarray = opt - 1; 
  
  int BE[6] {KOB,LOB,AOM,BOB,COB,S_S};
  int BV[6] { katy, LOGOd, lamp, button, captain, S_S_V };
  String BT[6] {"Katy Logo", "Quiz Logo" , "Lamp test" , "Button Test", "Captain Test", "Persistence"};

  lcd.setCursor(0, 1);lcd.print(BT[optarray]);lcd.print(" On Boot");
  Serial.print("OPT ARRAY ");Serial.println(optarray);
  Serial.print("OPT ");Serial.println(opt);
  Serial.print("LOGOd " ); Serial.println(LOGOd);
    Serial.print(BT[optarray]); Serial.print(" BE BEFORE "); Serial.println(EEPROM.read(BE[optarray]));
  Serial.print(BT[optarray]); Serial.print(" BV BEFORE "); Serial.println(BV[optarray]);
  YN(BV[optarray]);
  Serial.print(BT[optarray]); Serial.print(" BV SELECT "); Serial.println(BV[optarray]);
  while ( ANS == 0 ) { 
    Serial.print(BT[optarray]); Serial.print(" inloop "); Serial.println(BV[optarray]);
    if (digitalRead(CORRECT) == 0 ) {EEPROM.write(BE[optarray],1); ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print(BT[optarray]);lcd.print(" = Yes");} 
    if (digitalRead(WRONG)   == 0 ) {EEPROM.write(BE[optarray],0); ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print(BT[optarray]);lcd.print(" = No");} 
    delay(1000);
    }
  //Serial.print(BT[optarray]); Serial.print(" BV AFTER "); Serial.println(BV[optarray]);
  Serial.print(BT[optarray]); Serial.print(" BE AFTER "); Serial.println(EEPROM.read(BE[optarray]));
  delay(2000);
  
  ANS = 0;  
  }*/


  
  
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
  lcd.setCursor(0, 1);lcd.print("Score Persist ReBoot");
  YN(S_S_V);
  while ( ANS == 0 ) { 
    if (digitalRead(CORRECT) == 0 ) {EEPROM.write(S_S,1); S_S_V = 1; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Persistence = Yes");} 
    if (digitalRead(WRONG)   == 0 ) {EEPROM.write(S_S,0); S_S_V = 0; ANS = 1; CLINE(1),CLINE(2),CLINE(3),lcd.setCursor(0, 1); lcd.print("Persistence = No");} 
    }
  

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
    if (digitalRead(WRONG) == LOW) { /*Serial.println("WRONG PRESSED ")*/;wtc = wtc+1; /*Serial.println(wtc);*/ lcd.setCursor(0,0); lcd.print("Wrong Pressed");PORTB = 5;OUTOFF();}
    if (digitalRead(CORRECT) == LOW) { /*Serial.println("CORRECT PRESSED ");*/ctc = ctc+1; /*Serial.println(ctc); */lcd.setCursor(0,1); lcd.print("Right Pressed");PORTB = 6;OUTOFF();}
    if (digitalRead(RESET) == LOW) { /*Serial.println("RESET PRESSED ")*/;rtc = rtc+1; /*Serial.println(rtc);*/ lcd.setCursor(0,2); lcd.print("Reset Pressed");PORTB = 3;OUTOFF();} 
    if (digitalRead(OTHER) == LOW) { /*Serial.println("OTHER PRESSED ")*/;otc = otc+1; /*Serial.println(otc); */ lcd.setCursor(0,3); lcd.print("Cliff Pressed");PORTB = 4;OUTOFF();}
    if (rtc > 0 and ctc > 0 and otc > 0 and wtc > 0) {xtc = 10;}
      
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
