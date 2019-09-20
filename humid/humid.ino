#include <dht.h>

//digital
dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}
void loop()
{
    int chk = DHT.read11(DHT11_PIN);
    if (DHT.temperature != -999 || DHT.humidity != -999) {
    Serial.print("Temperature = ");
    Serial.println(DHT.temperature);
    Serial.print("Humidity = ");
    Serial.println(DHT.humidity); }
    delay(500);
    Serial.println();
}
