#define LM35pin 0 // connect LM35 Vout pin to arduino analog pin 0
#define LM35ref 1 // connect 2x 1N1418 diodes between LM35 ground pin and ground
float LM35tempC;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
float readLM35(byte LM35Pin, boolean celcius){       
  int analogVal = 0;
  int compteur = 0;
  for(int i = 0; i < 10; i++) { // takes 10 samples to make sure we get a good value
    int b = (analogRead(A0));
    if(b >= 0)
    {
      analogVal += b; // subtract Vout ADC reading from LM35 ground ADC reading 
      compteur += 1;
    }
    delay(50);
  }
  float tempC = (5.0 * (analogVal/compteur) * 100) / 1023;
  if (celcius == true) {
    return tempC; // return temperature in degrees Celcius
  } 
  else {
    return (tempC * 9 / 5) + 32; // return temperature in degrees Fahrenheit
  }
}


void loop() {
  Serial.println(readLM35(1,true));
  delay(1000);
  // put your main code here, to run repeatedly:

}
