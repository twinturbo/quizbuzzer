void GO_COLOUR(int Cols){
  //lcd.clear();lcd.setCursor(0,0);lcd.print("GREEN");
  DMXSerial.write(Dimmer, 255 );
  DMXSerial.write(Shutter, 255);
  DMXSerial.write(Colour, Cols);
}

void GO_HOME() {
    lcd.clear();
    LINE(0);
    lcd.setCursor(0,1);
    lcd.print("#    MOVING HEAD   #");
    lcd.setCursor(0,2);
    lcd.print("#       HOME       #");
    LINE(3);
    
    DMXSerial.write(Focus,128); 
    DMXSerial.write(Pans, 128); 
    DMXSerial.write(Tilt, 128);
    DMXSerial.write(Zoom, 128);
    GO_COLOUR(BLUE);
    DMXSerial.write(Dimmer, 255);
    DMXSerial.write(Shutter, 255);
    Serial.println("Gobo Set");DMXSerial.write(Prism, 60); 
    Serial.println("Prism Set");DMXSerial.write(Prism, 50); 
    Serial.println("Rotate Set");DMXSerial.write(Rotate, 120); 
    
    
    
    delay(2000);
}
