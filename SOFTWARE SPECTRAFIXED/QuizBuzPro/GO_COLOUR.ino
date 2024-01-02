void GO_COLOUR(int Cols){
  /*DMXSerial.write(17, 0 ); DMXSerial.write(16, 0 ); DMXSerial.write(15, 0 );
  /*switch (Cols)
  {case 14: DMXSerial.write(15, 255 ); break;
  case 55: DMXSerial.write(16, 255 ); break;
  case 70: DMXSerial.write(17, 255 ); break;
  
}*/
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
    SPEC_COL(5);
    DMXSerial.write(Dimmer, 255);
    DMXSerial.write(Shutter, 255);
    //Serial.println("Gobo Set");
    DMXSerial.write(Prism, 60); 
    Serial.println("Prism Set");
    //DMXSerial.write(Prism, 50); 
    //Serial.println("Rotate Set");
    DMXSerial.write(Rotate, 120); 
    
    
    
    
}
