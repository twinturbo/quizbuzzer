void soundoutput() {
  if (receivedChar == 'D' ) { DMX_SETUP() ;}
  if (receivedChar == 'k' ) { PORTB = B11111110;  team = 1;   score(); OUTOFF();} // } //TEAM_1 sound 0001
  if (receivedChar == 'W' ) { PORTB = B11111101;  team = 2;   score(); OUTOFF();} // } //TEAM_2 sound 0002
  if (receivedChar == 's' ) { PORTB = B11111100;  team = 3;   score(); Serial.println("STACEY"); OUTOFF();} // } //TEAM_3 sound 0003
  if (receivedChar == 'm' ) { PORTB = B11111011;  team = 4;   score(); OUTOFF();} // } //TEAM_4 sound 0004
  if (receivedChar == 't' ) { PORTB = B11111010;  team = 5;   score(); OUTOFF();} // } //TEAM_5 sound 0005
  if (receivedChar == 'h' ) { PORTB = B11111001;  team = 6;   score(); OUTOFF();} // } //TEAM_6 sound 0006
  //if (receivedChar == 's' ) { PORTB = B11111100;  team = 7;   score(); OUTOFF();} // } //TEAM_3 sound 0003
  //if (receivedChar == 'm' ) { PORTB = B11111011;  team = 8;   score(); OUTOFF();} // } //TEAM_4 sound 0004
 
  //Music  
  if (receivedChar == '1' ) { PORTB = B11111000;  /*OUTOFF();} */ delay(500); } //007 Gladiator
  if (receivedChar == '2' ) { PORTB = B11110111;  /*OUTOFF();} */delay(500); } //008 Schindler 
  if (receivedChar == '3' ) { PORTB = B11110110;  /*OUTOFF();} */delay(500); } //009 Dovark 9th 
  if (receivedChar == '4' ) { PORTB = B11110101;  /*OUTOFF();} */delay(500); } //010 Cumberland Friendas
  if (receivedChar == '5' ) { PORTB = B11110100;  /*OUTOFF();} */delay(500); } //011 Propaganda 
  if (receivedChar == '6' ) { PORTB = B11110011;  /*OUTOFF();} */delay(500); } //012  Berlinda
  if (receivedChar == '7' ) { PORTB = B11110010;  /*OUTOFF();} */delay(500); } //013  top gun
  if (receivedChar == '8' ) { PORTB = B11110001;  /*OUTOFF();} */delay(500); } //14 Police titanium
  if (receivedChar == '9' ) { PORTB = B11110000;  /*OUTOFF();} */delay(500); } //15 911 body Shakin
  if (receivedChar == '0' ) { PORTB = B11101111;  /*OUTOFF();} */delay(500); } //16 Strangerr 
  
  //  
  //
  if (receivedChar == '1' ) { PORTB = B11111000;  /*OUTOFF();} */ delay(500); } //007 Gladiator
  if (receivedChar == '2' ) { PORTB = B11110111;  /*OUTOFF();} */delay(500); } //008 Schindler 
  if (receivedChar == '3' ) { PORTB = B11110110;  /*OUTOFF();} */delay(500); } //009 Dovark 9th 
  if (receivedChar == '4' ) { PORTB = B11110101;  /*OUTOFF();} */delay(500); } //010 Cumberland Friendas
  if (receivedChar == '5' ) { PORTB = B11110100;  /*OUTOFF();} */delay(500); } //011 Propaganda 
  if (receivedChar == '6' ) { PORTB = B11110011;  /*OUTOFF();} */delay(500); } //012  Berlinda
  if (receivedChar == '7' ) { PORTB = B11110010;  /*OUTOFF();} */delay(500); } //013  top gun
  if (receivedChar == '8' ) { PORTB = B11110001;  /*OUTOFF();} */delay(500); } //14 Police titanium
  if (receivedChar == '9' ) { PORTB = B11110000;  /*OUTOFF();} */delay(500); } //15 911 body Shakin
  if (receivedChar == '0' ) { PORTB = B11101111;  /*OUTOFF();} */delay(500); } //16 Strangerr 
  


  
  //RIGHT
  if (receivedChar == 'c' )  { PORTB = B11111110; OUTOFF();} // delay(500); } // 17 Theame RTune 
  if (receivedChar == 'i' )  { PORTB = B11111101; OUTOFF();} // delay(500);} // 18 Jingle
  if (receivedChar == 'a' ) { PORTB = B11111100; OUTOFF();}  // delay(500); } // 19 correct
  if (receivedChar == 'B' ) { PORTB = B11111011; OUTOFF();}  // delay(500); } // 20 oh yeah
  if (receivedChar == 'd' ) { PORTB = B11111010; OUTOFF();} //delay(500); } // 21 cliff
  if (receivedChar == 'e' ) { PORTB = B11111001; OUTOFF();} //delay(500); } // 22 winner
  if (receivedChar == 'f' ) { PORTB = B11111000; OUTOFF();} //delay(500); } // 23 yay 
  if (receivedChar == 'g' ) { PORTB = B11110111; OUTOFF();} //delay(500); } // 24 zing
  //WRONG
  if (receivedChar == 'j' ) { PORTB = B11110110; OUTOFF();} // delay(500); } // 25 completely useless answer 
  if (receivedChar == 'l' ) { PORTB = B11110101; OUTOFF();} // delay(500); } // 26 No!
  if (receivedChar == 'n' ) { PORTB = B11110100; OUTOFF();} // delay(500); } // 27 what no
  if (receivedChar == 'o' ) { PORTB = B11110011; OUTOFF();} //delay(500); } // 28 completely wrongp
  if (receivedChar == 'p' ) { PORTB = B11110010; OUTOFF();} //delay(500); } // 29 No No No Techno
  if (receivedChar == 'q' ) { PORTB = B11110001; OUTOFF();} //delay(500); } // 30 plonker

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
     
     Serial.println("decrement");
     if (team == 1 ) SCORE_[1] -=2 ; 
     if (team == 2 ) SCORE_[2] -=2 ;
     if (team == 3 ) SCORE_[3] -=2 ;
     if (team == 4 ) SCORE_[4] -=2 ;
     if (team == 5 ) SCORE_[5] -=2 ;
     if (team == 6 ) SCORE_[6] -=2 ;
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
  if (receivedChar == 'r' ) {
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
