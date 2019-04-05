int ledred = 11;

int ledblue = 10;

void setup() {
  pinMode(ledred, OUTPUT);
  pinMode(ledblue, OUTPUT);
}

void loop() {
  blinkred();
  blinkblue();
  delay(3000);
  fade();
}

void blinkred()
{
  digitalWrite(ledred, HIGH);
  delay(1000);
  digitalWrite(ledred, LOW);
  delay(1000);
  digitalWrite(ledred, HIGH);
  delay(1000);
  digitalWrite(ledred, LOW);
  delay(1000);
  digitalWrite(ledred, HIGH);
  delay(1000);
  digitalWrite(ledred, LOW);
  delay(1000);
}

void blinkblue()
{
  digitalWrite(ledblue, HIGH);
  delay(1000);
  digitalWrite(ledblue, LOW);
  delay(1000);
  digitalWrite(ledblue, HIGH);
  delay(1000);
  digitalWrite(ledblue, LOW);
  delay(1000);
  digitalWrite(ledblue, HIGH);
  delay(1000);
  digitalWrite(ledblue, LOW);
  delay(1000);
}

void fade(){
  for(int fadeValue = 0; fadeValue <= 255; fadeValue +=5){
    analogWrite(ledred, fadeValue);
    analogWrite(ledblue, fadeValue);
    delay(50);
  }

  for(int fadeValue = 255; fadeValue >= 0; fadeValue -=5){
    analogWrite(ledred, fadeValue);
    analogWrite(ledblue, fadeValue);
    delay(50);
  }
}

