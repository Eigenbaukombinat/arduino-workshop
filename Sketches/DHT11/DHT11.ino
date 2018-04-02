#include <DHT.h>

// Sensor Pin 1 -> Arduino Pin 2
// Sensor Pin 2 -> Arduino +5V
// Sensor Pin 3 -> Arduino GND

DHT dht(2, DHT11);

void setup() {
    Serial.begin(9600);

    dht.begin();
}

void loop() {
    delay(2000);
    
    Serial.print("Humidity (%): ");
    float h = dht.readHumidity();
    Serial.println(h);

    Serial.print("Temperature (C): ");
    Serial.println(dht.readTemperature());
}

