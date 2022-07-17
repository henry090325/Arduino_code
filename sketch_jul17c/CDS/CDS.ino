void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightValue = analogRead(A0);

  Serial.println(lightValue);
  if(lightValue < 300) {
    digitalWrite(7, HIGH);
  }else {
    digitalWrite(7, LOW);
  }
}
