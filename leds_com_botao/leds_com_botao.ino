
int led1 = 8;



void setup() {
  Serial.begin(9600);

  pinMode(led1, OUTPUT);

}

void loop() {

 digitalWrite(led1, HIGH);
 delay(500);
 digitalWrite(led1, LOW);
 delay(500);
 digitalWrite(led1, HIGH);
 delay(500);
 digitalWrite(led1, LOW);
}

