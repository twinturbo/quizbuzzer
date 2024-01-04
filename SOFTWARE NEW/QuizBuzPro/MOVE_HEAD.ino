void ROUNDER(){
  PORTB = 15;
  Serial.println("ENTRY");
  DMXSerial.write(Shutter, 200);
  DMXSerial.write(Prism, 60); 
  DMXSerial.write(Rotate, 120); 
  SPEC_COL(random(3,5));
  SPEC_FLASH(0);
  GO_COLOUR(BLUE);
  
  for ( int show = 0 ; show <= 10 ; show ++ ){
  int randy1 = random(0,3);
  int randy[4] = {14,55,0,70};
  int randy2 = randy[randy1];
  SPEC_COL(random(3,5));
  SPEC_FLASH(1);
  DMXSerial.write(Tilt, 30); 
  DMXSerial.write(Pans, 100); 
  delay(700);
  DMXSerial.write(Pans, 70);
  delay(700);
  DMXSerial.write(Tilt, 20); 
  DMXSerial.write(Pans, 100); 
  delay(700);
  DMXSerial.write(Tilt, 35); 
  DMXSerial.write(Pans, 85);
  delay(700);
  DMXSerial.write(Tilt, 20); 
  DMXSerial.write(Pans, 85);
  delay(700);
  DMXSerial.write(Tilt, 50); 
  DMXSerial.write(Pans, 85);
  delay(700);
  DMXSerial.write(Tilt, 30); 
  DMXSerial.write(Pans, 100); 
  delay(700);
  GO_COLOUR(randy2);
   
}
  DMXSerial.write(Shutter, 255);
  DMXSerial.write(Prism, 2); 
  DMXSerial.write(Rotate, 120); 
  SPEC_FLASH(0); 
  PORTB = 255;
}


void MOVE_HEAD(int X,char C){
  /*lcd.clear();
  LINE(0);
              lcd.setCursor(0, 1);lcd.print("     MOVE HEAD      ");
  LINE(2);*/
  int Table = X-1;
    LINES();
    Serial.print("= Setting Moving Head for table = "); Serial.print(X); Serial.println(" =");
    LINES();
    //Serial.print("= Focus Set to = "); Serial.println(DMX_Z_[Table]); 
    DMXSerial.write(Focus, DMX_Z_[Table]); 
    //Serial.print("= Pan Set to = "); Serial.println(DMX_X_[Table]); 
    DMXSerial.write(Pans, DMX_X_[Table]); 
    //Serial.print("= Tilt Set to = "); Serial.println(DMX_Y_[Table]); 
    DMXSerial.write(Tilt, DMX_Y_[Table]);
    //Serial.print("= Zoom Set to = "); Serial.println(DMX_F_[Table]); 
    DMXSerial.write(Zoom, DMX_F_[Table]);
    DMXSerial.write(Prism, 0);
    DMXSerial.write(Rotate, 0);
    DMXSerial.write(Gobo, 0);
   
    
      
    LINES();
      if ( C == 'W' ){/*Serial.println("= Colour Set White");*/ GO_COLOUR(WHITE);}
    if ( C == 'R' ){/*Serial.println("= Colour Set Red"); */GO_COLOUR(RED);}
    if ( C == 'G' ){/*Serial.println("= Colour Set Green"); */GO_COLOUR(GREEN);}
    if ( C == 'B' ){/*Serial.println("= Colour Set Blue"); */GO_COLOUR(BLUE);}
  
  
 
  LINES();
  Serial.println("Press Correct Button = command c");
  Serial.println("Press Wrong Button = command w");
  LINES();
  
}
