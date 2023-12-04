void soundoutput(){
  if (receivedChar == 'D' ) { DMX_SETUP() ;}
  //BUZIN
  Serial.print("Recived IN Loop"); Serial.println(receivedChar);
  delay(2000);
  
  if (receivedChar == "c1" ) { PORTB = B11111110;  team = 1; MOVE_HEAD(1,'W');  score(); OUTOFF();}
   
  if (receivedChar == "c2" ) { PORTB = B11111101;  team = 2; MOVE_HEAD(2,'W');  score(); OUTOFF();} 
  if (receivedChar == "c3" ) { PORTB = B11111100;  team = 3; MOVE_HEAD(3,'W');  score(); OUTOFF();} 
  if (receivedChar == "c4" ) { PORTB = B11111011;  team = 4; MOVE_HEAD(4,'W');  score(); OUTOFF();} 
  if (receivedChar == "c5" ) { PORTB = B11111010;  team = 5; MOVE_HEAD(5,'W');  score(); OUTOFF();} 
  if (receivedChar == "c6" ) { PORTB = B11111001;  team = 6; MOVE_HEAD(6,'W');  score(); OUTOFF();} 
   Serial.print("Recived Out Loop"); Serial.println(receivedChar);
  
  //Decrement
  if (receivedChar == "d1" ) { PORTB = B11111000;  team = 1; MOVE_HEAD(1,'R'); OUTOFF(); DECREMENT();} // } //TEAM_1 sound 0001
  if (receivedChar == "d2" ) { PORTB = B11110111;  team = 2; MOVE_HEAD(2,'R'); OUTOFF(); DECREMENT();} // } //TEAM_2 sound 0002
  if (receivedChar == "d3" ) { PORTB = B11110110;  team = 3; MOVE_HEAD(3,'R'); OUTOFF(); DECREMENT();} // } //TEAM_3 sound 0003
  if (receivedChar == "d4" ) { PORTB = B11110101;  team = 4; MOVE_HEAD(4,'R'); OUTOFF(); DECREMENT();} // } //TEAM_4 sound 0004
  if (receivedChar == "d5" ) { PORTB = B11110100;  team = 5; MOVE_HEAD(5,'R'); OUTOFF(); DECREMENT();} // } //TEAM_5 sound 0005
  if (receivedChar == "d6" ) { PORTB = B11110011;  team = 6; MOVE_HEAD(6,'R'); OUTOFF(); DECREMENT();} // } //TEAM_6 sound 0006
  
  
  
  //if (receivedChar == "s" ) { PORTB = B11111100;  team = 7;   score(); OUTOFF();} // } //TEAM_3 sound 0003
  //if (receivedChar == "m" ) { PORTB = B11111011;  team = 8;   score(); OUTOFF();} // } //TEAM_4 sound 0004
 
  //Adverts 
  if (receivedChar == "a1")  { PORTB = B11101011; /*OUTOFF();} */ delay(500); } //Cadburys
  if (receivedChar == "a2")  { PORTB = B11101010; /*OUTOFF();} */ delay(500); } //
  if (receivedChar == "a3")  { PORTB = B11101000; /*OUTOFF();} */ delay(500); } //Snickerrs
  if (receivedChar == "a4")  { PORTB = B11100111; /*OUTOFF();} */ delay(500); } //
  if (receivedChar == "a5")  { PORTB = B11100110; /*OUTOFF();} */ delay(500); } //Milky Way
  if (receivedChar == "a6")  { PORTB = B11100101; /*OUTOFF();} */ delay(500); } //
  if (receivedChar == "a7")  { PORTB = B11100100; /*OUTOFF();} */ delay(500); } //Birdsey
  if (receivedChar == "a8")  { PORTB = B11100011; /*OUTOFF();} */ delay(500); } //
  if (receivedChar == "a9")  { PORTB = B11100010; /*OUTOFF();} */ delay(500); } //Aquafresh
  if (receivedChar == "a10") { PORTB = B11100001; /*OUTOFF();} */ delay(500); } //
  if (receivedChar == "a11") { PORTB = B11100000; /*OUTOFF();} */ delay(500); } //Ferero Roche
  if (receivedChar == "a12") { PORTB = B11011111; /*OUTOFF();} */ delay(500); } //
  if (receivedChar == "a13") { PORTB = B11011111; /*OUTOFF();} */ delay(500); } //PG TIPS
  if (receivedChar == "a14") { PORTB = B11011110; /*OUTOFF();} */ delay(500); } //
  if (receivedChar == "a15") { PORTB = B11011101; /*OUTOFF();} */ delay(500); } //Lurpack
  if (receivedChar == "a16") { PORTB = B11011100; /*OUTOFF();} */ delay(500); } //
  if (receivedChar == "a17") { PORTB = B11011011; /*OUTOFF();} */ delay(500); } //Brut
  if (receivedChar == "a18") { PORTB = B11011010; /*OUTOFF();} */ delay(500); } //
  if (receivedChar == "a19") { PORTB = B11011001; /*OUTOFF();} */ delay(500); } //Fanta
  if (receivedChar == "a20") { PORTB = B11011000; /*OUTOFF();} */ delay(500); } //
    
   //Films 
  
  if (receivedChar == "f1")  { PORTB = B11010000; /*OUTOFF();} */ delay(500); } // Fast and Furious ( Hector Order )
  if (receivedChar == "f2")  { PORTB = B11001111; /*OUTOFF();} */ delay(500); } // Cut the hard lines ( Transforemess )
  if (receivedChar == "f3")  { PORTB = B11001110; /*OUTOFF();} */ delay(500); } // Ground Hog day
  if (receivedChar == "f4")  { PORTB = B11001101; /*OUTOFF();} */ delay(500); } // Now what the fuckare we suppoosed to do (Aliens)
  if (receivedChar == "f5")  { PORTB = B11001100; /*OUTOFF();} */ delay(500); } // Home Alone 2
  if (receivedChar == "f6")  { PORTB = B11001011; /*OUTOFF();} */ delay(500); } // Hal 2001
  if (receivedChar == "f7")  { PORTB = B11001010; /*OUTOFF();} */ delay(500); } // Monthy Python the Meaning of life
  if (receivedChar == "f8")  { PORTB = B11001001; /*OUTOFF();} */ delay(500); } // Tower this is Ghoist ruider ( Top Gun )
  if (receivedChar == "f9")  { PORTB = B11001000; /*OUTOFF();} */ delay(500); } // Muppet Christmas Carrol
  if (receivedChar == "f10") { PORTB = B11000111; /*OUTOFF();} */ delay(500); } // Don't Shoot Tha greenn Shit at me ( Independance day )
  if (receivedChar == "f11") { PORTB = B11000110; /*OUTOFF();} */ delay(500); } // Shawshank Redemption 
  if (receivedChar == "f12") { PORTB = B11000101; /*OUTOFF();} */ delay(500); } // Negative ghostrider , the paterni is full ( Top Gun )
  if (receivedChar == "f13") { PORTB = B11000100; /*OUTOFF();} */ delay(500); } // Star Wars New Hope
  if (receivedChar == "f14") { PORTB = B11000011; /*OUTOFF();} */ delay(500); } // Game Over ( Alien )
  if (receivedChar == "f15") { PORTB = B11000010; /*OUTOFF();} */ delay(500); } // The Lion King
  if (receivedChar == "f16") { PORTB = B11000001; /*OUTOFF();} */ delay(500); } // it's a nUix System ( Jurassic Park )
  if (receivedChar == "f17") { PORTB = B11000000; /*OUTOFF();} */ delay(500); } // Titanic 
  if (receivedChar == "f18") { PORTB = B10111111; /*OUTOFF();} */ delay(500); } // That's not a knife, this is a Knife ( Crocadile Dundee 2)
  if (receivedChar == "f19") { PORTB = B10111110; /*OUTOFF();} */ delay(500); } // Wolf Of wall Street
  if (receivedChar == "f20") { PORTB = B10111101; /*OUTOFF();} */ delay(500); } // It's the last of the V8 Interceptors.
  


  
  //RIGHT
  if (receivedChar == "c" )  { PORTB = B11111110; OUTOFF();} // delay(500); } // 17 Theame RTune 
  if (receivedChar == "i" )  { PORTB = B11111101; OUTOFF();} // delay(500);} // 18 Jingle
  if (receivedChar == "a" ) { PORTB = B11111100; OUTOFF();}  // delay(500); } // 19 correct
  if (receivedChar == "B" ) { PORTB = B11111011; OUTOFF();}  // delay(500); } // 20 oh yeah
  if (receivedChar == "d" ) { PORTB = B11111010; OUTOFF();} //delay(500); } // 21 cliff
  if (receivedChar == "e" ) { PORTB = B11111001; OUTOFF();} //delay(500); } // 22 winner
  if (receivedChar == "f" ) { PORTB = B11111000; OUTOFF();} //delay(500); } // 23 yay 
  if (receivedChar == "g" ) { PORTB = B11110111; OUTOFF();} //delay(500); } // 24 zing
  
  //WRONG
  if (receivedChar == "j" ) { PORTB = B11110110; OUTOFF();} // delay(500); } // 25 completely useless answer 
  if (receivedChar == "l" ) { PORTB = B11110101; OUTOFF();} // delay(500); } // 26 No!
  if (receivedChar == "n" ) { PORTB = B11110100; OUTOFF();} // delay(500); } // 27 what no
  if (receivedChar == "o" ) { PORTB = B11110011; OUTOFF();} //delay(500); } // 28 completely wrongp
  if (receivedChar == "p" ) { PORTB = B11110010; OUTOFF();} //delay(500); } // 29 No No No Techno
  if (receivedChar == "q" ) { PORTB = B11110001; OUTOFF();} //delay(500); } // 30 plonke
  
  //Play a wrong Chune
  if (receivedChar == 'w' ) {
     randNumber = random(1,6);
     Serial.print("wrong"); Serial.println(randNumber);
     if (randNumber == 1 ) { PORTB = B11111110; OUTOFF();} // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 2 ) { PORTB = B11111101; OUTOFF();} // delay(500);  Serial.println(randNumber);} 
     if (randNumber == 3 ) { PORTB = B11111100; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 4 ) { PORTB = B11111011; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 5 ) { PORTB = B11111010; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     if (randNumber == 6 ) { PORTB = B11111001; OUTOFF();} //delay(500);  Serial.println(randNumber);} 
     DECREMENT();
     //digitalWrite(BUZZ_1, HIGH); digitalWrite(BUZZ_2, HIGH); digitalWrite(BUZZ_3, HIGH); digitalWrite(BUZZ_4, HIGH); digitalWrite(BUZZ_5, HIGH); digitalWrite(BUZZ_6, HIGH);
     OUTOFF();
     
     readystate = 1;
     score();
     //PORTB = B00011111;
     OUTOFF();
   }


   //rBONUS
    if (receivedChar == 'b' ) {
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
   }


  //RESET
  if (receivedChar == "r" ) {
  //RIGHT
  randNumber = random(2,5);
  Serial.print("reset"); Serial.println(randNumber);
  if (randNumber == 2 )  { PORTB = B11111101; OUTOFF();} // delay(500);} // 18 Jingle
  if (randNumber == 3 ) { PORTB = B11111100; OUTOFF();} //delay(500); } // 19 correct
  if (randNumber == 4 ) { PORTB = B11111011; OUTOFF();} //delay(500); } // 20 oh yeah
  if (randNumber == 5 ) { PORTB = B11111010; OUTOFF();} //delay(500); } // 21 cliff
  
  
   
   
   
   score();
   OUTOFF();
   readystate = 1;
   //PORTB = B00011111;
  }

  //RESET
  
  exit;
  }
  
