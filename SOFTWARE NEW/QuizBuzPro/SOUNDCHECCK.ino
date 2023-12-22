void soundcheck() { 
  lcd.clear();lcd.setCursor(0,0);lcd.print("SOUNDCHECK");delay(2000);
  
  if ( SC == 'T' ) { 
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

  
  
  if ( SC == 'A' ) {

   PORTB = B11110001; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Cadburys");  //Cadburys
   PORTB = B11110000; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Snickers");  //Snickerrs
   PORTB = B11101111; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Milky Way");  //Milky Way
   PORTB = B11101110; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Birdseye");  //Birdsey
   PORTB = B11101101; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Aquafresh");  //Aquafresh
   PORTB = B11101100; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Domestos");  //Birdsey
   PORTB = B11101011; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Ferero Roche");  //Ferero Roche
   PORTB = B11101010; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("OldSpice");  //Old Spice
   PORTB = B11101001; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("PG Tips");  //PG TIPS
   PORTB = B11101000; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Umbongo");  // Umbpongo
   PORTB = B11100111; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Lurpack"); //Lurpack
   PORTB = B11100110; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Milk Tray"); // Milk Tray
   PORTB = B11100101; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Brut"); //Brut
   PORTB = B11100100; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Castlemain");  // Castlemain
   PORTB = B11100011; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Fanta");  //Fanta
  }


  if ( SC == 'F' ) {
 PORTB = B11100010; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Fast And Furiois");  // Fast and Furious ( Hector Order )
 PORTB = B11100001; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Ground Hog Day"); // Ground Hog day
 PORTB = B11100000; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Transformers"); // Cut the ahrd Lines
 PORTB = B11011111; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Home Alone 2");// Home Alone 2
 PORTB = B11011110; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("2001 - Hal Shutdown"); // Home Alone 2
 PORTB = B11011101; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Monty Pithon Meaning of Life"); // Monthy Python the Meaning of life
 PORTB = B11011100; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("TOP GUN ");// Flyby
 PORTB = B11011011; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Muppet Christmas Carol"); // Muppet Christmas Carrol
 PORTB = B11011010; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Aliens"); // Now what the fuck are we supposed to do.
 PORTB = B11011001; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Shawchank Redemtion"); // Shawshank Redemption
 PORTB = B11011000; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Crocadile Dundee 2 "); // Not a Knife
 PORTB = B11010111; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Star wars New Hope"); // Star Wars New Hope
 PORTB = B11010110; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Lion King"); // The Lion King
 PORTB = B11010101; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Titanic"); // Titanic 
 PORTB = B11010100; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Wolf of wall street"); // Wolf Of wall Street
 PORTB = B11010011; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Mad MAx"); // last of the V8 Interceptors
 PORTB = B11010010; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Jurassic PArk"); // It's a Unix System
  }

 if ( SC == 'X' ) {
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


if ( SC == 'Y' ) {
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
      
  
  
  
