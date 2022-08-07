#include <Stepper.h>

int stepsPerRev = 2048;
Stepper stepper(stepsPerRev, 11, 9, 10, 8);
void setup() {
  // put your setup code here, to run once:
  stepper.setSpeed(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  stepper.step(stepsPerRev);
  delay(1000);
  stepper.step(-stepsPerRev);
  delay(1000);
}
