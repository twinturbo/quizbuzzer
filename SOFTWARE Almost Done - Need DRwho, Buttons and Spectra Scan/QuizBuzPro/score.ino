void score(){
  CLS();
  Serial.println("=====================================");
  Serial.print(SCORE_[0]); Serial.println(ts1);
  Serial.print(SCORE_[1]); Serial.println(ts2);
  Serial.print(SCORE_[2]); Serial.println(ts3);
  Serial.print(SCORE_[3]); Serial.println(ts4);
  Serial.print(SCORE_[4]); Serial.println(ts5);
  Serial.print(SCORE_[5]); Serial.println(ts6);
  Serial.println("=====================================");
  Serial.println("D=DMX SETUP");
  Serial.println("q= CliffP");
  Serial.println("Decrement Team d{1-6] ");;
  Serial.println("Film round  ROUND = f[1-20]");
  Serial.println("Advert round  ROUND = a[1-20]");
  Serial.println("=====================================");
}
