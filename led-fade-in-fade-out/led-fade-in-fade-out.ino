int verde = 11;
float sinVal;
int ledVal;

void setup() {
pinMode(verde, OUTPUT);
}

void loop() {
  for(int x = 0; x < 180; x++){
    sinVal = (sin(x*(3.1416/180)));
    ledVal = int(sinVal*255);
    analogWrite(verde, ledVal);
    delay(50);
  }

}
