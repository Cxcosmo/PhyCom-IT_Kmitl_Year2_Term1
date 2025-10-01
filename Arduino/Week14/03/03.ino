void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0); // แปลงค่า Analog เป็น Voltage
  float temperatureC = (voltage - 0.5) / 0.01; // แปลง Voltage เป็น อุณหภูมิ (Celsius)
  
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");
  
  delay(1000);
}
