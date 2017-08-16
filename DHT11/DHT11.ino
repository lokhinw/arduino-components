#include <DHT.h>

#define DHTPIN 7

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
  Serial.begin(9600); 
  Serial.println("DHT11 Test!");
  dht.begin();
}

void loop() 
{
  float h = dht.readHumidity();   
  float t = dht.readTemperature(); 

  if (isnan(h) || isnan(t)) {    
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  
  Serial.print(t, 2); 
  Serial.print("\t");
  Serial.println(h, 2);
  
  delay(2000);
}
