void DMX_SAVE(){
CLS();
Serial.println("Saving DMX Values To EEPROM");
Serial.println("===============================");
Serial.print(" Saving X ");
lcd.clear();lcd.setCursor(0, 0);lcd.print("SAVING X");
lcd.setCursor(0, 1);
delay(100);
for (int x=0 ; x<6; x++){EEPROM.write(x+1,DMX_X_[x]);Serial.print(">>");lcd.print(">>");delay(200);} 
Serial.println();
Serial.print(" Saving Y ");
lcd.clear();lcd.setCursor(0, 0);lcd.print("SAVING Y");
lcd.setCursor(0, 1);
delay(100);
for (int y=0 ; y<6; y++){EEPROM.write(y+7,DMX_Y_[y]);Serial.print(">>");lcd.print(">>");delay(200);}
Serial.println();
Serial.print(" Saving Z ");
lcd.clear();lcd.setCursor(0, 0);lcd.print("SAVING Z");
lcd.setCursor(0, 1);
for (int z=0 ; z<6; z++){EEPROM.write(z+13,DMX_Z_[z]);Serial.print(">>");lcd.print(">>");delay(200);}
Serial.println();
Serial.print(" Saving F ");
lcd.clear();lcd.setCursor(0, 0);lcd.print("SAVING F");
lcd.setCursor(0, 1);
for (int f=0 ; f<6; f++){EEPROM.write(f+20,DMX_F_[f]);Serial.print(">>");lcd.print(">>");delay(200);}
Serial.println();
Serial.println("===============================");
Serial.println("Saved To EEPROM");
lcd.setCursor(0, 0);lcd.print("Saved To EEPROM");
lcd.setCursor(0, 1);lcd.print("<<<<<<<<>>>>>>>>");
delay(2000);
DMX_DISPLAY();

}
