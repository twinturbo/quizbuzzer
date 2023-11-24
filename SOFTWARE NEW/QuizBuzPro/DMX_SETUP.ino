void DMX_SETUP(){
    CLS();
    Serial.println("=========");
    Serial.println("DMX SETUP");
    Serial.println("=========");
    String str = "";
    String param2 = "";
    char param = "" ;
    int Table = 0;                   
    int TC = 0;          
    while (str != "exit" ) {
          Serial.println("edit table paramaters or exit ");
          Serial.println("Table 1, 1");
          Serial.println("Table 2, 2");
          Serial.println("Table 3, 3");
          Serial.println("Table 4, 4");
          Serial.println("Table 5, 5");
          Serial.println("Table 6, 6");
          Serial.println("End, 10");
                          
          FLUSH();
          while ( TC == 0 ) { 
            if (Serial.available() > 0) { 
              Table = Serial.parseInt(); 
              TC = 1;}
           if ( Table == 10 ) {break;} 
          }

          if ( Table == 10 ) {break;}
         
          FLUSH();
          CLS();
          Serial.print("X Y or Z for Table ");Serial.println(Table);
          TC = 0;
          while ( TC == 0 ) {
             param = "M";
             if (Serial.available() > 0 )
              { param = Serial.read(); Serial.print(param);
              Serial.println(" < Recived ");
              FLUSH();
              }
             delay(200);
             if (param == 'X') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) { if (Serial.available() > 0) { DMX_X_[Table-1] = Serial.parseInt(); TC = 1;break;}}}
             if (param == 'Y') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) { if (Serial.available() > 0) { DMX_Y_[Table-1] = Serial.parseInt(); TC = 1;break;}}}
             if (param == 'Z') { Serial.println ("Enter Value 0-255"); int Xv = 256 ; FLUSH(); while ( Xv > 255 ) { if (Serial.available() > 0) { DMX_Z_[Table-1] = Serial.parseInt(); TC = 1;break;}}}
             
          }  
          TC = 0;

         

         for ( Table = 0 ; Table<6 ; Table++ ){
         Serial.print("Table "); Serial.print(Table+1); Serial.print(" X,Y,Z "); Serial.print(" Values "); Serial.print(DMX_X_[Table]);Serial.print(" , "); Serial.print(DMX_Y_[Table]); Serial.print(" , "); Serial.println(DMX_Z_[Table]);
         } 
    }  
    


                  
      
   
    
   
    
    
    
    
    
    
    
    
    
    
    
    DMXSerial.init(DMXController);
          
    //String str = "dmx";
    while (str != "don" ) {
   
       if (Serial.available() > 0) {
       String str = Serial.readString();
       str.trim();
       Serial.println("DMX LOOP");
       Serial.println(str);
       if ( str == "don" ) {
        score();
        break;}
    }
  
  }
}
