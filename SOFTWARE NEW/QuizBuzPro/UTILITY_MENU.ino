void UTILITY_MENU(){
 //UTILITY_LCD();
 int exit_u_m = 1;
 String char_u_m = "null";
 while ( exit_u_m != 0 ) {
  exit_u_m = 2;
  UTILITY_MX();
   while ( exit_u_m = 2 ) {
    if (Serial.available() >0){
       char_u_m = Serial.readString();char_u_m.trim();
       if ( char_u_m == "S" ) { DMX_SETUP();}
       if ( char_u_m == "F" ) { FIXTURE_DRIVE();}
       if ( char_u_m == "L" ) { DMX_LOAD();UTILITY_MX();UTILITY_MX();}
       if ( char_u_m == "W" ) { DMX_SAVE();UTILITY_MX();UTILITY_MX();}
       if ( char_u_m == "FS" ) {FIXTURE_SELECT();}
       if ( char_u_m == "V" ) { DMX_DISPLAY();delay(5000);UTILITY_MX();}
       if ( char_u_m == "G" ) { GO_GREEN(); delay(1000); GO_BLUE(); delay(1000); GO_WHITE(); delay(1000); GO_RED(); delay(1000); GO_HOME();delay(2000);UTILITY_MX();} //GOOD
       if ( char_u_m == "B" ) { BUTTON_CHECK();delay(2000);UTILITY_MX();} //GOOD
       if ( char_u_m == "R" ) { LAMP_CHECK();delay(2000);UTILITY_MX();} //GOOD
       if ( char_u_m == "K" ) { KATY();delay(2000);UTILITY_MX();} //GOOD
       if ( char_u_m == "Q" ) { LOGO();delay(2000);UTILITY_MX();}  //GOOF
       
       
       
    }
  
   
 }
}
}

void UTILITY_MX() {
     lcd.clear();
     LINE(0);
     lcd.setCursor(0,1);lcd.print("    UTILITY MENU ");
     LINE(2);
     CLS();
  LINES();
  Serial.println("Utility Menu");
  LINES();
  Serial.println("DMX");
  LINES();
  Serial.println("S = DMX Setup");
  Serial.println("F = Fixture Drive");
  Serial.println("L = DMX Load");
  Serial.println("W = DMX Write");
  Serial.println("FS = Fixture Select");
  Serial.println("V = DMX Values"); 
  Serial.println("G = Go Colour");
  LINES();
  Serial.println("TEST");
  LINES();
  Serial.println("B = Control Button Check");
  Serial.println("R = Relay Output Check");
  Serial.println("K = KATY Logo");
  Serial.println("Q = Quiz Logo");
  LINES();
  Serial.println("SOUND CHECK");
  Serial.println("SC = Captain");
  Serial.println("SA = Adverts");
  Serial.println("SF = Films");
  Serial.println("SR = Righto");
  Serial.println("SW = Wrong");
  Serial.println("SC = Cliff");
  
}
