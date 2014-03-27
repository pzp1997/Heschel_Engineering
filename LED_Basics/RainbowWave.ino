int red=2;
int ora=3;
int yel=4;
int gre=5;
int aqu=6;
int blu=7;

int del = 40;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(ora, OUTPUT);
  pinMode(yel, OUTPUT);
  pinMode(gre, OUTPUT);
  pinMode(aqu, OUTPUT);
  pinMode(blu, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  digitalWrite(gre, HIGH);
  delay(del);
  digitalWrite(red, LOW);
  digitalWrite(gre, LOW);
  digitalWrite(ora, HIGH);
  digitalWrite(aqu, HIGH);
  delay(del);
  digitalWrite(ora, LOW);
  digitalWrite(aqu, LOW);
  digitalWrite(yel, HIGH);
  digitalWrite(blu, HIGH);
  delay(del);
  digitalWrite(yel, LOW);
  digitalWrite(blu, LOW);
  digitalWrite(gre, HIGH);
  digitalWrite(red, HIGH);
  delay(del);
  digitalWrite(gre, LOW);
  digitalWrite(red, LOW);
  digitalWrite(aqu, HIGH);
  digitalWrite(ora, HIGH);
  delay(del);
  digitalWrite(aqu, LOW);
  digitalWrite(ora, LOW);
  digitalWrite(blu, HIGH);
  digitalWrite(yel, HIGH);
  delay(del);
  digitalWrite(blu, LOW);
  digitalWrite(blu2, LOW);
}
