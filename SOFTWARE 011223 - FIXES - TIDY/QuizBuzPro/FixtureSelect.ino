void FixtureSelect() {
  CLS();
  int CMap = FixMap;
  String strf = "";
  while (strf != "exit" ) {
    
    Serial.println("===============================");
    Serial.println("Primary Fixture Select");
    Serial.println("===============================");
    if (CMap == 1 ) {
      Serial.println("MX-10 Selected");
    }
    if (CMap == 2 ) {
      Serial.println("Phantom 250 Selected");
    }
    Serial.println("===============================");
    Serial.println("Set Primary Fixture Map");
    Serial.println("===============================");
    Serial.println("1) MX-10 ");
    Serial.println("2) Phantom 250");
    Serial.println("3) exit");
    Serial.println("===============================");
    //FLUSH();
    int TCf = 0;
    while ( TCf == 0 ) {

      if (Serial.available() > 0) {
        CMap = Serial.parseInt();
        if (CMap == 1 ) {
          EEPROM.write(20, CMap);
          TCf = 1;
        }
        if (CMap == 2) {
          EEPROM.write(20, CMap);
          TCf = 1;
        }
        if (CMap == 3) {
          strf = "exit";
          TCf = 1;
        }
      }
      }
  }

}
