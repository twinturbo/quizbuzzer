void DMX_SETUP(){
    Serial.println("DMX SETUP");
    DMXSerial.init(DMXController);
    DMXSerial.write(1, 64);
    DMXSerial.write(2, 128);
    
    String str = "dmx";
    while (str != "don" ) {
   
       if (Serial.available() > 0) {
       String str = Serial.readString();
       str.trim();
       Serial.println("DMX LOOP");
       Serial.println(str);
       if ( str == "don" ) {
        score();
        break;}
    }
  
  }
}
