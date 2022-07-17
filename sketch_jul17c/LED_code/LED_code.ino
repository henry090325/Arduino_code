void LEDON(int pinNumber) {
  digitalWrite(pinNumber, HIGH);
  delay(1000);
  digitalWrite(pinNumber, LOW); 
  delay(1000);
}

void setup() {
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  LEDON(7);
  LEDON(8);
  LEDON(11);
}
