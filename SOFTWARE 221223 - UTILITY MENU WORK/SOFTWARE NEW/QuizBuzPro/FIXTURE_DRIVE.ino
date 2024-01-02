void FIXTURE_DRIVE() {
  CLS();
  int CMap = FixMap;
  String strf = "";
  while (strf != "exit" ) {
    lcd.clear();LINE(0);
    lcd.setCursor(0, 1);            lcd.print("   FIXTURE DRIVE");
    LINE(2);
    LINES();
    Serial.println("Fixture Drive");
    LINES();
    //FLUSH();
    int TCf = 256;
    int XAX = 0;
    int XAW = 0;
    int YAX = 0;
    int YAW = 0;
    int ZAX = 0;
    int ZAW = 0;
    int FAX = 0 ;
    int FAW = 0 ;
    char AX = 'B';
    int TableD = 0;
    
    FLUSH();
    LINES();
    Serial.println("Select Table 1-6 or 10 to Exit");
    //========
    while ( TableD != 10 ){ 
        //Serial.println("Select Table 1-6 or 10 to Exit");
        while ( TableD == 0 ){ 
          if (Serial.available() > 0) 
          { 
             TableD = Serial.parseInt(); if ( TableD != 1 and TableD != 2 and TableD != 3 and TableD != 4 and TableD != 5 and  TableD!= 6 and TableD !=10 ) {Serial.println("Wrong Entry"); TableD = 0;}
          
          //if ( TableD == 10 ) {Serial.println("Tabel Exit");}
          Serial.print("TableD >>> "); Serial.println(TableD);
                  
          }
     
        }
        Serial.print("Configure table > ");Serial.println(TableD); break;
     
    }
     Serial.print("Configure table  > ");Serial.println(TableD);
    DRIVE_MENU(TableD);
    if ( TableD == 10 ) {Serial.println("Tabel Exit"); delay(2000);break;}
     DMXSerial.write(Pans, DMX_X_[TableD-1]);
     DMXSerial.write(Tilt, DMX_Y_[TableD-1]);
     DMXSerial.write(Zoom, DMX_Z_[TableD-1]);
     DMXSerial.write(Focus, DMX_F_[TableD-1]);
    
    while ( TCf == 256 ) {
      if (Serial.available() > 0) { AX = Serial.read();
               Serial.print("Configure table > ");Serial.println(TableD);
               if (AX == 'x' or AX == 'X') { XAX=0; Serial.println("Moving X till 256") ;
                  while (XAX != 256) { if (Serial.available() > 0) { XAX = Serial.parseInt(); if (XAX > -1 && XAX < 256){ Serial.println(XAX); XAW = XAX; DMX_X_[TableD-1] = XAX ; DMXSerial.write(Pans, XAX);FLUSH();}}}DRIVE_MENU(TableD); }
                              
               if (AX == 'y' or AX == 'Y') { YAX=0; Serial.println("Moving y till 256") ;
                  while (YAX != 256) { if (Serial.available() > 0) { YAX = Serial.parseInt(); if (YAX > -1 && YAX < 256){ Serial.println(YAX); YAW = YAX; DMX_Y_[TableD-1] = YAW ; DMXSerial.write(Tilt, YAX);FLUSH();}}}DRIVE_MENU(TableD);}
               
               if (AX == 'z' or AX == 'Z') { ZAX=0; Serial.println("Moving z till 256") ;
                   while (ZAX != 256) { if (Serial.available() > 0) { ZAX = Serial.parseInt(); if (ZAX > -1 && ZAX < 256){Serial.println(ZAX); ZAW = ZAX; DMX_Z_[TableD-1] = ZAW ;DMXSerial.write(Zoom,  ZAX);FLUSH();}}}DRIVE_MENU(TableD);}
               if (AX == 'f' or AX == 'F') { FAX=0; Serial.println("Moving f till 256") ;
                   while (FAX != 256) { if (Serial.available() > 0) { FAX = Serial.parseInt(); if (FAX > -1 && FAX < 256){Serial.println(FAX); FAW = FAX; DMX_F_[TableD-1] = FAW ;DMXSerial.write(Focus, FAX);FLUSH();}}}DRIVE_MENU(TableD);}
               if (AX == 'E' or AX == 'e') {TCf = 0; break;};
               if (AX == 'S' or AX == 's') {TCf = 0; DMX_SAVE();break;};
                }
      
      
      }
      
    }
  }


void DRIVE_MENU(int x){
  //CLS();
  LINES();
  Serial.print(" Values For Table > "); Serial.println(x); 
  LINES();
  Serial.println("= Pan = Tilt = Zoom = Focus =");
  LINES();
  Serial.print ("  ");Serial.print(DMX_X_[x-1]);
  Serial.print("  "); Serial.print (DMX_Y_[x-1]); 
  Serial.print ("  "); Serial.print(DMX_Z_[x-1]); 
  Serial.print ("  "); Serial.println (DMX_F_[x-1]);
  LINES();
  Serial.println("= Select Option for the Table =");
  LINES();
  Serial.println("X to Set Pan");
  Serial.println("Y to Set Tilt");
  Serial.println("Z to Set Zoom");
  Serial.println("F to Set Focus");
  Serial.println("E to Select other table");
  Serial.println("S to Save now");
  LINES();
  
}
