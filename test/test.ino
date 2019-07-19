/*
 * This is a test to get used to Arduino
 */

int ledPin = 13; 

void setup() {
  // initialize pins as outputs 
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(ledPin, LOW);
  delay(100);
}
