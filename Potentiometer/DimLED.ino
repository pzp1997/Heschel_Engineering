int knobPin = A0; //potentiometer
//int buttonPin = 13; //button
int ledPin1 = 9; //green LED
int ledPin2 = 10; //big blue LED
int ledPin3 = 11; //red Christmas lights
int knobVal = 0;  //potentiometer value: 0-1023
//int buttonVal = 0; //button value: HIGH/LOW
int delayTime = 100; //time of delay in ms
//boolean solid = true; //controls if solid or blinking

void setup() {
  pinMode(knobPin, INPUT);
  //pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);  
}

void loop() {
  //buttonVal = digitalRead(buttonPin);
  knobVal = analogRead(knobPin);
  
  /*
  if (buttonVal == HIGH) {
    solid = !solid;
  }
  */
  
  analogWrite(ledPin1, knobVal/4);
  analogWrite(ledPin2, knobVal/4);
  analogWrite(ledPin3, knobVal/4);  
  
  /*
  if (solid == false) {
    delay(delayTime);          
    
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW); 
    digitalWrite(ledPin3, LOW);
    
    delay(delayTime);
  */
  }
}
