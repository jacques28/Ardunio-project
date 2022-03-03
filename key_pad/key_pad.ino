#include "Keypad.h"

const int ROW_NUM = 4; //four rows
const int COLUMN_NUM = 4; //three columns

char keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte pin_rows[ROW_NUM] = {9, 9, 10, 11}; //connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {0, 1, 2, 3}; //connect to the column pinouts of the keypad

//Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

void setup(){
  Serial.begin(9600);
  // SETTING THE OUTPUT PINS
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);

  // SETTING THE RIGHT VALUES
  digitalWrite(0,1);
  digitalWrite(1,1);
  digitalWrite(2,1);
  digitalWrite(3,1);

  
  // SETTING THE INPUT PINS
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);

  Serial.begin(9600);
}

void loop(){

  // c for columns
  for(int c = 8; c < 11; c++)
  {
      if(c == 8)
      {
         if(digitalRead(8)==1)
        {
            Serial.println(digitalRead(8));
        }
      }
  }
  delay(1000);
}
