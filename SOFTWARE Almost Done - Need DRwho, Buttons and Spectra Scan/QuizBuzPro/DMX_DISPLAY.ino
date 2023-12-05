void DMX_DISPLAY() {
   Serial.println("===============================");
   Serial.println("DMX Config");
   Serial.println("===============================");
   for (int x=0 ; x<6; x++){Serial.print ("Table "); Serial.print (x+1); Serial.print(" "); Serial.print (DMX_X_[x]),Serial.print (","); Serial.print (DMX_Y_[x]), Serial.print (","); Serial.print(DMX_Z_[x]); Serial.print (","); Serial.println (DMX_F_[x]) ;}
   
}
