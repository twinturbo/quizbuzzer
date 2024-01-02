/*void FIXTURE_SELECT() {
  CLS();
  int CMap = FixMap;
  String strf = "";
  while (strf != "exit" ) {
    
    LINES();
    Serial.println("Primary Fixture Select");
    LINES();
    if (CMap == 1 ) {
      Serial.println("200 Zoom Selected");
    }
    if (CMap == 2 ) {
      Serial.println("Phantom 250 Selected");
    }
    LINES();
    Serial.println("Set Primary Fixture Map");
    LINES();
    Serial.println("1) 200 Zoom ");
    Serial.println("2) Phantom 250");
    Serial.println("3) exit");
    LINES();
    //FLUSH();
    int TCf = 0;
    while ( TCf == 0 ) {

      if (Serial.available() > 0) {
        CMap = Serial.parseInt();
        if (CMap == 1 ) {
          EEPROM.write(40, CMap);
          FixMap = CMap;
          TCf = 1;
        }
        if (CMap == 2) {
          EEPROM.write(40, CMap);
          FixMap = CMap;
          TCf = 1;
        }
        if (CMap == 3) {
          strf = "exit";
          TCf = 1;
        }
      }
      }
  }

}*/
