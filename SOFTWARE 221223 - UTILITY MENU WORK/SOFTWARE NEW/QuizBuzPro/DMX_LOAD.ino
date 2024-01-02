void DMX_LOAD(){
CLS();
Serial.println("Loading DMX Values From EEPROM");
LINES();
lcd.clear(); lcd.setCursor(0, 0); lcd.print(" Loading DMX Values"); 
lcd.setCursor(0,1);lcd.print("     From EEPROM");
lcd.setCursor(0, 1);
LINE(1);
delay(500);
lcd.setCursor(0, 2);
lcd.print("X ");
lcd.setCursor(2, 2);
for (int x=0 ; x<6; x++){DMX_X_[x] = EEPROM.read(x+1); lcd.print("<<<");delay(120);}
delay(100);
lcd.setCursor(0, 2);
lcd.print("                    ");
lcd.setCursor(0, 2);
lcd.print("Y ");
lcd.setCursor(2, 2);
for (int y=0 ; y<6; y++){DMX_Y_[y] = EEPROM.read(y+7); lcd.print("<<<");delay(120);}
delay(100);
lcd.setCursor(0, 2);
lcd.print("                    ");
lcd.setCursor(0, 2);
lcd.print("Z ");
lcd.setCursor(2, 2);
for (int z=0 ; z<6; z++){DMX_Z_[z] = EEPROM.read(z+13); lcd.print("<<<");delay(120); }
delay(100);
lcd.setCursor(0, 2);
lcd.print("                    ");
lcd.setCursor(0, 2);
lcd.print("F ");
lcd.setCursor(2, 2);
for (int f=0 ; f<6; f++){DMX_F_[f] = EEPROM.read(f+20) ;lcd.print("<<<");delay(120);}
delay(300);
lcd.setCursor(0, 2);
lcd.print("    LOAD COMPLETE   ");
lcd.setCursor(0, 3);
lcd.print("<<<<<<<<<<>>>>>>>>>>");


DMX_DISPLAY();

Serial.println("Settings Load Complete");
LINES();
Serial.println("Fixture Map Primary fixture is");
LINES();
FixMap = EEPROM.read(40);
if (FixMap == 1 ) 
{ Serial.println("200 Zoom");
Shutter = 5 ; //240
Dimmer = 4 ; //255
Colour = 6 ; // red 18, gren 54, white 0, blue 72
Focus = 10 ; //0-255
Zoom = 11 ; //0-255
Pans = 1 ; //0=255
Tilt = 2 ; //0-255
Speed = 3 ; //3-245 fast - slow
Gobo = 8 ; //Open 4 , Goboe  70
Prism = 12 ; //open 4 , value 50 
Serial.println("Configuring Starting Paramaters");
LINES();
Serial.println("Shutter Set");DMXSerial.write(Shutter, 255); 
Serial.println("Dimmer Set");DMXSerial.write(Dimmer, 255); 
Serial.println("Colour Set");DMXSerial.write(Colour, 18); 
Serial.println("Focus Set");DMXSerial.write(Focus, 128); 
Serial.println("Zoom Set");DMXSerial.write(Zoom, 128); 
Serial.println("Pan Set");DMXSerial.write(Pans, 128); 
Serial.println("Speed Set");DMXSerial.write(Speed, 0); 
Serial.println("Gobo Set");DMXSerial.write(Gobo, 70); 
Serial.println("Prism Set");DMXSerial.write(Prism, 50); 
Serial.println("Rotate Set");DMXSerial.write(Rotate, 100); 
}


if (FixMap == 2 ) 
{Serial.println("Phantom 250");
Shutter = 11+3 ; //255
//int Dimmer = 8+3 ; //0
Colour = 9+3 ; // red 32, gren64, white 0
//int Focus = 6+3 ; //0-255
Pans = 1+3 ; //0=255
Tilt = 2+3 ; //0-255
Speed = 5+3 ; //255
Serial.println("Configuring Starting Paramaters");
Serial.println("===============================");
Serial.println("Shutter Set");DMXSerial.write(Shutter, 255); 
Serial.println("Dimmer Set");DMXSerial.write(Dimmer, 255); 
Serial.println("Colour Set");DMXSerial.write(Colour, 0); 
Serial.println("Focus Set");DMXSerial.write(Focus, 128); 
Serial.println("Pan Set");DMXSerial.write(Pans, 165); 
Serial.println("Tilt Set");DMXSerial.write(Tilt, 131); 
Serial.println("Speed Set");DMXSerial.write(Speed, 0); 
}





delay(400);
Serial.println("Runing DMX Pos Check ");
delay(500);

//DMX_SETUP();


}
