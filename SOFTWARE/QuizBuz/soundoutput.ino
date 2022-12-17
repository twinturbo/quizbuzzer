void soundoutput() {
  if (receivedChar == 'k' ) { PORTC = B00011110;  team = 1;   score();  } //team1 sound 0001
  if (receivedChar == 'W' ) { PORTC = B00011101;  team = 2;   score();  } //team2 sound 0002
  if (receivedChar == 's' ) { PORTC = B00011100;  team = 3;   score();  } //team3 sound 0003
  if (receivedChar == 'm' ) { PORTC = B00011011;  team = 4;   score();  } //team4 sound 0004
  if (receivedChar == 't' ) { PORTC = B00011010;  team = 5;   score();  } //team5 sound 0005
  if (receivedChar == 'h' ) { PORTC = B00011001;  team = 6;   score();  } //team6 sound 0006
  
  if (receivedChar == '1' ) { PORTC = B00011000;  delay(500); } //007 Gladiator
  if (receivedChar == '2' ) { PORTC = B00010111;  delay(500); } //008 Schindler 
  if (receivedChar == '3' ) { PORTC = B00010110;  delay(500); } //009 Dovark 9th 
  if (receivedChar == '4' ) { PORTC = B00010101;  delay(500); } //010 Cumberland Friendas
  if (receivedChar == '5' ) { PORTC = B00010100;  delay(500); } //011 Propaganda 
  if (receivedChar == '6' ) { PORTC = B00010011;  delay(500); } //012  Berlinda
  if (receivedChar == '7' ) { PORTC = B00010010;  delay(500); } //013  top gun
  if (receivedChar == '8' ) { PORTC = B00010001;  delay(500); } //14 Police titanium
  if (receivedChar == '9' ) { PORTC = B00010000;  delay(500); } //15 911 body Shakin
  if (receivedChar == '0' ) { PORTC = B00001111;  delay(500); } //16 Strangerr 
  //RIGHT
  if (receivedChar == 'c' )  { PORTC = B00001110; delay(500); } // 17 Theame RTune 
  if (receivedChar == 'i' )  { PORTC = B00001101; delay(500);} // 18 Jingle
  if (receivedChar == 'a' ) { PORTC = B00001100; delay(500); } // 19 correct
  if (receivedChar == 'B' ) { PORTC = B00001011; delay(500); } // 20 oh yeah
  if (receivedChar == 'd' ) { PORTC = B00001010; delay(500); } // 21 cliff
  if (receivedChar == 'e' ) { PORTC = B00001001; delay(500); } // 22 winner
  if (receivedChar == 'f' ) { PORTC = B00001000; delay(500); } // 23 yay 
  if (receivedChar == 'g' ) { PORTC = B00000111; delay(500); } // 24 zing
  //WRONG
  if (receivedChar == 'j' ) { PORTC = B00000110; delay(500); } // 25 completely useless answer 
  if (receivedChar == 'l' ) { PORTC = B00000101; delay(500); } // 26 No!
  if (receivedChar == 'n' ) { PORTC = B00000100; delay(500); } // 27 what no
  if (receivedChar == 'o' ) { PORTC = B00000011; delay(500); } // 28 completely wrongp
  if (receivedChar == 'p' ) { PORTC = B00000010; delay(500); } // 29 No No No Techno
  if (receivedChar == 'q' ) { PORTC = B00000001; delay(500); } // 30 plonker
  
  
   
  PORTC = B00011111;
  
  if (receivedChar == 'w' ) {
     randNumber = random(1,6);
     Serial.print("wrong"); Serial.println(randNumber);
     if (randNumber == 1 ) { PORTC = B00000110; delay(500);  Serial.println(randNumber);} 
     if (randNumber == 2 ) { PORTC = B00000101; delay(500);  Serial.println(randNumber);} 
     if (randNumber == 3 ) { PORTC = B00000100; delay(500);  Serial.println(randNumber);} 
     if (randNumber == 4 ) { PORTC = B00000011; delay(500);  Serial.println(randNumber);} 
     if (randNumber == 5 ) { PORTC = B00000010; delay(500);  Serial.println(randNumber);} 
     if (randNumber == 6 ) { PORTC = B00000001; delay(500);  Serial.println(randNumber);} 
     
     Serial.println("decrement");
     if (team == 1 ) t1 -=2 ; 
     if (team == 2 ) t2 -=2 ;
     if (team == 3 ) t3 -=2 ;
     if (team == 4 ) t4 -=2 ;
     if (team == 5 ) t5 -=2 ;
     if (team == 6 ) t6 -=2 ;
     digitalWrite(buzz1, HIGH); digitalWrite(buzz2, HIGH); digitalWrite(buzz3, HIGH); digitalWrite(buzz4, HIGH); digitalWrite(buzz5, HIGH); digitalWrite(buzz6, HIGH);
     readystate = 1;
     score();
   }


   //rBONUS
    if (receivedChar == 'b' ) {
     Serial.println("INCREMENT");
     randNumber = random(6,8);
      if (randNumber == 6 ) { PORTC = B00001001; delay(500); } // 22 winner
      if (randNumber == 7 ) { PORTC = B00001000; delay(500); } // 23 yay 
     if (randNumber == 8 ) { PORTC = B00000111; delay(500); } // 24 zing
     if (team == 1 ) t1++ ; 
     if (team == 2 ) t2++ ;
     if (team == 3 ) t3++ ;
     if (team == 4 ) t4++ ;
     if (team == 5 ) t5++ ;
     if (team == 6 ) t6++ ;
     digitalWrite(buzz1, HIGH); digitalWrite(buzz2, HIGH); digitalWrite(buzz3, HIGH); digitalWrite(buzz4, HIGH); digitalWrite(buzz5, HIGH); digitalWrite(buzz6, HIGH);
     readystate = 1;
     score();
   }


  //RESET
  if (receivedChar == 'r' ) {
  //RIGHT
  randNumber = random(2,5);
  Serial.print("reset"); Serial.println(randNumber);
  if (randNumber == 2 )  { PORTC = B00001101; delay(500);} // 18 Jingle
  if (randNumber == 3 ) { PORTC = B00001100; delay(500); } // 19 correct
  if (randNumber == 4 ) { PORTC = B00001011; delay(500); } // 20 oh yeah
  if (randNumber == 5 ) { PORTC = B00001010; delay(500); } // 21 cliff
  
  
   
   
   
   score();
   digitalWrite(buzz1, HIGH); digitalWrite(buzz2, HIGH); digitalWrite(buzz3, HIGH); digitalWrite(buzz4, HIGH); digitalWrite(buzz5, HIGH); digitalWrite(buzz6, HIGH);
   readystate = 1;
  }

  //RESET
  
  exit;
  }
