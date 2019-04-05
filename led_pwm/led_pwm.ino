int ledPin = 9;

int ledPin2 = 10;

int ledPin3 = 11;

int brilho = 0;

int fade = 5;
int cont=0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  cont = 0;
    while(cont<2){
    analogWrite(ledPin, brilho);
    brilho = brilho + fade;
    if (brilho == 0 || brilho == 255){
      fade = -fade;
      cont++;
      Serial.println(cont);
    }
    
    delay(30);
    }

    while(cont<4){
    analogWrite(ledPin2, brilho);
     brilho = brilho + fade;
    if (brilho == 0 || brilho == 255){
      fade = -fade;
      cont++;
    }
    delay(30);
    }

    while(cont<6){
    analogWrite(ledPin3, brilho);
    brilho = brilho + fade;
    if (brilho == 0 || brilho == 255){
      fade = -fade;
      cont++;
    }
    delay(30);
    }
    
}
