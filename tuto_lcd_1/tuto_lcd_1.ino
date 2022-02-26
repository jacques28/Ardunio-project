/* I2C LCD with Arduino example code. More info: https://www.makerguides.com */

// Include the libraries:
// LiquidCrystal_I2C.h: https://github.com/johnrickman/LiquidCrystal_I2C
#include <Wire.h> // Library for I2C communication
#include "LiquidCrystal_I2C.h" // Library for LCD

// Wiring: SDA pin is connected to A4 and SCL pin to A5.
// Connect to LCD via I2C, default address 0x27 (A0-A2 not jumpered)
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); // Change to (0x24,20,4) for 20x4 LCD.

void setup() {
  // Initiate the LCD:
  lcd.init();
  lcd.backlight();
}

void loop() {
  // Print 'Hello World!' on the first line of the LCD:
  lcd.setCursor(2, 0); 
  // Set the cursor on the third column and first row.
  lcd.print("Hù!"); // Print the string "Hello World!"
  delay(1000);
  lcd.setCursor(2, 1);//Set the cursor on the third column and the second row (counting starts at 0!).
  lcd.print("LCD tutorial");
  
}
