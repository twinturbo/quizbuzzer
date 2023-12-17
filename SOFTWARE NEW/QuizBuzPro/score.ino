void score(){
  CLS();
  lcd.clear();
  Serial.println("=====================================");
  Serial.print(SCORE_[0]); Serial.println(ts1);
  lcd.setCursor(0, 0);lcd.print(lcs1);lcd.setCursor(2, 0);lcd.print(SCORE_[0]);
  Serial.print(SCORE_[1]); Serial.println(ts2);
  lcd.setCursor(6, 0);lcd.print(lcs2);lcd.setCursor(8, 0);lcd.print(SCORE_[1]);
  Serial.print(SCORE_[2]); Serial.println(ts3);
  lcd.setCursor(12, 0);lcd.print(lcs3);lcd.setCursor(14, 0);lcd.print(SCORE_[2]);
  Serial.print(SCORE_[3]); Serial.println(ts4);
  lcd.setCursor(0, 1);lcd.print(lcs4);lcd.setCursor(2,1);lcd.print(SCORE_[3]);
  Serial.print(SCORE_[4]); Serial.println(ts5);
  lcd.setCursor(6, 1);lcd.print(lcs5);lcd.setCursor(8, 1);lcd.print(SCORE_[4]);
  Serial.print(SCORE_[5]); Serial.println(ts6);
  lcd.setCursor(12, 1);lcd.print(lcs6);lcd.setCursor(14, 1);lcd.print(SCORE_[5]);
  Serial.println("=====================================");
  Serial.println("D=DMX SETUP");
  Serial.println("q= CliffP");
  Serial.println("Decrement Team d{1-6] ");;
  Serial.println("Film round  ROUND = f[1-20]");
  Serial.println("Advert round  ROUND = a[1-20]");
  Serial.println("=====================================");
}
