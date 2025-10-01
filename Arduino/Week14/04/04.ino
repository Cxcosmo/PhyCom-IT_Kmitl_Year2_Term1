float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = log(10000 * (1023.0 / (float)sensorValue - 1.0));
  float temperatureC;
  
  temperatureC = 1.0 / (c1 + c2 * voltage + c3 * voltage * voltage * voltage);
  temperatureC -= 273.15;
  
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");
  
  delay(1000);
}
