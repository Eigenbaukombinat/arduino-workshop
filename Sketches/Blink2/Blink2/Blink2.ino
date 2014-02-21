/**
 * Basiert auf Arduino Originalbeispiel "Blink".
 */
 
int led = 13;

void setup() {                
  pinMode(led, OUTPUT);
  Serial.begin(9600); // Konfiguriere Kommunikation zum PC
}

void loop() {
  digitalWrite(led, HIGH);
  Serial.println("LED an"); // sende an PC
  delay(1000);
  digitalWrite(led, LOW);
  Serial.println("LED aus"); // sende an PC
  delay(1000);
}
