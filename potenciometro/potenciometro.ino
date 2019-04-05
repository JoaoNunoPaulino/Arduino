int led1 = 4;

int led2 = 5;

int led3 = 7;

int led4 = 8;



void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int valorSensor = analogRead(A0);

     if (valorSensor<20){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      Serial.println(valorSensor);
      valorSensor = analogRead(A0);
    }
  else
 if (valorSensor<200){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      Serial.println(valorSensor);
     valorSensor = analogRead(A0);
    }
 else
  if (valorSensor<500){
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      Serial.println(valorSensor);
      valorSensor = analogRead(A0);
    }
else
  if (valorSensor<750){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      Serial.println(valorSensor);
      valorSensor = analogRead(A0);
    }
 else
    if (valorSensor<1023){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      Serial.println(valorSensor);
      valorSensor = analogRead(A0);
    }
}
