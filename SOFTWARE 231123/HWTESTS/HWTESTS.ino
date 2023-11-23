//digital mp3//  IRELLIVENT CODE
int PORTB_1 = 4;
int PORTB_2 = 5;
int PORTB_3 = 6;
int PORTB_4 = 7;
int PORTB_5 = 50;
int PORTB_6 = 51;
int PORTB_7 = 52;
int PORTB_8 = 53;
int MP3_EN = 2;




void setup() {
  // put your setup code here, to run once:
  /*pinMode(11,OUTPUT);
  pinMode(PORTB_1, OUTPUT); digitalWrite(PORTB_1, LOW );
  pinMode(PORTB_2, OUTPUT); digitalWrite(PORTB_2, LOW );
  pinMode(PORTB_3, OUTPUT); digitalWrite(PORTB_3, LOW );
  pinMode(PORTB_4, OUTPUT); digitalWrite(PORTB_4, LOW );
  pinMode(PORTB_5, OUTPUT); digitalWrite(PORTB_5, LOW );
  pinMode(PORTB_6, OUTPUT); digitalWrite(PORTB_6, LOW );
  pinMode(PORTB_7, OUTPUT); digitalWrite(PORTB_7, LOW );
  pinMode(PORTB_8, OUTPUT); digitalWrite(PORTB_8, LOW );
  pinMode(MP3_EN, INPUT_PULLUP); */

  DDRB = B11111111;
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  delay(200);*/
  PORTB = B01111111;
  delay(2000); 
  PORTB = B10111111;
  delay(2000); 
  PORTB = B11011111;
  delay(2000); 
  PORTB = B11101111;
  delay(2000); 
  PORTB = B11101111;
  delay(2000); 
  PORTB = B11110111;
  delay(2000); 
  PORTB = B11111011;
  delay(2000); 
  PORTB = B11111101;
  delay(2000); 
  PORTB = B11111110;
  delay(2000); 
  PORTB = B11111111;
  delay(2000); 
}
