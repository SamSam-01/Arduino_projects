int pinPot=0;
int valPot=0;
int pinLED=8;
void setup() {
  pinMode(pinLED,OUTPUT);
  digitalWrite(pinLED,HIGH);
}

void loop() {
  valPot=analogRead(A0); 
  int valInter=int(valPot*5/1024)+1; 
  int attente=1000/valInter/2; 
  digitalWrite(pinLED,HIGH);
  delay (attente);
  digitalWrite(pinLED,LOW);
  delay(attente);
}
