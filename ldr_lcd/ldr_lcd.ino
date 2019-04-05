#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int pResistor = 0; 

int value;

void setup() {
  pinMode(pResistor, INPUT);
  
  lcd.begin(16, 2);
  
  lcd.setCursor(0, 0);
  
  lcd.print("");
  
  lcd.setCursor(0,1);
  
  lcd.print("");

}

void loop() {
  Serial.begin(9600);
  
  value = analogRead(pResistor);
  Serial.println(value);
  delay(500);
  
  lcd.setCursor(3, 0);
  lcd.print(value);
}
