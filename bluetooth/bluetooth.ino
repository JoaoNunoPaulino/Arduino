char dados = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  if(Serial.available()>0)
  {
    dados = Serial.read();
    Serial.println(dados);
    if(dados == '1'){
      digitalWrite(13, HIGH);
    }
    else if(dados == '0'){
      digitalWrite(13, LOW);
    }
  }
}
