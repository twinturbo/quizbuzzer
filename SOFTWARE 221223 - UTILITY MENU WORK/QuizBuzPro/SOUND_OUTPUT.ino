void SOUND_OUTPUT(){
  if (receivedChar == "D" ) { DMX_SETUP() ;}
  if (receivedChar == "U" ) { UTILITY_MENU() ;}
  
  //BUZIN
  //Serial.print("Recived IN Loop"); Serial.println(receivedChar);
  //delay(2000);
  Serial.println("=====================================");
  if (receivedChar == "c1" ) { PORTB = B11111110; Serial.println(ts1); team = 1; MOVE_HEAD(1,'W'); lcd.clear();LINE(0);lcd.setCursor(0,1);lcd.print(ts1);lcd.setCursor(0,2);lcd.print(tm1); LINE(3); OUTOFF();}
  if (receivedChar == "c2" ) { PORTB = B11111101; Serial.println(ts2); team = 2; MOVE_HEAD(2,'W'); lcd.clear();LINE(0);lcd.setCursor(0,1);lcd.print(ts2);lcd.setCursor(0,2);lcd.print(tm2); LINE(3); OUTOFF();} 
  if (receivedChar == "c3" ) { PORTB = B11111100; Serial.println(ts3); team = 3; MOVE_HEAD(3,'W'); lcd.clear();LINE(0);lcd.setCursor(0,1);lcd.print(ts3);lcd.setCursor(0,2);lcd.print(tm3); LINE(3); OUTOFF();} 
  if (receivedChar == "c4" ) { PORTB = B11111011; Serial.println(ts4); team = 4; MOVE_HEAD(4,'W'); lcd.clear();LINE(0);lcd.setCursor(0,1);lcd.print(ts4);lcd.setCursor(0,2);lcd.print(tm4); LINE(3); OUTOFF();} 
  if (receivedChar == "c5" ) { PORTB = B11111010; Serial.println(ts5); team = 5; MOVE_HEAD(5,'W'); lcd.clear();LINE(0);lcd.setCursor(0,1);lcd.print(ts5);lcd.setCursor(0,2);lcd.print(tm5); LINE(3); OUTOFF();} 
  if (receivedChar == "c6" ) { PORTB = B11111001; Serial.println(ts6); team = 6; MOVE_HEAD(6,'W'); lcd.clear();LINE(0);lcd.setCursor(0,1);lcd.print(ts6);lcd.setCursor(0,2);lcd.print(tm6); LINE(3); OUTOFF();} 
  // Serial.print("Recived Out Loop"); Serial.println(receivedChar);
  
  //Decrement
  Serial.println("=====================================");
  if (receivedChar == "d1" ) { PORTB = B11111000;  team = 1; MOVE_HEAD(1,'R'); OUTOFF(); DECREMENT();} // } //TEAM_1 sound 0001
  if (receivedChar == "d2" ) { PORTB = B11110111;  team = 2; MOVE_HEAD(2,'R'); OUTOFF(); DECREMENT();} // } //TEAM_2 sound 0002
  if (receivedChar == "d3" ) { PORTB = B11110110;  team = 3; MOVE_HEAD(3,'R'); OUTOFF(); DECREMENT();} // } //TEAM_3 sound 0003
  if (receivedChar == "d4" ) { PORTB = B11110101;  team = 4; MOVE_HEAD(4,'R'); OUTOFF(); DECREMENT();} // } //TEAM_4 sound 0004
  if (receivedChar == "d5" ) { PORTB = B11110100;  team = 5; MOVE_HEAD(5,'R'); OUTOFF(); DECREMENT();} // } //TEAM_5 sound 0005
  if (receivedChar == "d6" ) { PORTB = B11110011;  team = 6; MOVE_HEAD(6,'R'); OUTOFF(); DECREMENT();} // } //TEAM_6 sound 0006
   
  //Adverts 
   if (receivedChar == "a1")  { PORTB = B11110001; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Cadburys");}  //Cadburys
   if (receivedChar == "a2")  { PORTB = B11110000; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Snickers");}  //Snickerrs
   if (receivedChar == "a3")  { PORTB = B11101111; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Milky Way");}  //Milky Way
   if (receivedChar == "a4")  { PORTB = B11101110; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Birdseye");}  //Birdsey
   if (receivedChar == "a5")  { PORTB = B11101101; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Aquafresh");}  //Aquafresh
 //if (receivedChar == "a6")  { PORTB = B11101100; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Domestos");}  //Birdsey
   if (receivedChar == "a7")  { PORTB = B11101011; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Ferero Roche");}  //Ferero Roche
 //if (receivedChar == "a8")  { PORTB = B11101010; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("OldSpice");}  //Old Spice
   if (receivedChar == "a9")  { PORTB = B11101001; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("PG Tips");}  //PG TIPS
 //if (receivedChar == "a10") { PORTB = B11101000; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Umbongo");}  // Umbpongo
   if (receivedChar == "a11") { PORTB = B11100111; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Lurpack");}  //Lurpack
   if (receivedChar == "a12") { PORTB = B11100110; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Milk Tray");} // Milk Tray
   if (receivedChar == "a13") { PORTB = B11100101; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Brut");}  //Brut
   if (receivedChar == "a14") { PORTB = B11100100; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Castlemain");}  // Castlemain
   if (receivedChar == "a15") { PORTB = B11100011; OUTOFF();  lcd.clear();lcd.setCursor(0,0);lcd.print("Fanta");}  //Fanta

    
   //Films 
  
  if (receivedChar == "f1")  { PORTB = B11100010; lcd.clear();lcd.setCursor(0,0);lcd.print("Fast And Furiois"); } // Fast and Furious ( Hector Order )
  if (receivedChar == "f2")  { PORTB = B11100001; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Ground Hog Day");} // Ground Hog day
  //if (receivedChar == "f3")  { PORTB = B11100000; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Transformers");} // Cut the ahrd Lines
  if (receivedChar == "f4")  { PORTB = B11011111; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Home Alone 2");} // Home Alone 2
  //if (receivedChar == "f5")  { PORTB = B11011110; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("2001 - Hal Shutdown");} // Home Alone 2
  if (receivedChar == "f6")  { PORTB = B11011101; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Monty Pithon Meaning of Life");} // Monthy Python the Meaning of life
  //if (receivedChar == "f7")  { PORTB = B11011100; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("TOP GUN ");} // Flyby
  if (receivedChar == "f8")  { PORTB = B11011011; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Muppet Christmas Carol");} // Muppet Christmas Carrol
  //if (receivedChar == "f9")  { PORTB = B11011010; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Aliens");} // Now what the fuck are we supposed to do.
  if (receivedChar == "f10") { PORTB = B11011001; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Shawchank Redemtion");} // Shawshank Redemption
  //if (receivedChar == "f11") { PORTB = B11011000; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Crocadile Dundee 2 ");} // Not a Knife
  if (receivedChar == "f12") { PORTB = B11010111; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Star wars New Hope");} // Star Wars New Hope
  if (receivedChar == "f13") { PORTB = B11010110; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Lion King");} // The Lion King
  if (receivedChar == "f14") { PORTB = B11010101; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Titanic");} // Titanic 
  if (receivedChar == "f15") { PORTB = B11010100; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Wolf of wall street");} // Wolf Of wall Street
  //if (receivedChar == "f16") { PORTB = B11010011; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Mad MAx");} // last of the V8 Interceptors
  //if (receivedChar == "f17") { PORTB = B11010010; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Jurassic PArk");} // It's a Unix System
  
 
  if (receivedChar == "R" ) {
      randNumber = random(1,10);
      Serial.print("Right "); Serial.println(randNumber);
      lcd.clear();lcd.setCursor(0,0);lcd.print("  Ouda Da Park ");
      lcd.setCursor(0,1);lcd.print("====================");
                 
      GO_GREEN();
      /*DMXSerial.write(Colour,72);
      delay(2000);
      DMXSerial.write(Colour,54);
      delay(2000);
      DMXSerial.write(Colour,72);
      delay(2000);
      DMXSerial.write(Colour,54);
      delay(2000);
      DMXSerial.write(Colour,72);
      delay(2000);
      DMXSerial.write(Colour,54);
      delay(2000);
     */
    
    
     if (randNumber == 1 ) { PORTB = B11010001; OUTOFF(); } // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 2 ) { PORTB = B11010000; OUTOFF(); } // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 3 ) { PORTB = B11001111; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 4 ) { PORTB = B11001110; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 5 ) { PORTB = B11001101; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 6 ) { PORTB = B11001100; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 7 ) { PORTB = B11001011; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 8 ) { PORTB = B11001010; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 9 ) { PORTB = B11001001; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 10) { PORTB = B11001000; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     
     
     //digitalWrite(BUZZ_1, HIGH); digitalWrite(BUZZ_2, HIGH); digitalWrite(BUZZ_3, HIGH); digitalWrite(BUZZ_4, HIGH); digitalWrite(BUZZ_5, HIGH); digitalWrite(BUZZ_6, HIGH);
     OUTOFF();
     delay(2000);
     FLUSH();
     Serial.println("=====================================");
     Serial.println("e to Reset ");
     Serial.println("=====================================");
     lcd.setCursor(0,2);lcd.print(" type e to reset or");
     lcd.setCursor(0,3);lcd.print(" press reset button");
     receivedChar = "exit";
     readystate = 1;
     PORTB = B11111111;
     delay(1000);
     }

  //Play a wrong Chune
  if (receivedChar == "W" ) {
      DMXSerial.write(Colour,18);
         
     randNumber = random(1,9);
     Serial.print("wrong "); Serial.println(randNumber);
     lcd.clear();lcd.setCursor(0,0);lcd.print("  WHO'S A MUPPIT!!");
                 lcd.setCursor(0,1);lcd.print("====================");
                 
     GO_RED();
     if (randNumber == 1 ) { PORTB = B11000111; OUTOFF();} // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 2 ) { PORTB = B11000110; OUTOFF();} // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 3 ) { PORTB = B11000101; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 4 ) { PORTB = B11000100; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 5 ) { PORTB = B11000011; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 6 ) { PORTB = B11000010; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 7 ) { PORTB = B11000001; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 8 ) { PORTB = B11000000; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 9 ) { PORTB = B10111111; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     DECREMENT();
     DECREMENT();
     //digitalWrite(BUZZ_1, HIGH); digitalWrite(BUZZ_2, HIGH); digitalWrite(BUZZ_3, HIGH); digitalWrite(BUZZ_4, HIGH); digitalWrite(BUZZ_5, HIGH); digitalWrite(BUZZ_6, HIGH);
     //delay(2000);
     FLUSH();
     OUTOFF();
     Serial.println("=====================================");
     Serial.println("e to Reset ");
     Serial.println("=====================================");
     lcd.setCursor(0,2);lcd.print(" type e to reset or");
     lcd.setCursor(0,3);lcd.print(" press reset button");
     receivedChar = "exit";
     readystate = 1;
     PORTB = B11111111;
  }

    if (receivedChar == "C" ) { 
      Serial.print("KD");
      lcd.clear();lcd.setCursor(0,0);lcd.print("====================");
                  lcd.setCursor(0,1);lcd.print("     CLIFF DOG");
                  lcd.setCursor(0,2);lcd.print("====================");
      PORTB = B11110010; OUTOFF();
      receivedChar = "null";
      //readystate = 1;
      delay(1000);
      PORTB = B11111111;
      
    
      
      }
 


  //RESET
  while ( receivedChar == "exit" ) {
  if (digitalRead(OTHER) == 0 ) {CLIFF();}
  Serial.println(digitalRead(RESET));
  if (digitalRead(RESET) == 0 ){ reset = "e";}
  //if (Serial.available() >0){
  //reset = Serial.readString();reset.trim();}
  if ( reset == "e" ) { receivedChar = "Exit"; 
     Serial.print("reset2"); 
     reset = "null";
     lcd.clear();lcd.setCursor(0,1);lcd.print("RE-ARM >>>>>>>");
     OUTOFF();
     readystate = 1;
     GO_BLUE();
     GO_HOME();
     delay(2000);
      SCORE();
     exit;
    }
  }
  
  //SCORE();
  //delay(2000);
  //exit;
}
  
