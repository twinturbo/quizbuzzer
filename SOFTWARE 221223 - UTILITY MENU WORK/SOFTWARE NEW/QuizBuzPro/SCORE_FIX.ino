void SCORE_FIX ()  { 
  SCORE_FIX_MENU();
  SCORE_FIX_TEAM();
  incdect();
}

void SCORE_FIX_MENU() {
  LINES();
  Serial.println("Which Team");
    Serial.print("1 "); Serial.println(ts1);
    Serial.print("2 "); Serial.println(ts2);
    Serial.print("3 "); Serial.println(ts3);
    Serial.print("4 "); Serial.println(ts4);
    Serial.print("5 "); Serial.println(ts5);
    Serial.print("6 "); Serial.println(ts6);
    LINES();
} 

void SCORE_FIX_TEAM() { 
 
  while ( TeamX == 10 ){ if (Serial.available() > 0) 
  { scTeam = Serial.parseInt();
    if ( scTeam > 0 && scTeam < 7 ) { TeamX = 9;} else {Serial.println ("Wrong input");}
  }     
  }
  Serial.print("update score for table ");Serial.print(scTeam); Serial.print(" Score is > "); Serial.println(SCORE_[scTeam-1]);
  Serial.println("Enter new score" );
  TeamX = 10;
}

void incdect() {
  PlusMinus = 0;
  LINES();
  delay(500);
  FLUSH();
  while ( PlusMinus != 999 ){ if (Serial.available() > 0) 
  { PlusMinus = Serial.parseInt();
    if (PlusMinus != 999 /*and PlusMinus != 0*/){Serial.print("new Score is > "); SCORE_[scTeam-1] = PlusMinus ; Serial.println(SCORE_[scTeam-1]); PlusMinus = 999;}
    }     
 
}
}
