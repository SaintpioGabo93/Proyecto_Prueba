const int pinLED = 2;

void setup() {
  pinMode(pinLED,OUTPUT);

}

void loop() {
  digitalWrite(pinLED,HIGH);
  delay(1000);
  digitalWrite(pinLED,LOW);
  delay(1000);

}
