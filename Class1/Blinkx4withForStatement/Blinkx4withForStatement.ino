/* Blinkx4withForStatement */


int whichPin;

void setup() {
  for (whichPin = 10; whichPin <= 13; whichPin++) {
    pinMode(whichPin, OUTPUT);     
  }
}

void loop() {
  for (whichPin = 10; whichPin <= 13; whichPin++) {
    digitalWrite(whichPin, HIGH);
  }
  delay(1000);              
  for (whichPin = 10; whichPin <= 13; whichPin++) {
    digitalWrite(whichPin, LOW);
  }
  delay(1000); 
}




