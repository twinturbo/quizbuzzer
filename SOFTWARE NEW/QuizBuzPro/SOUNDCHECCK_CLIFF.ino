void SOUNDCHECK() { 
  if ( SC == "ST" ) {
  lcd.clear();lcd.setCursor(0,0);lcd.print("SOUNDCHECK");delay(2000);
  PORTB = B11111110; lcd.clear();lcd.setCursor(0,0);lcd.print(ts1); OUTOFF();
  PORTB = B11111000; OUTOFF(); //DECREMENT
  PORTB = B11111101; lcd.clear();lcd.setCursor(0,0);lcd.print(ts2); OUTOFF();
  PORTB = B11110111; OUTOFF(); //DECREMENT
  PORTB = B11111100; lcd.clear();lcd.setCursor(0,0);lcd.print(ts3); OUTOFF();
  PORTB = B11110110; OUTOFF(); //DECREMENT
  PORTB = B11111011; lcd.clear();lcd.setCursor(0,0);lcd.print(ts4); OUTOFF();
  PORTB = B11110101; OUTOFF(); //DECREMENT
  PORTB = B11111010; lcd.clear();lcd.setCursor(0,0);lcd.print(ts5); OUTOFF();
  PORTB = B11110100; OUTOFF(); //DECREMENT
  PORTB = B11111001; lcd.clear();lcd.setCursor(0,0);lcd.print(ts6); OUTOFF();
  PORTB = B11110011; OUTOFF(); //DECREMENT
  }

  
  
  if ( SC == "SA" ) {

   PORTB = B11110001; lcd.clear();lcd.setCursor(0,0);lcd.print("Cadburys");     OUTOFF(); //Cadburys
   PORTB = B11110000; lcd.clear();lcd.setCursor(0,0);lcd.print("Snickers");     OUTOFF(); //Snickerrs
   PORTB = B11101111; lcd.clear();lcd.setCursor(0,0);lcd.print("Milky Way");    OUTOFF(); //Milky Way
   PORTB = B11101110; lcd.clear();lcd.setCursor(0,0);lcd.print("Birdseye");     OUTOFF(); //Birdsey
   PORTB = B11101101; lcd.clear();lcd.setCursor(0,0);lcd.print("Aquafresh");    OUTOFF(); //Aquafresh
   PORTB = B11101100; lcd.clear();lcd.setCursor(0,0);lcd.print("Domestos");     OUTOFF(); //Birdsey
   PORTB = B11101011; lcd.clear();lcd.setCursor(0,0);lcd.print("Ferero Roche"); OUTOFF(); //Ferero Roche
   PORTB = B11101010; lcd.clear();lcd.setCursor(0,0);lcd.print("OldSpice");     OUTOFF(); //Old Spice
   PORTB = B11101001; lcd.clear();lcd.setCursor(0,0);lcd.print("PG Tips");      OUTOFF(); //PG TIPS
   PORTB = B11101000; lcd.clear();lcd.setCursor(0,0);lcd.print("Umbongo");      OUTOFF(); // Umbpongo
   PORTB = B11100111; lcd.clear();lcd.setCursor(0,0);lcd.print("Lurpack");      OUTOFF(); //Lurpack
   PORTB = B11100110; lcd.clear();lcd.setCursor(0,0);lcd.print("Milk Tray");    OUTOFF(); // Milk Tray
   PORTB = B11100101; lcd.clear();lcd.setCursor(0,0);lcd.print("Brut");         OUTOFF(); //Brut
   PORTB = B11100100; lcd.clear();lcd.setCursor(0,0);lcd.print("Castlemain");   OUTOFF(); // Castlemain
   PORTB = B11100011; lcd.clear();lcd.setCursor(0,0);lcd.print("Fanta");        OUTOFF(); //Fanta
  }


  if ( SC == "SF" ) {
 PORTB = B11100010; lcd.clear();lcd.setCursor(0,0);lcd.print("Fast And Furiois");             OUTOFF();  // Fast and Furious ( Hector Order )
 PORTB = B11100001; lcd.clear();lcd.setCursor(0,0);lcd.print("Ground Hog Day");               OUTOFF(); // Ground Hog day
 PORTB = B11100000; lcd.clear();lcd.setCursor(0,0);lcd.print("Transformers");                 OUTOFF(); // Cut the ahrd Lines
 PORTB = B11011111; lcd.clear();lcd.setCursor(0,0);lcd.print("Home Alone 2");                 OUTOFF(); // Home Alone 2
 PORTB = B11011110; lcd.clear();lcd.setCursor(0,0);lcd.print("2001 - Hal Shutdown");          OUTOFF(); // Home Alone 2
 PORTB = B11011101; lcd.clear();lcd.setCursor(0,0);lcd.print("Monty Pithon Meaning of Life"); OUTOFF();  // Monthy Python the Meaning of life
 PORTB = B11011100; lcd.clear();lcd.setCursor(0,0);lcd.print("TOP GUN ");                     OUTOFF(); // Flyby
 PORTB = B11011011; lcd.clear();lcd.setCursor(0,0);lcd.print("Muppet Christmas Carol");       OUTOFF(); // Muppet Christmas Carrol
 PORTB = B11011010; lcd.clear();lcd.setCursor(0,0);lcd.print("Aliens");                       OUTOFF(); // Now what the fuck are we supposed to do.
 PORTB = B11011001; lcd.clear();lcd.setCursor(0,0);lcd.print("Shawchank Redemtion");          OUTOFF(); // Shawshank Redemption
 PORTB = B11011000; lcd.clear();lcd.setCursor(0,0);lcd.print("Crocadile Dundee 2 ");          OUTOFF();  // Not a Knife
 PORTB = B11010111; lcd.clear();lcd.setCursor(0,0);lcd.print("Star wars New Hope");           OUTOFF(); // Star Wars New Hope
 PORTB = B11010110; lcd.clear();lcd.setCursor(0,0);lcd.print("Lion King");                    OUTOFF();  // The Lion King
 PORTB = B11010101; lcd.clear();lcd.setCursor(0,0);lcd.print("Titanic");                      OUTOFF();  // Titanic 
 PORTB = B11010100; lcd.clear();lcd.setCursor(0,0);lcd.print("Wolf of wall street");          OUTOFF();  // Wolf Of wall Street
 PORTB = B11010011; lcd.clear();lcd.setCursor(0,0);lcd.print("Mad MAx");                      OUTOFF();  // last of the V8 Interceptors
 PORTB = B11010010; lcd.clear();lcd.setCursor(0,0);lcd.print("Jurassic PArk");                OUTOFF();   // It's a Unix System
  }

 if ( SC == "SW" ) {
   PORTB = B11010001; OUTOFF();
   PORTB = B11010000; OUTOFF();
   PORTB = B11001111; OUTOFF();
   PORTB = B11001110; OUTOFF();
   PORTB = B11001101; OUTOFF();
   PORTB = B11001100; OUTOFF();
   PORTB = B11001011; OUTOFF();
   PORTB = B11001010; OUTOFF();
   PORTB = B11001001; OUTOFF();
   PORTB = B11001000; OUTOFF(); 
 }


if ( SC == "SR" ) {
    PORTB = B11000110; OUTOFF();
    PORTB = B11000101; OUTOFF();
    PORTB = B11000100; OUTOFF();
    PORTB = B11000011; OUTOFF(); 
    PORTB = B11000010; OUTOFF(); 
    PORTB = B11000001; OUTOFF();
    PORTB = B11000000; OUTOFF();
    PORTB = B10111111; OUTOFF();
 
  }
}
      
void CLIFF(){
  { 
      //lcd.clear();lcd.setCursor(0,0);lcd.print("====================");
       //           lcd.setCursor(0,1);lcd.print("     CLIFF DOG");
         //         lcd.setCursor(0,2);lcd.print("====================");
      PORTB = B11110010; OUTOFF();
      //readystate = 1;
      delay(1000);
      PORTB = B11111111;
      
    
      
      }
}

void QUIZBATTLE() {
      SPEC_FLASH(1);
      for ( int BAT = 0 ; BAT <= 10 ; BAT++){
        int BATX = (random(1,3));   
       if ( BATX == 1 ) { PORTB = B11111110; delay(1300); }
       if ( BATX == 2 ) { PORTB = B11110010; delay(1300); }
       if ( BATX == 3 ) { PORTB = B11110100; delay(1300); }
      }
      SPEC_FLASH(0);
      PORTB = B11111111;
}
  
