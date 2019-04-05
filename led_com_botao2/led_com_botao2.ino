int botao = 2;
int led1 = 13;
int var = 0;
int var2 = 0;
int estado = 0;

void setup() {
  Serial.begin(9600);
  pinMode(botao, INPUT);//defenir botao como input
  pinMode(led1, OUTPUT);

}

void loop() {

  var=digitalRead(botao);
  if((var == HIGH) && (var2 ==LOW)){
    estado = 1 - estado;
    delay(20);
    Serial.println(estado);
}

  var2 = var;
  Serial.println(var2);
  if(estado == 1){
    digitalWrite(led1, HIGH);
  }
  else{
    digitalWrite(led1, LOW);
  }
}

