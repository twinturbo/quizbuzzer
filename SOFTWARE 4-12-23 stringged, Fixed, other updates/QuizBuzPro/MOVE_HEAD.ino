void MOVE_HEAD(int X,char C){
  int Table = X-1;
  if ( FixMap == 1 ) { 
    CLS();
   Serial.println("======================================");
    Serial.print("= Setting Moving Head for table = "); Serial.print(X); Serial.println(" =");
    Serial.println("=====================================");
    Serial.print("= Focus Set to = "); Serial.println(DMX_Z_[Table]); DMXSerial.write(Focus, DMX_Z_[Table]); 
    Serial.print("= Pan Set to = "); Serial.println(DMX_X_[Table]); DMXSerial.write(Pans, DMX_X_[Table]); 
    Serial.print("= Tilt Set to = "); Serial.println(DMX_Y_[Table]); DMXSerial.write(Tilt, DMX_Y_[Table]);
    Serial.print("= Zoom Set to = "); Serial.println(DMX_F_[Table]); DMXSerial.write(Zoom, DMX_F_[Table]);
    
    Serial.println("=====================================");
    if ( C == 'W' ){Serial.println("= Colour Set White"); DMXSerial.write(Colour,0);}
    if ( C == 'R' ){Serial.println("= Colour Set Red"); DMXSerial.write(Colour,18);}
    if ( C == 'G' ){Serial.println("= Colour Set Green"); DMXSerial.write(Colour,54);}
    if ( C == 'B' ){Serial.println("= Colour Set Blue"); DMXSerial.write(Colour,72);}
  }

  if ( FixMap == 2 ) { 
       Serial.println("=====================================");
      Serial.print("= Setting Moving Head for table = "); Serial.print(X); Serial.println(" =");
    Serial.println("=====================================");
    //Serial.print("= Focus Set to = "); Serial.print(DMX_Z_[Table]); DMXSerial.write(Focus, DMX_Z_[Table]); 
    Serial.print("= Pan Set to = "); Serial.println(DMX_X_[Table]); DMXSerial.write(Pans, DMX_X_[Table]); 
    Serial.print("= Tilt Set to = "); Serial.println(DMX_Y_[Table]); DMXSerial.write(Tilt, DMX_Y_[Table]);
    Serial.println("====================================");
    
    //Serial.println("Tilt Set"); DMXSerial.write(Tilt, DMX_Z_[X-1]);
     if ( C == 'W' ){Serial.println("= Colour Set White"); DMXSerial.write(Colour,0);}
    if ( C == 'R' ){Serial.println("= Colour Set Red"); DMXSerial.write(Colour,84);}
    if ( C == 'G' ){Serial.println("= Colour Set Green"); DMXSerial.write(Colour,60);}
    if ( C == 'B' ){Serial.println("= Colour Set Blue"); DMXSerial.write(Colour,72);}
    
  }
}
