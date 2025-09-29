void setup() {
    pinMode(4, INPUT);
    pinMode(5, INPUT);
    pinMode(6, INPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
}
void loop(){
    int sw1 = digitalRead(4);
    int sw2 = digitalRead(5);
    int sw3 = digitalRead(6);
    if (sw1 == LOW) {
        digitalWrite(8, LOW);
    } else {
        digitalWrite(8, HIGH);
    }
    if (sw2 == LOW) {
        digitalWrite(9, LOW);
    } else {
        digitalWrite(9, HIGH);
    }
    if (sw3 == LOW) {
        digitalWrite(10, LOW);
    } else {
        digitalWrite(10, HIGH);
    }
}