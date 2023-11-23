void lampcheck()
{
 for (int x=1 ; x<10; x++){ 
   pinMode(BUZZ_[x], OUTPUT);
   digitalWrite(BUZZ_[x],LOW);  delay(500);  digitalWrite(BUZZ_[x],HIGH);
  }
  /*digitalWrite(BUZZ_1,LOW);  delay(500);  digitalWrite(BUZZ_1,HIGH);
  digitalWrite(BUZZ_2,LOW);  delay(500);  digitalWrite(BUZZ_2,HIGH);
  digitalWrite(BUZZ_3,LOW);  delay(500);  digitalWrite(BUZZ_3,HIGH);
  digitalWrite(BUZZ_4,LOW);  delay(500);  digitalWrite(BUZZ_4,HIGH);
  digitalWrite(BUZZ_5,LOW);  delay(500);  digitalWrite(BUZZ_5,HIGH);
  digitalWrite(BUZZ_6,LOW);  delay(500);  digitalWrite(BUZZ_6,HIGH);
*/
}
