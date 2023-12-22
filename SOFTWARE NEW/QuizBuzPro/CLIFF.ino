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
