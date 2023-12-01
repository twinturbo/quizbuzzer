void DMX_LOAD(){
CLS();
Serial.println("Loading DMX Values From EEPROM");
Serial.println("===============================");
for (int x=0 ; x<6; x++){DMX_X_[x] = EEPROM.read(x+1); }
for (int y=0 ; y<6; y++){DMX_Y_[y] = EEPROM.read(y+7); }
for (int z=0 ; z<6; z++){DMX_Z_[z] = EEPROM.read(z+13); }
for (int x=1 ; x<7; x++){Serial.print ("Table "); Serial.print (x); Serial.print(" "); Serial.print (DMX_X_[x-1]),Serial.print (","); Serial.print (DMX_Y_[x-1]), Serial.print (","); Serial.println (DMX_Y_[x-1]) ;}
Serial.println("Settings Load Complete");
Serial.println("===============================");
Serial.println("PAR TEST");
DMXSerial.write(1, 255);
delay(500);
DMXSerial.write(1, 0);
DMXSerial.write(2, 255);
delay(500);
DMXSerial.write(2, 0);
DMXSerial.write(3, 255);
delay(500);
DMXSerial.write(0, 255);
Serial.println("Fixture Map Primary fixture is");
Serial.println("===============================");

FixMap = EEPROM.read(20);
if (FixMap == 1 ) 
{ Serial.println("MX-10");
Shutter = 1+3 ; //240
Dimmer = 2+3 ; //255
Colour = 3+3 ; // red 84, gren60, white 0, blue 72
Focus = 6+3 ; //0-255
Pans = 8+3 ; //0=255
Tilt = 10+3 ; //0-255
Speed = 12+3 ; //3-245 fast - slow
Serial.println("Configuring Starting Paramaters");
Serial.println("===============================");
Serial.println("Shutter Set");DMXSerial.write(Shutter, 240); 
Serial.println("Dimmer Set");DMXSerial.write(Dimmer, 255); 
Serial.println("Colour Set");DMXSerial.write(Colour, 0); 
Serial.println("Focus Set");DMXSerial.write(Focus, 128); 
Serial.println("Pan Set");DMXSerial.write(Pans, 128); 
Serial.println("Tilt Set");DMXSerial.write(Tilt, 128); 
Serial.println("Speed Set");DMXSerial.write(Speed, 3); 
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
//Serial.println("Dimmer Set");DMXSerial.write(Dimmer, 255); 
Serial.println("Colour Set");DMXSerial.write(Colour, 0); 
//Serial.println("Focus Set");DMXSerial.write(Focus, 128); 
Serial.println("Pan Set");DMXSerial.write(Pans, 165); 
Serial.println("Tilt Set");DMXSerial.write(Tilt, 131); 
Serial.println("Speed Set");DMXSerial.write(Speed, 0); 
}





delay(400);
Serial.println("Runing DMX Setup");
delay(500);
//DMX_SETUP();
}
