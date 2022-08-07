#include <Servo.h>

Servo servo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightValue = analogRead(A0);
  Serial.println(lightValue);
  if(lightValue < 400) {
    servo.write(0);
    delay(10);
    servo.write(45);
    delay(10);
  }
}
