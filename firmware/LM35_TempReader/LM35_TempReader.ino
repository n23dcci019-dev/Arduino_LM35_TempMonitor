const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Đọc giá trị ADC từ chân A0
  int adcValue = analogRead(sensorPin);
  
  // Chuyển đổi ADC sang nhiệt độ (độ C)
  float temperature = (adcValue * 500.0) / 1023.0;
  
  // In ra Serial Monitor
  Serial.print("Nhiet do: ");
  Serial.print(temperature);
  Serial.println(" C");
  
  delay(1000); // Đọc mỗi 1 giây
}