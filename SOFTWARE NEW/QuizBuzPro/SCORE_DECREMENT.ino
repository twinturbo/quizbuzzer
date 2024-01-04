void DECREMENT(){
     
     //Serial.println("decrement");
     if (team == 1 ) SCORE_[0] -=1 ; 
     if (team == 2 ) SCORE_[1] -=1 ;
     if (team == 3 ) SCORE_[2] -=1 ;
     if (team == 4 ) SCORE_[3] -=1 ;
     if (team == 5 ) SCORE_[4] -=1 ;
     if (team == 6 ) SCORE_[5] -=1 ;
     
}
void ZERO(){
  
    for (int x=0 ; x<6; x++){ 
    (SCORE_[x] = 0);
    
  }
  SCORE();
}
void SCORE_EEPROM(){
  for ( int T = 0 ; T <=5 ; T++) {
    EEPROM.write(SS_[T],SCORE_[T]);
  }
}

void SCORE(){
  CLS();
  lcd.clear();
  LINES();
  Serial.println("SCORE BOARD");
  LINES();
  Serial.print(SCORE_[0]); Serial.println(ts1);
  lcd.setCursor(0, 0); lcd.print("*** SCORE  BOARD ***");
  lcd.setCursor(0, 1);lcd.print(lcs1);lcd.setCursor(4, 1);lcd.print(SCORE_[0]);SCORE_EEPROM();
  Serial.print(SCORE_[1]); Serial.println(ts2);
  lcd.setCursor(9, 1);lcd.print("#");lcd.setCursor(11, 1); lcd.print(lcs2);lcd.setCursor(15, 1);lcd.print(SCORE_[1]);SCORE_EEPROM();
  Serial.print(SCORE_[2]); Serial.println(ts3);
  lcd.setCursor(0, 2);lcd.print(lcs3);lcd.setCursor(4, 2);lcd.print(SCORE_[2]);SCORE_EEPROM();
  Serial.print(SCORE_[3]); Serial.println(ts4);
  lcd.setCursor(9, 2);lcd.print("#");lcd.setCursor(11, 2); lcd.print(lcs4);lcd.setCursor(15,2);lcd.print(SCORE_[3]);SCORE_EEPROM();
  Serial.print(SCORE_[4]); Serial.println(ts5);
  lcd.setCursor(0, 3);lcd.print(lcs5);lcd.setCursor(4, 3);lcd.print(SCORE_[4]);SCORE_EEPROM();
  Serial.print(SCORE_[5]); Serial.println(ts6);
  lcd.setCursor(9, 3);lcd.print("#");lcd.setCursor(11, 3); lcd.print(lcs6);lcd.setCursor(15, 3);lcd.print(SCORE_[5]);SCORE_EEPROM();
  LINES();
  //Serial.println("D=DMX SETUP");
  Serial.println("U = UTILITY MENU");
  LINES();
  //Serial.println("q= CliffP");
  Serial.println("Decrement Team d{1-6] ");;
  Serial.println("Film   round   f[1-20]");
  Serial.println("Advert round   a[1-20]");
  LINES();
}
