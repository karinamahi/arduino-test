int ledPin1 = 11;

void setup() {
  pinMode(ledPin1, OUTPUT);
}

void loop() {
  analogWrite(ledPin1, random(120)+136);
  delay(random(200));
}
