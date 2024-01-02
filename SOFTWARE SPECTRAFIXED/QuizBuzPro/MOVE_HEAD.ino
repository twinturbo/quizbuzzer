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
