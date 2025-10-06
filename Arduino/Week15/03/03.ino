#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte heart[8] = {
  B00000,
  B01010,
  B10101,
  B10001,
  B01010,
  B00100,
  B00000,
  B00000};

byte o[8] = {
  B00000,
  B01110,
  B01010,
  B01110,
  B00000,
  B00000,
  B00000,
  B00000};

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.createChar(1, heart);
  lcd.createChar(2, o);

  lcd.setCursor(0, 0);
  lcd.print("<---I ");
  lcd.write(byte(1));
  lcd.print(" KMITL-->");
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0); // แปลงค่า Analog เป็น Voltage
  float temperatureC = (voltage - 0.5) * 100; // แปลง Voltage เป็น อุณหภูมิ (Celsius)
  
  lcd.setCursor(0, 1);
  lcd.print("67070066 ");
  lcd.print(temperatureC);
  lcd.write(byte(2));
  lcd.print("C");

  delay(1000);
}
