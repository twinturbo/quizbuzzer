void SCORE_FIX ()  { 
  TeamX = 10;
  PlusMinus = 'K';
  SCORE_FIX_MENU();
  SCORE_FIX_TEAM();
  incdect();
}

void SCORE_FIX_MENU() {
  LINES();
  int TeamX = 10 ;
  Serial.println("Which Team");
    Serial.println("1 "); Serial.println(ts1);
    Serial.println("2 "); Serial.println(ts2);
    Serial.println("3 "); Serial.println(ts3);
    Serial.println("4 "); Serial.println(ts4);
    Serial.println("5 "); Serial.println(ts5);
    Serial.println("6 "); Serial.println(ts6);
} 

void SCORE_FIX_TEAM() {  
  while ( TeamX == 10 ){ if (Serial.available() > 0) 
  { scTeam = Serial.parseInt();
    if ( scTeam > -1 && scTeam < 6 ) { TeamX = 9;} else {Serial.println ("Wrong input");}
  }     
  }
  Serial.print("update score fore table ");Serial.println(scTeam);
  Serial.println(" P = add, D = Decrement " );
}

void incdect() {
  while ( PlusMinus == 'K' ){ if (Serial.available() > 0) 
  { PlusMinus = Serial.read();
    if (PlusMinus == 'P' or PlusMinus == 'S') {exit;} else {Serial.println ("Wrong input");}
  }     

}
}
