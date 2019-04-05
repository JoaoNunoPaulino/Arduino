int botaoPressao = 5;
int led1 = 3;
int led2 = 8;

void setup() {
  Serial.begin(9600);
  pinMode(botaoPressao, INPUT);//defenir botao como input
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop() {
  int estadoBotao = digitalRead(botaoPressao);
  Serial.println(estadoBotao);
  delay(1);
  if (estadoBotao == HIGH){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
}
