void LOGO (){
  lcd.clear();
  LINE(0);
  lcd.setCursor(0, 1);
  lcd.print("  QUIZ BUZZER PRO!  ");
  LINE(2);
  PORTB = B00000010; OUTOFF();
  //delay(3000);
  
}


void KATY() {
  int ti = 75;
  lcd.clear();
  lcd.setCursor(0,0);lcd.print("####################");
  lcd.setCursor(0,1);lcd.print("####################");
  lcd.setCursor(0,2);lcd.print("####################");
  lcd.setCursor(0,3);lcd.print("####################");
  delay(ti);
    lcd.setCursor(0,0);lcd.print("####################");
    delay(ti);
    lcd.setCursor(0,0);lcd.print("# ##################");
  delay(ti);
    lcd.setCursor(0,0);lcd.print("#  #################");
  delay(ti);
    lcd.setCursor(0,0);lcd.print("#   ################");
  delay(ti);
    lcd.setCursor(0,0);lcd.print("#    ###############");
  delay(ti);
    lcd.setCursor(0,0);lcd.print("#    # #############");
  delay(ti);
    lcd.setCursor(0,0);lcd.print("#    # # ###########");
  delay(ti);
    lcd.setCursor(0,0);lcd.print("#    # # ### #######");
  delay(ti);
    lcd.setCursor(0,0);lcd.print("#    # # ### ### ###");
  delay(ti);
    lcd.setCursor(0,0);lcd.print("#    # # ### ### # #");
  delay(ti);
  //lcd.setCursor(0,0);lcd.print("#    # # ### ### # #");
  
  //Line2
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# ##################");
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# # ################");
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# #  ###############");
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# #  ## ############");
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# #  ##  ###########");
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# #  ##  ###########");
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# #  ##  # #########");
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# #  ##  # # #######");
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# #  ##  # #  ######");
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# #  ##  # #  # ####");
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# #  ##  # #  #  ###");
  delay(ti);
    lcd.setCursor(0,1);lcd.print("# #  ##  # #  #  # #");
  delay(ti);
   //lcd.setCursor(0,1);lcd.print("# #  ##  # #  #   # ");
  
  
  //Line3
    lcd.setCursor(0,2);lcd.print("#### ###############");
  delay(ti);
    lcd.setCursor(0,2);lcd.print("#### ## ############");
  delay(ti);
    lcd.setCursor(0,2);lcd.print("#### ##  ###########");
  delay(ti);
    lcd.setCursor(0,2);lcd.print("#### ##  ### #######");
  delay(ti);
    lcd.setCursor(0,2);lcd.print("#### ##  ###  ######");
  delay(ti);
    lcd.setCursor(0,2);lcd.print("#### ##  ###  # ####");
  delay(ti);
    lcd.setCursor(0,2);lcd.print("#### ##  ###  #  ###");
  delay(ti);
    lcd.setCursor(0,2);lcd.print("#### ##  ###  #   # ");
  delay(ti);
  //lcd.setCursor(0,2);lcd.print("#### ##  ###  #   # ");
  

      
lcd.setCursor(0,3);lcd.print(" ###################");
  delay(ti);
      

     lcd.setCursor(0,3);lcd.print("  ##################");
  delay(ti);
      
      lcd.setCursor(0,3);lcd.print("  # ################");
  delay(ti);
      lcd.setCursor(0,3);lcd.print("  #  ###############");
  delay(ti);
      lcd.setCursor(0,3);lcd.print("  #  # #############");
  delay(ti);
      lcd.setCursor(0,3);lcd.print("  #  # # ###########");
  delay(ti);
      lcd.setCursor(0,3);lcd.print("  #  # # # #########");
  delay(ti);
      lcd.setCursor(0,3);lcd.print("  #  # # # # #######");
  delay(ti);
      lcd.setCursor(0,3);lcd.print("  #  # # # #  ######");
  delay(ti);
      lcd.setCursor(0,3);lcd.print("  #  # # # #  # ####");
  delay(ti);
      lcd.setCursor(0,3);lcd.print("  #  # # # #  #  ###");
  delay(ti);
      lcd.setCursor(0,3);lcd.print("  #  # # # #  #   ##");
  delay(ti);
      lcd.setCursor(0,3);lcd.print("  #  # # # #  #   # ");
  delay(ti);
    //lcd.setCursor(0,3);lcd.print("  #  # # # #  #   # ");

  
  //lcd.setCursor(0,2);lcd.print("#### ##  ###  #   # ");
  
  //lcd.setCursor(0,0);lcd.print("#    # # ### ### # #");
  //lcd.setCursor(0,1);lcd.print("# #  ##  # #  #   # ");
  //lcd.setCursor(0,2);lcd.print("#### ##  ###  #   # ");
  //lcd.setCursor(0,3);lcd.print("  #  # # # #  #   # ");

  delay(2000);
}