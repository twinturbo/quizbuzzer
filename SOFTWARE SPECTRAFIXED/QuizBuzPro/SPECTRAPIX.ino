
void SPEC_BLACK(){
  DMXSerial.write(sc+1,255);
  DMXSerial.write(sc+2,0);
  for ( int colour  = 3; colour <= 50; colour++ ) {
      //Serial.print("set to blue"); Serial.println(colour);
      DMXSerial.write(sc+colour,0);
  }     
  }



void SPEC_WHITE(){
   DMXSerial.write(sc+1,255);
  DMXSerial.write(sc+2,0);
  SPEC_BLACK();
  for ( int colour  = 3; colour <= 50; colour++ ) {
      //Serial.print("set to blue"); Serial.println(colour);
      DMXSerial.write(sc+colour,255);
  }     
  }



void SPEC_COL(int SCL){
  DMXSerial.write(sc+1,255);
  DMXSerial.write(sc+2,0);
  SPEC_BLACK();
  int SCX = SCL + 21;
  for ( int colour  = SCL; colour <= SCX; colour = colour + 3 ) {
      DMXSerial.write(sc+colour+24,255);
      DMXSerial.write(sc+colour,255);
      DMXSerial.write(sc+colour+24+2,0);
      DMXSerial.write(sc+colour+2,0);
      delay(100);
  }     
}


/*void SPEC_RED(){
  DMXSerial.write(sc+1,255);
  DMXSerial.write(sc+2,0);
  SPEC_BLACK();
  for ( int colour  = 3; colour <= 24; colour = colour + 3 ) {
      //Serial.print("set to red"); Serial.println(colour);
      DMXSerial.write(sc+colour+24,255);
      DMXSerial.write(sc+colour,255);
      DMXSerial.write(sc+colour+24+2,0);
      DMXSerial.write(sc+colour+2,0);
      delay(100);
  }     
}


void SPEC_GREEN() {
   DMXSerial.write(sc+1,255);
  DMXSerial.write(sc+2,0);
  SPEC_BLACK();
  for ( int colour  = 4; colour <= 25; colour = colour + 3 ) {
      //Serial.print("set to green"); Serial.println(colour);
      DMXSerial.write(sc+colour+24,255);
      DMXSerial.write(sc+colour,255);
      DMXSerial.write(sc+colour+24+2,0);
      DMXSerial.write(sc+colour+2,0);
      delay(100);
                    
 }
}


void SPEC_BLUE() {
   DMXSerial.write(sc+1,255);
  DMXSerial.write(sc+2,0);
  SPEC_BLACK();
  for ( int colour  = 5; colour <= 26; colour = colour + 3 ) {
      DMXSerial.write(sc+colour+24,255);
      DMXSerial.write(sc+colour,255);
      DMXSerial.write(sc+colour+24+2,0);
      DMXSerial.write(sc+colour+2,0);
      delay(100);
                    
 }
}
*/
void SPEC_FLASH(int on) {
  if (on == 1){ DMXSerial.write(sc+2,255);}
  if (on == 0){ DMXSerial.write(sc+2,0);}
}

void HEAD_FLASH(int on) {
  if (on == 1){ DMXSerial.write(Shutter,230);}
  if (on == 0){ DMXSerial.write(Shutter,255);}
}
  
