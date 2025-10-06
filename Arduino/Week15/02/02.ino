#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(1, 0);
  lcd.print("-Temperature-");
}
void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0); // แปลงค่า Analog เป็น Voltage
  float temperatureC = (voltage - 0.5) * 100; // แปลง Voltage เป็น อุณหภูมิ (Celsius)
  
  lcd.setCursor(5, 1);
  lcd.print(temperatureC);
  lcd.print(" C");

  delay(1000);
}
