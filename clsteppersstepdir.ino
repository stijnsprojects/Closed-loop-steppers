const int stepPin = 3;
const int dirPin = 4;
const int enPin = 5;

const int pot = A6;

int del;
 
void setup() {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(enPin, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(enPin, LOW);
  digitalWrite(dirPin, LOW);
  while (1) {
    del = map(analogRead(pot), 0, 1024, 0, 1000);
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(del);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(del);
  }
}
