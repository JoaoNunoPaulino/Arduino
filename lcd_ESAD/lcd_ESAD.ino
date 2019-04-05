#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  
  lcd.begin(16, 2);
  
  lcd.setCursor(0, 0);
  
  lcd.print("");
  
  lcd.setCursor(0,1);
  
  lcd.print("");

}

void loop() {

  lcd.setCursor(0, 0);
  lcd.print("ESAD");
  lcd.print("");
  delay(500);
  
  for (int posicao = 0; posicao < 3; posicao++)
  {
    lcd.scrollDisplayLeft();
    delay(300);
  }
   
  
  for (int posicao = 0; posicao < 3; posicao++)
  {
    lcd.scrollDisplayRight();
    delay(300);
  }
}


