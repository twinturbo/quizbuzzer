void GO_GREEN(){
  lcd.clear();lcd.setCursor(0,0);lcd.print("GREEN");
}

void GO_RED(){
  lcd.clear();lcd.setCursor(0,0);lcd.print("RED");
}

void GO_BLUE() {
  lcd.clear();lcd.setCursor(0,0);lcd.print("BLUE");
}
void GO_WHITE() {
  lcd.clear();lcd.setCursor(0,0);lcd.print("WHITE");
}

void GO_HOME() {
    lcd.clear();
    LINE(0);
    lcd.setCursor(0,1);
    lcd.print("#    MOVING HEAD   #");
    lcd.setCursor(0,2);
    lcd.print("#       HOME       #");
    LINE(3);
    
    DMXSerial.write(Focus,128); 
    DMXSerial.write(Pans, 128); 
    DMXSerial.write(Tilt, 128);
    DMXSerial.write(Zoom, 128);
    delay(2000);
}
