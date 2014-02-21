/**
 * Basiert auf Arduino Originalbeispiel "Blink".
 */
 
int led = 13; // Pin der LED

// einmalige Konfiguration nach Reset
void setup() {                
  pinMode(led, OUTPUT); // setzt den Pin auf Ausgang 
}

// wird wiederholt aufgeführt
void loop() {
  digitalWrite(led, HIGH); // schalte LED an
  delay(1000); // warte 1000ms, also eine Sekunde
  digitalWrite(led, LOW); // schalte LED aus
 delay(1000); // warte 1000ms, also eine Sekunde
}
