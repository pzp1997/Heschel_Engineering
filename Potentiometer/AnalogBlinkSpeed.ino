int knobPin = A0; //potentiometer pin
int ledPin1 = 9; //green LED pin
int ledPin2 = 10; //big blue LED pin
int ledPin3 = 11; //red Christmas lights pin
int knobVal;  //potentiometer value; 0-1023
int analogVal; //specifies PWM for analog; 0-255

void setup() {
  pinMode(knobPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);  
}

void loop() {
  knobVal = analogRead(knobPin);
  
  for (analogVal = 0; analogVal < 255; analogVal++) {
    analogWrite(ledPin1, analogVal);
    analogWrite(ledPin2, analogVal);
    analogWrite(ledPin3, analogVal);
    delay(knobVal/75);
  }

  for (analogVal = 255; analogVal >= 0; analogVal--) {
    analogWrite(ledPin1, analogVal);
    analogWrite(ledPin2, analogVal);
    analogWrite(ledPin3, analogVal);
    delay(knobVal/75);
  }
}
