#include <Stepper.h>      // 스테핑 모터 라이브러리 정의 

int stepsPerRev = 2048; // 한바퀴(360): 2048 , 반 바퀴(180) : 1024

Stepper stepper (stepsPerRev, 11,9,10,8); // ( IN4,IN2,IN3,IN1) 

int btn1 = 7;

int btn2 = 6; 

void setup() {

 stepper.setSpeed(10);   // 스텝모터의 스피드 설정

 pinMode(btn1, INPUT_PULLUP);

 pinMode(btn2, INPUT_PULLUP);

}

void loop()  { 

 boolean btn1HL = digitalRead(btn1);

 boolean btn2HL = digitalRead(btn2); 

 if (btn1HL == LOW) {           // 버튼 1의 입력을 확인

   stepper.step(1);  //1스텝 회전 명령(버튼을 계속누르고 있으면 계속회전) 

  }

  if (btn2HL == LOW) {           // 버튼 2의 입력을 확인

   stepper.step(-1);//1스텝 역회전명령(버튼을 계속누르고 있으면 계속회전)

  }

}
