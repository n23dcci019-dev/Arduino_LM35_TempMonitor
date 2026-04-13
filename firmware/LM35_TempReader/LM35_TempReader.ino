const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(sensorPin);
  
  float temperature = (adcValue * 500.0) / 1023.0;
  
  Serial.print("Nhiet do: ");
  Serial.print(temperature);
  Serial.println(" C");
  
  delay(1000);
}