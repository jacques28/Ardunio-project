#define DHTPIN 2    // Changer le pin sur lequel est branché le DHT

// Dé-commentez la ligne qui correspond à votre capteur 
#define DHTTYPE DHT11     // DHT 11 
//#define DHTTYPE DHT22      // DHT 22  (AM2302)
//#define DHTTYPE DHT21     // DHT 21 (AM2301)

// Initialisation du capteur pour un Arduino à 16mhz par défaut
// Il faudra modifier le 3ème paramètres pour une autre carte (sinon le capteur renvoie 0). Quelques valeurs : 8mhz => 3, 16mhz => 6, 84mhz => 84
#include "DHT.h"
DHT dht(DHTPIN, DHTTYPE); 
void setup() {
  Serial.begin(9600); 
  Serial.println("DHTxx test!");
 
  dht.begin();
}

void loop() {
  // Délai de 2 secondes entre chaque mesure. La lecture prend 250 millisecondes
  delay(2000);

  // Lecture du taux d'humidité
  float h = dht.readHumidity();
  // Lecture de la température en Celcius
  float t = dht.readTemperature();
  // Pour lire la température en Fahrenheit
  float f = dht.readTemperature(true);
  
  // Stop le programme et renvoie un message d'erreur si le capteur ne renvoie aucune mesure
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Echec de lecture !");
    return;
  }

  // Calcul la température ressentie. Il calcul est effectué à partir de la température en Fahrenheit
  // On fait la conversion en Celcius dans la foulée
  float hi = dht.computeHeatIndex(f, h);
  

  Serial.print("Humidite: "); 
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: "); 
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print("Temperature ressentie: ");
  Serial.print(dht.convertFtoC(hi));
  Serial.println(" *C");
}
