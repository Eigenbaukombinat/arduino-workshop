int led = 7; // Pin der LED-Schaltleitung
int sw = 2; // Pin des Tasters

// einmalige Konfiguration nach Reset
void setup() {                
  pinMode(led, OUTPUT); // setzt den Pin auf Ausgang 
  pinMode(led, INPUT); // setzt den Pin auf Eingang 
}

// wird wiederholt aufgeführt
void loop() {
  int input = digitalRead(sw);
  if (input == HIGH)
  {
    digitalWrite(led, HIGH); // schalte LED an
    delay(1000); // warte 1000ms, also eine Sekunde
    digitalWrite(led, LOW); // schalte LED aus
    delay(1000); // warte 1000ms, also eine Sekunde
  }
  else
  {
    digitalWrite(led, HIGH); // schalte LED an
    delay(300); // warte 300ms
    digitalWrite(led, LOW); // schalte LED aus
    delay(300); // warte 300ms
  }
}
