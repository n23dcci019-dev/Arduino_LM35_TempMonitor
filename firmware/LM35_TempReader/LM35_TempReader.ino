const int sensorPins[3] = {A0, A1, A2};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValues[3];
  float temperatures[3];
  
  for (int i = 0; i < 3; i++) {
    adcValues[i] = analogRead(sensorPins[i]);
    temperatures[i] = (adcValues[i] * 500.0) / 1023.0;
  }
  
  Serial.print(temperatures[0]);
  Serial.print(",");
  Serial.print(temperatures[1]);
  Serial.print(",");
  Serial.println(temperatures[2]);
  
  delay(1000);
}