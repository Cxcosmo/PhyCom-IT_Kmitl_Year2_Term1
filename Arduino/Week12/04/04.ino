#include <string.h>

int num_array[10][7] = {  { 1,1,1,1,1,1,0 },    // 0
                          { 0,1,1,0,0,0,0 },    // 1
                          { 1,1,0,1,1,0,1 },    // 2
                          { 1,1,1,1,0,0,1 },    // 3
                          { 0,1,1,0,0,1,1 },    // 4
                          { 1,0,1,1,0,1,1 },    // 5
                          { 1,0,1,1,1,1,1 },    // 6
                          { 1,1,1,0,0,0,0 },    // 7
                          { 1,1,1,1,1,1,1 },    // 8
                          { 1,1,1,0,0,1,1 }};   // 9

// Define the pins for each segment of the 7-segment display
const int segment_a = 2; 
const int segment_b = 3; 
const int segment_c = 4;
const int segment_d = 5;
const int segment_e = 6;
const int segment_f = 7;
const int segment_g = 8;

const int left_pin = 9;
const int right_pin = 10;

const char number[] = "67070066";

void setup() {
  // set pin modes for each segment
  pinMode(segment_a, OUTPUT);
  pinMode(segment_b, OUTPUT);
  pinMode(segment_c, OUTPUT);
  pinMode(segment_d, OUTPUT);
  pinMode(segment_e, OUTPUT);
  pinMode(segment_f, OUTPUT);
  pinMode(segment_g, OUTPUT);
  pinMode(left_pin, OUTPUT);
  pinMode(right_pin, OUTPUT);
}

void displayDigit(int digit, int activeSegment) {
  int leftSegment = 1;
  int rightSegment = 2;
  digitalWrite(9, activeSegment == leftSegment ? LOW : HIGH); // Control multiplexer select pin
  digitalWrite(10, activeSegment == rightSegment ? LOW : HIGH); // Control multiplexer select pin

  digitalWrite(segment_a, num_array[digit][0]);
  digitalWrite(segment_b, num_array[digit][1]);
  digitalWrite(segment_c, num_array[digit][2]);
  digitalWrite(segment_d, num_array[digit][3]);
  digitalWrite(segment_e, num_array[digit][4]);
  digitalWrite(segment_f, num_array[digit][5]);
  digitalWrite(segment_g, num_array[digit][6]);
}

void loop() {
  // Loop through each digit (0-9)
  for (int digit = 0; digit < strlen(number); digit += 2) {
    for (int time = 0; time < 200; time++){
      displayDigit(number[digit] - '0', 1);
      delay(5);
      displayDigit(number[digit + 1] - '0', 2);
      delay(5);
    }
  }
}
