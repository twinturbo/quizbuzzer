void score(){
  Serial.println("----------------------------------------------------------------------");
  Serial.print(SCORE_[0]); Serial.println(ts1);
  Serial.print(SCORE_[1]); Serial.println(ts2);
  Serial.print(SCORE_[2]); Serial.println(ts3);
  Serial.print(SCORE_[3]); Serial.println(ts4);
  Serial.print(SCORE_[4]); Serial.println(ts5);
  Serial.print(SCORE_[5]); Serial.println(ts6);
  //Serial.print(SCORE_[6]); Serial.println(ts7);
  //Serial.print(SCORE_[7]); Serial.println(ts8);
  Serial.println("----------------------------------------------------------------------");
  Serial.println("Press i=wrong r=right a=cliff d=halliday" );
  Serial.println("k=CIST w=DUC s=Scumbag m=deer 5=Lowda h=Life" );
  Serial.println("D=DMX SETUP");
  Serial.println("MUSIC ROUND");
  Serial.println("----------------------------------------------------------------------");
}