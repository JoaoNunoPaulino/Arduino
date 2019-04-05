#include <Servo.h>

Servo motor;

int botao = 6;



void setup() {
  motor.attach(9);
  pinMode(botao, INPUT);

}

void loop() {
  int estadobotao = digitalRead(botao);
  if(estadobotao == 1){
    motor.write(180);
    delay(20);
  
} else{
  motor.write(0);
  delay(20);
  }
}
