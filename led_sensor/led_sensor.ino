int pResistor = A0; 
int ledPin = 8;

int value;

void setup(){
 pinMode(ledPin, OUTPUT);
 pinMode(pResistor, INPUT);
}

void loop(){
   Serial.begin(9600);
  value = analogRead(pResistor);
  
  if (value > 500){
    digitalWrite(ledPin, HIGH);  
    Serial.println(value);
  }
  else{
    digitalWrite(ledPin, LOW); 
    Serial.println(value);
  }

  delay(50);
}
