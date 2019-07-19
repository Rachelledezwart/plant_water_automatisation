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
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}
