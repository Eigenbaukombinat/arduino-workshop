#include <Dht11.h>

Dht11 sensor(2);

void setup() {
    Serial.begin(9600);
    Serial.print("Dht11 Lib version ");
    Serial.println(Dht11::VERSION);
    
}

/*
 * loop
 *
 * Code to be executed repeatedly.
 */
void loop() {
    switch (sensor.read()) {
    case Dht11::OK:
        Serial.print("Humidity (%): ");
        Serial.println(sensor.getHumidity());

        Serial.print("Temperature (C): ");
        Serial.println(sensor.getTemperature());
        break;

    case Dht11::ERROR_CHECKSUM:
        Serial.println("Checksum error");
        break;

    case Dht11::ERROR_TIMEOUT:
        Serial.println("Timeout error");
        break;

    default:
        Serial.println("Unknown error");
        break;
    }

    delay(2000);
}

