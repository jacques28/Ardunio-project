int lecture_pin = 8;
void setup() {
  
  Serial.begin(9600);
  //pinMode(lecture_pin,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

  int valeur_lue = analogRead(lecture_pin);
  double temperature = valeur_lue * (5.0 / 1023.0) * 100;
  Serial.print("Voltage : ");
  Serial.print(valeur_lue);
  Serial.print(" Temperature : ");
  Serial.println(temperature);
  delay(1000); 
  

}
