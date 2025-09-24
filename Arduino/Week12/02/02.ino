// กำหนดพอร์ตสำหรับ LED RGB
const int RED_PIN = 6;    // ขา Red
const int BLUE_PIN = 7;   // ขา Blue
const int GREEN_PIN = 8;  // ขา Green

void setup() {
  // กำหนดพอร์ตให้เป็น OUTPUT
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void LED(int red, int blue, int green){
  digitalWrite(RED_PIN, red);
  digitalWrite(BLUE_PIN, blue);
  digitalWrite(GREEN_PIN, green);
}

void loop() {
  LED(LOW, LOW, HIGH);
  delay(1000);
  LED(HIGH, LOW, LOW);
  delay(1000);
  LED(HIGH, LOW, HIGH);
  delay(1000);
  LED(LOW, HIGH, LOW);
  delay(1000);
  LED(LOW, HIGH, HIGH);
  delay(1000);
}