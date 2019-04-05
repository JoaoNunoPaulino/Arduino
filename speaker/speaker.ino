int speaker = 9;

int frequencia;

void setup() {
  pinMode(speaker, OUTPUT);

}

void loop() {
  frequencia=1000;

  tone(9, frequencia);

}
