#include <IRremote.h>
#define irLedPin 12
#define irSensorPin 2

IRrecv irrecv(irSensorPin);
decode_results results;

void setup(){
  Serial.begin(9600);
  Serial.println("Programa iniciado");
  delay(100);
  irrecv.enableIRIn();
  pinMode(irLedPin, OUTPUT);
}

void loop(){
  if (irrecv.decode(&results)){
    long int decCode = results.value;
    Serial.println(decCode);
    switch (results.value){
      case 16580863:
        Serial.println("Light On");
      digitalWrite(irLedPin, HIGH);
      delay(1000);
      Serial.println("Light Off");
      digitalWrite(irLedPin, LOW);
      break;
     default:
      Serial.println("À espera...");
    }
    irrecv.resume();
  }
}
