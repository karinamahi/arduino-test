int adcValue, sensorValue;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // set de velocidade da porta serial
}

void loop() {
  // put your main code here, to run repeatedly:
  adcValue = analogRead(A0); //lendo a porta analogica
  Serial.println(adcValue); //Imprime o valor convertido
  delay(300); // evita sobrecarga de leitura do sensor
}
