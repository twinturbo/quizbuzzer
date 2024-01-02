void DMX_SETUP(){
    /*
    CLS();
    Menu:
    LINES();
    Serial.println("DMX SETUP");
    LINES();
    String str = "";
    String param2 = "";
    char param = "" ;
    int Table = 0;                   
    int TC = 0;          
    while (str != "exit" ) {
          DMX_DISPLAY();
          lcd.clear();LINE(0);
          lcd.setCursor(0, 1);lcd.print("     DMX SETUP");
          LINE(2);
          LINES();
          Serial.println("Press table number to edit paramaters or 10 to exit ");
          Serial.println("Table 1, 1");
          Serial.println("Table 2, 2");
          Serial.println("Table 3, 3");
          Serial.println("Table 4, 4");
          Serial.println("Table 5, 5");
          Serial.println("Table 6, 6");
          Serial.println("Fixture, 7");
          Serial.println("Drive home, 8");
          Serial.println("End, 10");
          LINES();
          FLUSH();
          int TG = 0;
          
          while ( TC == 0 ) { 
                  if (Serial.available() > 0) { 
              Table = Serial.parseInt(); TG = 1;} //Serial.print("Table "); Serial.print (Table); Serial.print(" TG "); Serial.println(TG);}
              
           if ( Table != 0 and Table != 1 and Table != 2 and Table != 3 and Table != 4 and Table != 5 and Table != 6 and Table != 10 ){ Serial.print("Wrong Entry "); Serial.println(Table); TG=0;} 
           if ( Table == 10 ) {Serial.println("EXIT"); TC = 1;} 
           if ( TG == 1){ Serial.println("Table Selected"); TC = 1;} 
           if ( TG == 1 and Table == 0 ) { Serial.println("Table 0 Not Valid"); TC = 0; TG = 0;} 
           
          }
          if ( Table == 10 ) {break;}
         
          //FLUSH();
          ReEnter:
          lcd.clear();lcd.setCursor(0, 0);lcd.print("PARAMATER");
          if (FixMap == 1) {Serial.print("Press X - Pan, Y - Tilt, Z- Zoom  or F Focus .. for Table Paramater");Serial.println(Table);}
          if (FixMap == 2) {Serial.print("Press X - Pan or Y - Tilt .. for Table Paramater");Serial.println(Table);}
          LINES();
          //FLUSH();            
          TC = 0;
          while ( TC == 0 ) {
             param = "M";
             if (Serial.available() > 0 )
              { param = Serial.read(); Serial.print(param);
              if (param != 'z' and param != 'Z' and param != 'x' and param != 'X' and param != 'y' and param != 'Y' and param != 'f' and param != 'F' and param !='M' ) { Serial.print ("Wrong Entry > "); Serial.println(param); param='M';}
              }
              //FLUSH();           
             delay(200);
             //ReEnter:
             if (param == 'x' or param == 'X' ) { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) 
                { if (Serial.available() > 0) { int Value = Serial.parseInt(); if (Value > -1 && Value < 256){ DMX_X_[Table-1] = Value; TC = 1;break;} else Serial.println("Incorrect Value"); goto ReEnter ;}}}
            
             if (param == 'Y' or param == 'y') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) 
                { if (Serial.available() > 0) { int Value = Serial.parseInt(); if (Value > -1 && Value < 256){ DMX_Y_[Table-1] = Value; TC = 1;break;} else Serial.println("Incorrect Value"); goto ReEnter ;}}}
             
             if (param == 'Z' or param == 'z') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) 
                { if (Serial.available() > 0) { int Value = Serial.parseInt(); if (Value > -1 && Value < 256){ DMX_Z_[Table-1] = Value; TC = 1;break;} else Serial.println("Incorrect Value"); goto ReEnter ;}}}
              if (param == 'F' or param == 'f') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) 
                { if (Serial.available() > 0) { int Value = Serial.parseInt(); if (Value > -1 && Value < 256){ DMX_F_[Table-1] = Value; TC = 1;break;} else Serial.println("Incorrect Value"); goto ReEnter ;}}}
            
         
             
          }
          char ColourA = 'W';
          char ColourB;
          Serial.println ("Colour Enter Value R,G,B,W S to Skip"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ){ if (Serial.available() > 0) { char ColourA = Serial.read(); if (ColourA == 's' or ColourA == 'S10'){break;} else if (ColourA == 'R' or ColourA == 'G' or ColourA == 'B') {ColourB = ColourA;break;}}} 
          DMX_DISPLAY();
          Serial.println ("Enter Another Paramater Y/N"); Xv = 0 ; FLUSH(); while ( Xv == 0 ){ if (Serial.available() > 0) { char Value = Serial.read();  if (Value == 'Y' or Value == 'y') {goto ReEnter;} else if (Value == 'N' or Value == 'n') {TC = 1;break;}}} 
          DMX_DISPLAY();
          MOVE_HEAD(Table,ColourB);
          
          TC = 0;
          }  */
          DMX_SAVE();
          
          } 
