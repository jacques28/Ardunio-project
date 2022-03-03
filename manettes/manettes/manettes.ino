/*
  ReadAnalogVoltage

  Reads an analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/ReadAnalogVoltage
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  //analogReference(INTERNAL);
}

// the loop routine runs over and over again forever:
void loop() {
 int x = analogRead(A0);
 int y = analogRead(A1);
 int in = analogRead(A2);

 Serial.print("X : ");
 Serial.println(x);
 Serial.print("Y : ");
 Serial.println(y);
 Serial.print("in : ");
 Serial.println(in);
 delay(1000);
}
