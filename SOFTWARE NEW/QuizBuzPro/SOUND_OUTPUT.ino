void SOUND_OUTPUT(){

  if (receivedChar == "U" ) { UTILITY_MENU() ;}
  
  //BUZIN
  //Serial.print("Recived IN Loop"); Serial.println(receivedChar);
  //delay(2000);

  //splitup the input string into type and number
  char CA = receivedChar[0]; char CB = receivedChar[1] - 0 ; int  CC = CB - '0'; 
  //Serial.print("Dubdig ");Serial.println(CC);
  //delay(5000);
  
  if ( CA == 'c' or CA == 'C'){
   //one integer above the starting sound
   int S1 = 255;
   PORTB = S1 - CC ; Serial.println(ts[CC-1]); team = CC ; MOVE_HEAD(CC,'W'); SPEC_WHITE(); lcd.clear();LINE(0);lcd.setCursor(0,1);lcd.print(ts[CC-1]);lcd.setCursor(0,2);lcd.print(tm[CC-1]); LINE(3); OUTOFF();
  }
  
  if ( CA == 'd' or CA == 'D'){
    int S1 = 249;
     PORTB = S1 - CC ; OUTOFF(); SCORE_[CC-1] -=1; SCORE(); 
    //Decrement
  }

 
  //Adverts 
   if (receivedChar == "a1")  { PORTB = B11110001; lcd.clear();lcd.setCursor(0,0);lcd.print("Cadburys");}  //Cadburys
   if (receivedChar == "a2")  { PORTB = B11110000; lcd.clear();lcd.setCursor(0,0);lcd.print("Snickers");}  //Snickerrs
   if (receivedChar == "a3")  { PORTB = B11101111; lcd.clear();lcd.setCursor(0,0);lcd.print("Milky Way");}  //Milky Way
   if (receivedChar == "a4")  { PORTB = B11101110; lcd.clear();lcd.setCursor(0,0);lcd.print("Birdseye");}  //Birdsey
   if (receivedChar == "a5")  { PORTB = B11101101; lcd.clear();lcd.setCursor(0,0);lcd.print("Aquafresh");}  //Aquafresh
   if (receivedChar == "a6")  { PORTB = B11101100; lcd.clear();lcd.setCursor(0,0);lcd.print("Domestos");}  //Birdsey
   if (receivedChar == "a7")  { PORTB = B11101011; lcd.clear();lcd.setCursor(0,0);lcd.print("Ferero Roche");}  //Ferero Roche
   if (receivedChar == "a8")  { PORTB = B11101010; lcd.clear();lcd.setCursor(0,0);lcd.print("OldSpice");}  //Old Spice
   if (receivedChar == "a9")  { PORTB = B11101001; lcd.clear();lcd.setCursor(0,0);lcd.print("PG Tips");}  //PG TIPS
   if (receivedChar == "a10") { PORTB = B11101000; lcd.clear();lcd.setCursor(0,0);lcd.print("Umbongo");}  // Umbpongo
   if (receivedChar == "a11") { PORTB = B11100111; lcd.clear();lcd.setCursor(0,0);lcd.print("Lurpack");}  //Lurpack
   if (receivedChar == "a12") { PORTB = B11100110; lcd.clear();lcd.setCursor(0,0);lcd.print("Milk Tray");} // Milk Tray
   if (receivedChar == "a13") { PORTB = B11100101; lcd.clear();lcd.setCursor(0,0);lcd.print("Brut");}  //Brut
   if (receivedChar == "a14") { PORTB = B11100100; lcd.clear();lcd.setCursor(0,0);lcd.print("Castlemain");}  // Castlemain
   if (receivedChar == "a15") { PORTB = B11100011; lcd.clear();lcd.setCursor(0,0);lcd.print("Fanta");}  //Fanta
   //Serial.println("BREAK 3");
    
   //Films 
  
  if (receivedChar == "f1")  { PORTB = B11100010; lcd.clear();lcd.setCursor(0,0);lcd.print("Fast And Furiois"); } // Fast and Furious ( Hector Order )
  if (receivedChar == "f2")  { PORTB = B11100001; lcd.clear();lcd.setCursor(0,0);lcd.print("Ground Hog Day");} // Ground Hog day
  if (receivedChar == "f3")  { PORTB = B11100000; lcd.clear();lcd.setCursor(0,0);lcd.print("Transformers");} // Cut the ahrd Lines
  if (receivedChar == "f4")  { PORTB = B11011111; lcd.clear();lcd.setCursor(0,0);lcd.print("Home Alone 2");} // Home Alone 2
  if (receivedChar == "f5")  { PORTB = B11011110; lcd.clear();lcd.setCursor(0,0);lcd.print("2001 - Hal Shutdown");} // Home Alone 2
  if (receivedChar == "f6")  { PORTB = B11011101; lcd.clear();lcd.setCursor(0,0);lcd.print("Monty Pithon Meaning of Life");} // Monthy Python the Meaning of life
  if (receivedChar == "f7")  { PORTB = B11011100; lcd.clear();lcd.setCursor(0,0);lcd.print("TOP GUN ");} // Flyby
  if (receivedChar == "f8")  { PORTB = B11011011; lcd.clear();lcd.setCursor(0,0);lcd.print("Muppet Christmas Carol");} // Muppet Christmas Carrol
  if (receivedChar == "f9")  { PORTB = B11011010;  lcd.clear();lcd.setCursor(0,0);lcd.print("Aliens");} // Now what the fuck are we supposed to do.
  if (receivedChar == "f10") { PORTB = B11011001;  lcd.clear();lcd.setCursor(0,0);lcd.print("Shawchank Redemtion");} // Shawshank Redemption
  if (receivedChar == "f11") { PORTB = B11011000; lcd.clear();lcd.setCursor(0,0);lcd.print("Crocadile Dundee 2 ");} // Not a Knife
  if (receivedChar == "f12") { PORTB = B11010111;  lcd.clear();lcd.setCursor(0,0);lcd.print("Star wars New Hope");} // Star Wars New Hope
  if (receivedChar == "f13") { PORTB = B11010110;  lcd.clear();lcd.setCursor(0,0);lcd.print("Lion King");} // The Lion King
  if (receivedChar == "f14") { PORTB = B11010101;  lcd.clear();lcd.setCursor(0,0);lcd.print("Titanic");} // Titanic 
  if (receivedChar == "f15") { PORTB = B11010100;  lcd.clear();lcd.setCursor(0,0);lcd.print("Wolf of wall street");} // Wolf Of wall Street
  if (receivedChar == "f16") { PORTB = B11010011; lcd.clear();lcd.setCursor(0,0);lcd.print("Mad MAx");} // last of the V8 Interceptors
  if (receivedChar == "f17") { PORTB = B11010010; OUTOFF(); lcd.clear();lcd.setCursor(0,0);lcd.print("Jurassic PArk");} // It's a Unix System
  //Serial.println("BREAK 4");
  
  if (receivedChar == "R" ) {
      randNumber = random(2,11);
      //Serial.print("Right "); Serial.println(randNumber);
      lcd.clear();lcd.setCursor(0,0);lcd.print("  Ouda Da Park ");
      LINE(1);
      SPEC_COL(4);           
      GO_COLOUR(GREEN);
      SPEC_FLASH(1);
      HEAD_FLASH(1);
          
     //replace case
     switch(randNumber) {
        case 2: PORTB = 208 ;break; //208
        case 3: PORTB = 207 ;break; //207
        case 4: PORTB = 206 ;break; //206
        case 5: PORTB = 205 ;break; //205
        case 6: PORTB = 204 ;break; //204
        case 7: PORTB = 203 ;break; //203
        case 8: PORTB = 202 ;break; //202
        case 9: PORTB = 201 ;break; //201
        case 10: PORTB = 200; break; //200
        }
     /*if (randNumber == 2 ) { PORTB = B11010000; OUTOFF(); } // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 3 ) { PORTB = B11001111; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 4 ) { PORTB = B11001110; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 5 ) { PORTB = B11001101; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 6 ) { PORTB = B11001100; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 7 ) { PORTB = B11001011; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 8 ) { PORTB = B11001010; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 9 ) { PORTB = B11001001; OUTOFF(); } //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 10) { PORTB = B11001000; OUTOFF(); } //delay(500);  Serial.println(randNumber);} */
     
     
     
     OUTOFF();
     delay(2000);
     SPEC_FLASH(0);
     HEAD_FLASH(0);
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

  //Serial.println("BREAK 5");
  //Play a wrong Chune
  if (receivedChar == "W" ) {
     //DMXSerial.write(Colour,18);
         
     randNumber = random(1,10);
     //Serial.print("wrong "); Serial.println(randNumber);
     lcd.clear();lcd.setCursor(0,0);lcd.print("  WHO'S A MUPPIT!!");
                 lcd.setCursor(0,1);lcd.print("====================");
     SPEC_COL(3);            
     GO_COLOUR(RED);
     SPEC_FLASH(1);
     HEAD_FLASH(1);
     switch(randNumber) {
        case 1: PORTB = 199; break; //199
        case 2: PORTB = 198; break; //198
        case 3: PORTB = 199; break; //197
        case 4: PORTB = 196; break; //196
        case 5: PORTB = 195; break; //195
        case 6: PORTB = 194; break; //194
        case 7: PORTB = 193; break; //193
        case 8: PORTB = 192; break; //192
        case 9: PORTB = 191; break; //191
     }
     OUTOFF();
     /*if (randNumber == 1 ) { PORTB = B11000111; OUTOFF();} // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 2 ) { PORTB = B11000110; OUTOFF();} // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 3 ) { PORTB = B11000101; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 4 ) { PORTB = B11000100; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 5 ) { PORTB = B11000011; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 6 ) { PORTB = B11000010; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 7 ) { PORTB = B11000001; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 8 ) { PORTB = B11000000; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 9 ) { PORTB = B10111111; OUTOFF();} //delay(500);  Serial.println(randNumber);} */
     
     
     
     DECREMENT();
     DECREMENT();
     //digitalWrite(BUZZ_1, HIGH); digitalWrite(BUZZ_2, HIGH); digitalWrite(BUZZ_3, HIGH); digitalWrite(BUZZ_4, HIGH); digitalWrite(BUZZ_5, HIGH); digitalWrite(BUZZ_6, HIGH);
     //delay(2000);
     FLUSH();
     OUTOFF();
     SPEC_FLASH(0);
     HEAD_FLASH(0);
     LINES();
     Serial.println("e to Reset ");
     LINES();
     lcd.setCursor(0,2);lcd.print(" type e to reset or");
     lcd.setCursor(0,3);lcd.print(" press reset button");
     receivedChar = "exit";
     readystate = 1;
     PORTB = B11111111;
  }


  
    //Serial.println("BREAK 6");
    if (receivedChar == "C" ) { 
      SPEC_COL(3);
      GO_COLOUR(RED);
      DMXSerial.write(Shutter, 200);
      DMXSerial.write(Tilt, 0);
      DMXSerial.write(Pans, 0);
      DMXSerial.write(Speed, 200);
      delay(2000);
      PORTB = B11110010; 
      DMXSerial.write(Tilt, 255); DMXSerial.write(Pans, 255 );
      delay(2000);
      DMXSerial.write(Tilt, 50); DMXSerial.write(Pans, 50 );
          
      OUTOFF();
      receivedChar = "null";
      PORTB = B11111111;
      SCORE();
      Serial.print(team);
      if (team == 0 ) { GO_HOME();}
      if (team >= 1 ) {DMXSerial.write(Shutter, 255);MOVE_HEAD(team,'W');GO_COLOUR(WHITE);}
      }




 
  // Serial.println(receivedChar);
  // Serial.println("BREAK 7");
  //RESET
  //if ( receivedChar == "exit" or receivedChar == "e" ) {delay(5000);}
  while ( receivedChar == "exit" or receivedChar == "e" ) {
  if (digitalRead(OTHER) == 0 ) {CLIFF();}
  if (digitalRead(RESET) == 0 ){ reset = "e" ;}
  if ( reset == "e" ) { receivedChar = "Exit"; 
     reset = "null";
     lcd.clear();lcd.setCursor(0,1);lcd.print("RE-ARM >>>>>>>");
     OUTOFF();
     readystate = 1;
     for (int x=0 ; x<6; x++){ 
        digitalWrite(BUZZ_[x], LOW);
     }
     int ranx=(random(1,6));
     Serial.println("RAND ");Serial.print(ranx);
     if (ranx == 5){QUIZBATTLE();}
     PORTB = 7; 
     GO_COLOUR(BLUE);
     GO_HOME();
     SCORE();
     OUTOFF();
     exit;
         }
         //Serial.println("BREAK 8");
 }
  
  
  //Serial.println("made it heer 5");
  //Serial.println(receivedChar);
  //SCORE();
}
  
