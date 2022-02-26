#include "LiquidCrystal.h"


LiquidCrystal lcd(8,9,0,1,2,3,4,5,6,7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2); // utilisation d'un écran 16 colonnes et 2 lignes
  lcd.write("Salut ca zeste ?"); // petit test pour vérifier que tout marche
}


void loop() {
  // put your main code here, to run repeatedly:

}
