const int echoPin = 7; // Pin für das analoge Echo
const int trigPin = 8; // Pin für den digitalen Triggerimpuls
const int ledPin = 13; // LED

int target = 0; // minimale Zieldistanz
long duration; // Impulsdauer in µs
long mils;

int state = 0;
int cnt = 0;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); 
}

void loop() {
  // Impuls aussenden
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  
  // auf Impulsantwort warten -> Impulslänge in µs wird zurück gegeben
  duration = pulseIn(echoPin, HIGH);
 
  if (state == 0) {
     state = 1;
     target = duration - 200;
     Serial.println("Target:");
     Serial.println(target);
  }
 
  if (duration < target) {
    cnt++;
    if (state == 1) {
      digitalWrite(ledPin, HIGH);   
      state = 2;
      mils = millis();
      Serial.println("Start");
      delay(3000);
    } else if (state == 2) {
      digitalWrite(ledPin, LOW); 
      state = 1; 
      mils = millis() - mils;
      Serial.println("Seconds:");
      Serial.println(mils / 100);
      delay(3000);
    } 
  }
  
  Serial.println(duration);
 
  // 50 ms verzögern
  delay(50);
}
