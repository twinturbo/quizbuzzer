void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  // pinMode(37, INPUT);
    Serial.println("CX");
    pinMode(22, OUTPUT);
    pinMode(42, INPUT_PULLUP); 
    pinMode(43, INPUT_PULLUP);
    pinMode(44, INPUT_PULLUP);
    pinMode(45, INPUT_PULLUP);
    pinMode(46, INPUT_PULLUP);
    pinMode(47, INPUT_PULLUP);
    pinMode(48, INPUT_PULLUP);
    pinMode(48, INPUT_PULLUP);
    pinMode(49, INPUT_PULLUP);

    DDRB = B11111111;
   //DDRL = B00000000;
}

void loop() {
   PORTB = B11111111;
   digitalWrite(22, LOW);
   //Serial.print(x);Serial.print("Loop "); Serial.println(ON);
   if ( digitalRead(42) == HIGH ){Serial.print("42"); Serial.println(); PORTB = B11111110;}
   if ( digitalRead(43) == LOW ){Serial.print("43"); Serial.println(); PORTB = B11111101;}
   if ( digitalRead(44) == LOW ){Serial.print("44"); Serial.println(); PORTB = B11111011;}
   if ( digitalRead(45) == LOW ){Serial.print("45"); Serial.println(); PORTB = B11110111;}
   if ( digitalRead(46) == LOW ){Serial.print("46"); Serial.println(); PORTB = B11101111;}
   if ( digitalRead(47) == LOW ){Serial.print("47"); Serial.println(); PORTB = B11011111;}
   if ( digitalRead(48) == LOW ){Serial.print("48"); Serial.println(); PORTB = B10111111;}
   if ( digitalRead(49) == HIGH){Serial.print("49"); Serial.println(); PORTB = B01111111;}
   delay(200);
   Serial.println(digitalRead(2));
   while ( digitalRead(2) == LOW ){
    Serial.println("Playing");
    delay(20);
   }
   Serial.println();
   digitalWrite(22, HIGH);
  }
  
  
