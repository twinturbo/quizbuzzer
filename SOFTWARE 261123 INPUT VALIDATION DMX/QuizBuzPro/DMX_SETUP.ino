void DMX_SETUP(){
    CLS();
    Serial.println("===============================");
    Serial.println("DMX SETUP");
    Serial.println("===============================");
    String str = "";
    String param2 = "";
    char param = "" ;
    int Table = 0;                   
    int TC = 0;          
    while (str != "exit" ) {
          DMX_DISPLAY();
          Serial.println("===============================");
          Serial.println("Press table number to edit paramaters or 10 to exit ");
          Serial.println("Table 1, 1");
          Serial.println("Table 2, 2");
          Serial.println("Table 3, 3");
          Serial.println("Table 4, 4");
          Serial.println("Table 5, 5");
          Serial.println("Table 6, 6");
          Serial.println("Fixture, 7");
          Serial.println("End, 10");
          Serial.println("===============================");                
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
         
          FLUSH();
       
          Serial.print("Press X Y or Z for Table Paramater");Serial.println(Table);
          Serial.println("===============================");    
          FLUSH();            
          TC = 0;
          while ( TC == 0 ) {
             param = "M";
             if (Serial.available() > 0 )
              { param = Serial.read(); Serial.print(param);
              if (param != 'z' and param != 'y' and param != 'z' and param != 'X' and param != 'Y' and param != 'Z' and param !='M' ) { Serial.print ("Wrong Entry > "); Serial.println(param); param='M';}
              }
              //FLUSH();           
             delay(200);
             ReEnter:
             if (param == 'X' or param == 'x' ) { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) 
                { if (Serial.available() > 0) { int Value = Serial.parseInt(); if (Value > -1 && Value < 256){ DMX_X_[Table-1] = Value; TC = 1;break;} else Serial.println("Incorrect Value"); goto ReEnter ;}}}
            
             if (param == 'Y' or param == 'y') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) 
                { if (Serial.available() > 0) { int Value = Serial.parseInt(); if (Value > -1 && Value < 256){ DMX_Y_[Table-1] = Value; TC = 1;break;} else Serial.println("Incorrect Value"); goto ReEnter ;}}}
             
             if (param == 'Z' or param == 'z') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) 
                { if (Serial.available() > 0) { int Value = Serial.parseInt(); if (Value > -1 && Value < 256){ DMX_Z_[Table-1] = Value; TC = 1;break;} else Serial.println("Incorrect Value"); goto ReEnter ;}}}
             
                
             //if (param == 'Y') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) { if (Serial.available() > 0) { DMX_Y_[Table-1] = Serial.parseInt(); TC = 1;break;}}}
             //if (param == 'Z') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) { if (Serial.available() > 0) { DMX_Z_[Table-1] = Serial.parseInt(); TC = 1;break;}}}
            
          }
          TC = 0;
          }  
        
          DMX_SAVE();
          } 
