void UTILITY_MENU(){
 //UTILITY_LCD();
 int exit_u_m = 1;
 String char_u_m = "null";
 while ( exit_u_m != 0 ) {
  exit_u_m = 2;
  UTILITY_MX();
    while ( exit_u_m == 2 ) {
    if (Serial.available() >0){
       char_u_m = Serial.readString();char_u_m.trim();
       //Lightting Checks
       if ( char_u_m == "F" ) { FIXTURE_DRIVE();UTILITY_MX();}
       if ( char_u_m == "L" ) { DMX_LOAD();UTILITY_MX();} //Good
       if ( char_u_m == "W" ) { DMX_SAVE();UTILITY_MX();} //Good
       //if ( char_u_m == "FS" ) {FIXTURE_SELECT();}  /removed
       if ( char_u_m == "V" ) { DMX_DISPLAY();delay(5000);UTILITY_MX();} //good
       if ( char_u_m == "G" ) { GO_COLOUR(GREEN); delay(1000); GO_COLOUR(BLUE); delay(1000); GO_COLOUR(RED); delay(1000); GO_COLOUR(WHITE); delay(1000); GO_HOME();delay(2000);UTILITY_MX();} //GOOD
       if ( char_u_m == "SL" ) { SPEC_SL(); UTILITY_MX();} //GOOD
       if ( char_u_m == "HS" ) { ROUNDER(); UTILITY_MX();} //GOOD
       //HArdware Checks
       if ( char_u_m == "B" ) { BUTTON_CHECK();delay(2000);UTILITY_MX();} //GOOD
       if ( char_u_m == "R" ) { LAMP_CHECK();delay(2000);UTILITY_MX();} //GOOD
       if ( char_u_m == "K" ) { KATY();delay(2000);UTILITY_MX();} //GOOD
       if ( char_u_m == "Q" ) { LOGO();delay(2000);UTILITY_MX();}  //GOOF
       if ( char_u_m == "ST") { SC = "ST"; SOUNDCHECK(); UTILITY_MX(); } //GOOG
       if ( char_u_m == "SA") { SC = "SA"; SOUNDCHECK(); UTILITY_MX(); } //GOOD
       if ( char_u_m == "SF") { SC = "SF"; SOUNDCHECK(); UTILITY_MX(); } //GOOG
       if ( char_u_m == "SR") { SC = "SR"; SOUNDCHECK(); UTILITY_MX(); } //GOOD
       if ( char_u_m == "SW") { SC = "SW"; SOUNDCHECK(); UTILITY_MX(); } //GOOD
       if ( char_u_m == "SC") { CLIFF(); UTILITY_MX(); } //
       
       
       
       
       
       
       
       //Utilities/
       if ( char_u_m == "SCORE" ) { SCORE_FIX();delay(2000);UTILITY_MX();}  //GOOF
       if ( char_u_m == "O" ) { BOOT_OPTIONS();delay(2000);UTILITY_MX();}  //GOOF
       if ( char_u_m == "E" ) { exit_u_m = 0; delay(2000);UTILITY_MX();}
       if ( char_u_m == "Z" ) { ZERO(); Serial.print("IF Exit UM = "); exit_u_m = 0; Serial.println(exit_u_m) ;}
       if ( char_u_m == "I" ) { lcd.clear();
          lcd.setCursor(0,0); lcd.print("         3"); delay(750);
          lcd.setCursor(0,1); lcd.print("         2"); delay(750); 
          lcd.setCursor(0,2); lcd.print("         1"); delay(750); 
          lcd.setCursor(0,3); lcd.print("     REBOOTING");delay(1000);
          resetFunc();}  //GOOF
     }
     
   }
  
}
  SCORE();
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
  Serial.println("F = Fixture Drive");
  Serial.println("L = DMX Load");
  Serial.println("W = DMX Write");
  Serial.println("FS = Fixture Select");
  Serial.println("V = DMX Values"); 
  Serial.println("G = Go Colour");
  Serial.println("SL = SOUND2LITE");
  Serial.println("HS = HEAD SWEEP");
  
  LINES();
  Serial.println("TEST");
  LINES();
  Serial.println("B = Control Button Check");
  Serial.println("R = Relay Output Check");
  Serial.println("K = KATY Logo");
  Serial.println("Q = Quiz Logo");
  LINES();
  Serial.println("SOUND CHECK");
  LINES();
  Serial.println("ST = TEAM");
  Serial.println("SA = Adverts");
  Serial.println("SF = Films");
  Serial.println("SR = Righto");
  Serial.println("SW = Wrong");
  Serial.println("SC = Cliff");
  LINES();
  Serial.println("QUIZ ADAPTIONS");
  LINES();
  Serial.println("SCORE = Score Update");
  Serial.println("O = Boot Options");
  Serial.println("Z = Zero Scores");
  Serial.println("E = Exit");
  Serial.println("I = Init 6");
  
  LINES();
  
}
