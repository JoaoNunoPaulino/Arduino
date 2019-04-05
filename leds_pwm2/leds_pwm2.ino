int ledPin = 9;
int ledPin2 = 10;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  for(int fadeValue = 0; fadeValue <= 255; fadeValue +=5){
    analogWrite(ledPin, fadeValue);
    delay(50);
  }

  for(int fadeValue = 255; fadeValue >= 0; fadeValue -=5){
    analogWrite(ledPin, fadeValue);
    delay(50);
  }

  for(int fadeValue = 0; fadeValue <= 255; fadeValue +=5){
    analogWrite(ledPin2, fadeValue);
    delay(50);
  }

  for(int fadeValue = 255; fadeValue >= 0; fadeValue -=5){
    analogWrite(ledPin2, fadeValue);
    delay(50);
  }
}
