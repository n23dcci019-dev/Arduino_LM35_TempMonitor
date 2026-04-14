const int sensorPins[2] = {A0, A1};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValues[2];
  float temperatures[2];
  
  for (int i = 0; i < 2; i++) {
    adcValues[i] = analogRead(sensorPins[i]);
    temperatures[i] = (adcValues[i] * 500.0) / 1023.0;
  }
  
  Serial.print("{\"temp1\":");
  Serial.print(temperatures[0]);
  Serial.print(", \"temp2\":");
  Serial.print(temperatures[1]);
  Serial.println("}");
  
  delay(1000);
}