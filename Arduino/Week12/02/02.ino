// กำหนดพอร์ตสำหรับ LED RGB
const int RED_PIN = 4;    // ขา Red
const int GREEN_PIN = 5;  // ขา Green
const int BLUE_PIN = ;   // ขา Blue

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