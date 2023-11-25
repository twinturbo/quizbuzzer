void DMX_LOAD(){
CLS();
Serial.println("Loading DMX Values From EEPROM");
Serial.println("===============================");
for (int x=0 ; x<6; x++){DMX_X_[x] = EEPROM.read(x+1); }
for (int y=0 ; y<6; y++){DMX_Y_[y] = EEPROM.read(y+7); }
for (int z=0 ; z<6; z++){DMX_Z_[z] = EEPROM.read(z+13); }
for (int x=1 ; x<7; x++){Serial.print ("Table "); Serial.print (x); Serial.print(" "); Serial.print (DMX_X_[x-1]),Serial.print (","); Serial.print (DMX_Y_[x-1]), Serial.print (","); Serial.println (DMX_Y_[x-1]) ;}


Serial.println("Load Complete");
Serial.println("===============================");
delay(400);
Serial.println("Runing DMX Setup");
delay(5000);
DMX_SETUP();
}


void DMX_SAVE(){
CLS();
Serial.println("Saving DMX Values To EEPROM");
Serial.println("===============================");
Serial.print(" Saving X ");
delay(100);
for (int x=0 ; x<6; x++){EEPROM.write(x+1,DMX_X_[x]);Serial.print(">>");delay(200);} 
Serial.println();
Serial.print(" Saving Y ");
delay(100);
for (int y=0 ; y<6; y++){EEPROM.write(y+7,DMX_Y_[y]);Serial.print(">>");delay(200);}
Serial.println();
Serial.print(" Saving Z ");
for (int z=0 ; z<6; z++){EEPROM.write(z+13,DMX_Z_[z]);Serial.print(">>");delay(200);}
Serial.println();
Serial.println("===============================");
Serial.println("Saved To EEPROM");
delay(2000);
DMX_DISPLAY();

}


void DMX_DISPLAY() {
   Serial.println("===============================");
   Serial.println("DMX Config");
   Serial.println("===============================");
   for (int x=1 ; x<7; x++){Serial.print ("Table "); Serial.print (x); Serial.print(" "); Serial.print (DMX_X_[x-1]),Serial.print (","); Serial.print (DMX_Y_[x-1]), Serial.print (","); Serial.println (DMX_Z_[x-1]) ; delay(300);}
   
}
