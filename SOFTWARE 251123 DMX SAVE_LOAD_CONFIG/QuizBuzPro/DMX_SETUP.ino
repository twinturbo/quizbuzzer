void DMX_SETUP(){
    CLS();
    DMX_DISPLAY();
    Serial.println("===============================");
    Serial.println("DMX SETUP");
    Serial.println("===============================");
    String str = "";
    String param2 = "";
    char param = "" ;
    int Table = 0;                   
    int TC = 0;          
    while (str != "exit" ) {
          Serial.println("===============================");
          Serial.println("Press table number to edit paramaters or 10 to exit ");
          Serial.println("Table 1, 1");
          Serial.println("Table 2, 2");
          Serial.println("Table 3, 3");
          Serial.println("Table 4, 4");
          Serial.println("Table 5, 5");
          Serial.println("Table 6, 6");
          Serial.println("End, 10");
          Serial.println("===============================");                
          FLUSH();
          while ( TC == 0 ) { 
            if (Serial.available() > 0) { 
              Table = Serial.parseInt(); 
              TC = 1;}
           if ( Table == 10 ) {break;} 
          }

          if ( Table == 10 ) {break;}
         
          FLUSH();
       
          Serial.print("Press X Y or Z for Table Paramater");Serial.println(Table);
          Serial.println("===============================");             
          TC = 0;
          while ( TC == 0 ) {
             param = "M";
             if (Serial.available() > 0 )
              { param = Serial.read(); Serial.print(param);
              Serial.println(" < Recived ");
              FLUSH();
              }
             ///delay(200);
             if (param == 'X') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) { if (Serial.available() > 0) { DMX_X_[Table-1] = Serial.parseInt(); TC = 1;break;}}}
             if (param == 'Y') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) { if (Serial.available() > 0) { DMX_Y_[Table-1] = Serial.parseInt(); TC = 1;break;}}}
             if (param == 'Z') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) { if (Serial.available() > 0) { DMX_Z_[Table-1] = Serial.parseInt(); TC = 1;break;}}}
             
          }  
          TC = 0;
          DMX_SAVE();
          } 
  }
