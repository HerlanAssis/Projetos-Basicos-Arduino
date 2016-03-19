/***************************************\
ROBOCORE ARDUINO KIT INICIANTE
Módulo 5
\***************************************/

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Vem Aprender Ard");
  lcd.setCursor(0,1);
  lcd.print("uino Comigo ;D"); //Coloque seu nome no lugar dos XXX
}

void loop() {

}
