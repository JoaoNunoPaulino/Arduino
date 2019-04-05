int carroVermelho = 7;
int carroVerde = 6;

int pessoaVerde = 3;
int pessoaAmarelo = 4;

int tempoAtravessando = 5000;
unsigned long mudaTempo;

void setup() {
   mudaTempo = millis();

  pinMode(carroVermelho, OUTPUT);
  pinMode(pessoaAmarelo, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  pinMode(pessoaVerde, OUTPUT);


  //digitalWrite(carroVerde, HIGH);
  //digitalWrite(pessoaAmarelo, HIGH);
  //digitalWrite(carroVermelho, LOW);
  //digitalWrite(pessoaVerde, LOW);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(carroVerde, LOW);    // A luz verde é desligada
  digitalWrite(carroVermelho, HIGH); // A luz amarela vai ligar por 4 segundos
  delay(4000); 

 // digitalWrite(carroVermelho, HIGH); // A luz vermelha vai ligar por 5 segundos
  
  digitalWrite(pessoaAmarelo, LOW);
  digitalWrite(pessoaVerde, HIGH);
  delay(tempoAtravessando);
  
  for (int x=0; x<10; x++) {
    digitalWrite(pessoaVerde, LOW);
    delay(160);
    digitalWrite(pessoaVerde, HIGH);
    delay(160);
  }
  digitalWrite(pessoaVerde, LOW);
  digitalWrite(carroVermelho, LOW);
  digitalWrite(pessoaAmarelo, HIGH);
  digitalWrite(carroVerde, HIGH);
 delay(4000);
  mudaTempo = millis();

}
