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
