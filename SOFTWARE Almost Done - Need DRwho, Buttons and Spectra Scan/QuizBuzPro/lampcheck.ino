void lampcheck()
{
 CLS();
 Serial.println("======================================");
 Serial.println("= Performing Output Lamp Check       = "); 
 Serial.println("======================================"); 
 for (int y=0 ; y<3; y++){ 
  for (int x=0 ; x<6; x++){ 
   pinMode(BUZZ_[x], OUTPUT);
   Serial.print("= Lamp                            = "); Serial.print(x); Serial.println(" =");
    Serial.println("===================================");
   digitalWrite(BUZZ_[x],HIGH);  delay(100);  digitalWrite(BUZZ_[x],LOW);
  }
  delay(100);
 }
}
