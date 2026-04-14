const int sensorPins[3] = {A0, A1, A2};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValues[3];
  float temperatures[3];
  
  // Giữ lại logic vòng lặp 3 kênh của SV A
  for (int i = 0; i < 3; i++) {
    adcValues[i] = analogRead(sensorPins[i]);
    temperatures[i] = (adcValues[i] * 500.0) / 1023.0;
  }
  
  // Giữ lại định dạng JSON của SV B và bổ sung thêm kênh 3
  Serial.print("{\"temp1\":");
  Serial.print(temperatures[0]);
  Serial.print(", \"temp2\":");
  Serial.print(temperatures[1]);
  Serial.print(", \"temp3\":");
  Serial.print(temperatures[2]);
  Serial.println("}");
  
  delay(1000);
}