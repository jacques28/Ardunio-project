#include "LiquidCrystal.h"

LiquidCrystal lcd(11,10,9,8,7,6,5,4,3,2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.write("Prosper");
  // put your setup code here, to run once:

}

void loop() {
  Serial.println("Elvis est un enfant de Dieu");
  // put your main code here, to run repeatedly:
  
}
