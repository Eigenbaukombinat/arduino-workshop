// Belegung am Demonstrator
// Schwarz: Masse
// Gelb: 5V
// Rot: PWM an Pin 3

const int fanPin = 3;

void setup() {
  pinMode(fanPin, OUTPUT);
}

void loop() {
  analogWrite(fanPin, 200);
}
