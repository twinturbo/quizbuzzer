void soundoutput(){
  if (receivedChar == "D" ) { DMX_SETUP() ;}
  //BUZIN
  //Serial.print("Recived IN Loop"); Serial.println(receivedChar);
  //delay(2000);
  Serial.println("=====================================");
  if (receivedChar == "c1" ) { PORTB = B11111110; Serial.println(ts1); team = 1; MOVE_HEAD(1,'W');  OUTOFF();}
  if (receivedChar == "c2" ) { PORTB = B11111101; Serial.println(ts2); team = 2; MOVE_HEAD(2,'W');  OUTOFF();} 
  if (receivedChar == "c3" ) { PORTB = B11111100; Serial.println(ts3); team = 3; MOVE_HEAD(3,'W');  OUTOFF();} 
  if (receivedChar == "c4" ) { PORTB = B11111011; Serial.println(ts4); team = 4; MOVE_HEAD(4,'W');  OUTOFF();} 
  if (receivedChar == "c5" ) { PORTB = B11111010; Serial.println(ts5); team = 5; MOVE_HEAD(5,'W');  OUTOFF();} 
  if (receivedChar == "c6" ) { PORTB = B11111001; Serial.println(ts6); team = 6; MOVE_HEAD(6,'W');  OUTOFF();} 
  // Serial.print("Recived Out Loop"); Serial.println(receivedChar);
  
  //Decrement
  Serial.println("=====================================");
  if (receivedChar == "d1" ) { PORTB = B11111000;  team = 1; MOVE_HEAD(1,'R'); OUTOFF(); DECREMENT();} // } //TEAM_1 sound 0001
  if (receivedChar == "d2" ) { PORTB = B11110111;  team = 2; MOVE_HEAD(2,'R'); OUTOFF(); DECREMENT();} // } //TEAM_2 sound 0002
  if (receivedChar == "d3" ) { PORTB = B11110110;  team = 3; MOVE_HEAD(3,'R'); OUTOFF(); DECREMENT();} // } //TEAM_3 sound 0003
  if (receivedChar == "d4" ) { PORTB = B11110101;  team = 4; MOVE_HEAD(4,'R'); OUTOFF(); DECREMENT();} // } //TEAM_4 sound 0004
  if (receivedChar == "d5" ) { PORTB = B11110100;  team = 5; MOVE_HEAD(5,'R'); OUTOFF(); DECREMENT();} // } //TEAM_5 sound 0005
  if (receivedChar == "d6" ) { PORTB = B11110011;  team = 6; MOVE_HEAD(6,'R'); OUTOFF(); DECREMENT();} // } //TEAM_6 sound 0006
  
  
  
  //if (receivedChar == "s" ) { PORTB = B11111100;  team = 7;   score(); OUTOFF();} // } //TEAM_3 sound 0003
  //if (receivedChar == "m" ) { PORTB = B11111011;  team = 8;   score(); OUTOFF();} // } //TEAM_4 sound 0004
 
  //Adverts 
  if (receivedChar == "a1")  { PORTB = B11101011; OUTOFF();}  //Cadburys
  if (receivedChar == "a2")  { PORTB = B11101010; OUTOFF();}  //
  if (receivedChar == "a3")  { PORTB = B11101000; OUTOFF();}  //Snickerrs
  if (receivedChar == "a4")  { PORTB = B11100111; OUTOFF();}  //
  if (receivedChar == "a5")  { PORTB = B11100110; OUTOFF();}  //Milky Way
  if (receivedChar == "a6")  { PORTB = B11100101; OUTOFF();}  //
  if (receivedChar == "a7")  { PORTB = B11100100; OUTOFF();}  //Birdsey
  if (receivedChar == "a8")  { PORTB = B11100011; OUTOFF();}  //
  if (receivedChar == "a9")  { PORTB = B11100010; OUTOFF();}  //Aquafresh
  if (receivedChar == "a10") { PORTB = B11100001; OUTOFF();}  //
  if (receivedChar == "a11") { PORTB = B11100000; OUTOFF();}  //Ferero Roche
  if (receivedChar == "a12") { PORTB = B11011111; OUTOFF();}  //
  if (receivedChar == "a13") { PORTB = B11011111; OUTOFF();}  //PG TIPS
  if (receivedChar == "a14") { PORTB = B11011110; OUTOFF();}  //
  if (receivedChar == "a15") { PORTB = B11011101; OUTOFF();}  //Lurpack
  if (receivedChar == "a16") { PORTB = B11011100; OUTOFF();}  //
  if (receivedChar == "a17") { PORTB = B11011011; OUTOFF();}  //Brut
  if (receivedChar == "a18") { PORTB = B11011010; OUTOFF();}  //
  if (receivedChar == "a19") { PORTB = B11011001; OUTOFF();}  //Fanta
  if (receivedChar == "a20") { PORTB = B11011000; OUTOFF();}  //
    
   //Films 
  
  if (receivedChar == "f1")  { PORTB = B11010000; OUTOFF();} // Fast and Furious ( Hector Order )
  if (receivedChar == "f2")  { PORTB = B11001111; OUTOFF();} // Cut the hard lines ( Transforemess )
  if (receivedChar == "f3")  { PORTB = B11001110; OUTOFF();} // Ground Hog day
  if (receivedChar == "f4")  { PORTB = B11001101; OUTOFF();} // Now what the fuckare we suppoosed to do (Aliens)
  if (receivedChar == "f5")  { PORTB = B11001100; OUTOFF();} // Home Alone 2
  if (receivedChar == "f6")  { PORTB = B11001011; OUTOFF();} // Hal 2001
  if (receivedChar == "f7")  { PORTB = B11001010; OUTOFF();} // Monthy Python the Meaning of life
  if (receivedChar == "f8")  { PORTB = B11001001; OUTOFF();} // Tower this is Ghoist ruider ( Top Gun )
  if (receivedChar == "f9")  { PORTB = B11001000; OUTOFF();} // Muppet Christmas Carrol
  if (receivedChar == "f10") { PORTB = B11000111; OUTOFF();} // Don't Shoot Tha greenn Shit at me ( Independance day )
  if (receivedChar == "f11") { PORTB = B11000110; OUTOFF();} // Shawshank Redemption 
  if (receivedChar == "f12") { PORTB = B11000101; OUTOFF();} // Negative ghostrider , the paterni is full ( Top Gun )
  if (receivedChar == "f13") { PORTB = B11000100; OUTOFF();} // Star Wars New Hope
  if (receivedChar == "f14") { PORTB = B11000011; OUTOFF();} // Game Over ( Alien )
  if (receivedChar == "f15") { PORTB = B11000010; OUTOFF();} // The Lion King
  if (receivedChar == "f16") { PORTB = B11000001; OUTOFF();} // it's a nUix System ( Jurassic Park )
  if (receivedChar == "f17") { PORTB = B11000000; OUTOFF();} // Titanic 
  if (receivedChar == "f18") { PORTB = B10111111; OUTOFF();} // That's not a knife, this is a Knife ( Crocadile Dundee 2)
  if (receivedChar == "f19") { PORTB = B10111110; OUTOFF();} // Wolf Of wall Street
  if (receivedChar == "f20") { PORTB = B10111101; OUTOFF();} // It's the last of the V8 Interceptors.
 
  if (receivedChar == "c" ) {
      randNumber = random(1,6);
      Serial.print("Right "); Serial.println(randNumber);
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
    
    
     if (randNumber == 1 ) { PORTB = B11111110; OUTOFF();} // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 2 ) { PORTB = B11111101; OUTOFF();} // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 3 ) { PORTB = B11111100; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 4 ) { PORTB = B11111011; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 5 ) { PORTB = B11111010; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 6 ) { PORTB = B11111001; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     //digitalWrite(BUZZ_1, HIGH); digitalWrite(BUZZ_2, HIGH); digitalWrite(BUZZ_3, HIGH); digitalWrite(BUZZ_4, HIGH); digitalWrite(BUZZ_5, HIGH); digitalWrite(BUZZ_6, HIGH);
     OUTOFF();
     delay(2000);
     FLUSH();
     Serial.println("=====================================");
     Serial.println("e to Reset ");
     Serial.println("=====================================");
     receivedChar = "exit";
     readystate = 1;
     PORTB = B11111111;
     delay(1000);
     }

  //Play a wrong Chune
  if (receivedChar == "w" ) {
      DMXSerial.write(Colour,18);
         
     randNumber = random(1,6);
     Serial.print("wrong "); Serial.println(randNumber);
     if (randNumber == 1 ) { PORTB = B11111110; OUTOFF();} // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 2 ) { PORTB = B11111101; OUTOFF();} // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 3 ) { PORTB = B11111100; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 4 ) { PORTB = B11111011; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 5 ) { PORTB = B11111010; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 6 ) { PORTB = B11111001; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     DECREMENT();
     DECREMENT();
     //digitalWrite(BUZZ_1, HIGH); digitalWrite(BUZZ_2, HIGH); digitalWrite(BUZZ_3, HIGH); digitalWrite(BUZZ_4, HIGH); digitalWrite(BUZZ_5, HIGH); digitalWrite(BUZZ_6, HIGH);
     delay(2000);
     FLUSH();
     OUTOFF();
     Serial.println("=====================================");
     Serial.println("e to Reset ");
     Serial.println("=====================================");
     receivedChar = "exit";
     readystate = 1;
     PORTB = B11111111;
     delay(1000);
  }


   /*rBONUS
    if (receivedChar == "b" ) {
     Serial.println("INCREMENT");
     randNumber = random(6,8);
      if (randNumber == 6 ) { PORTB = B11111001; OUTOFF();} // delay(500); } // 22 winner
      if (randNumber == 7 ) { PORTB = B11111000; OUTOFF();} //delay(500); } // 23 yay 
      if (randNumber == 8 ) { PORTB = B11111111; OUTOFF();} //delay(500); } // 24 zing
     if (team == 1 ) SCORE_[1]++ ; 
     if (team == 2 ) SCORE_[2]++ ;
     if (team == 3 ) SCORE_[3]++ ;
     if (team == 4 ) SCORE_[4]++ ;
     if (team == 5 ) SCORE_[5]++ ;
     if (team == 6 ) SCORE_[6]++ ;
     //digitalWrite(BUZZ_1, HIGH); digitalWrite(BUZZ_2, HIGH); digitalWrite(BUZZ_3, HIGH); digitalWrite(BUZZ_4, HIGH); digitalWrite(BUZZ_5, HIGH); digitalWrite(BUZZ_6, HIGH);
     OUTOFF();
     readystate = 1;
     score();
     //PORTB = B11111111;
   }*/



  
  //  if ( C == 'R' ){Serial.println("= Colour Set Red"); DMXSerial.write(Colour,18);}
  //  if ( C == 'G' ){Serial.println("= Colour Set Green"); DMXSerial.write(Colour,54);}
  //  if ( C == 'B' ){Serial.println("= Colour Set Blue"); DMXSerial.write(Colour,72);}
   

  //RESET
  while ( receivedChar == "exit" ) {
  if (Serial.available() >0){
  String reset = Serial.readString();reset.trim();
  if ( reset == "e" ) { receivedChar = "Exit"; 
  Serial.print("reset2"); 
  delay(4000);
  DMXSerial.write(Colour,0);
  score();
  OUTOFF();
  readystate = 1;
  }
  }
  }

  
  exit;
  }
  
