// LEDをオン・オフする際の出力
#define DIGIT_ON LOW
#define DIGIT_OFF HIGH
#define SEGMENT_ON HIGH
#define SEGMENT_OFF LOW

const int digitPin = 13;     // ディジット(コモン)に接続するArduinoのピン
const int segmentPinA = 12;  // セグメントピンに接続するArduinoのピン
const int segmentPinB = 8;
const int segmentPinC = 5;
const int segmentPinD = 3;
const int segmentPinE = 2;
const int segmentPinF = 11;
const int segmentPinG = 6;

// 数字と表示させるセグメントの関係
const int digits[] = {
    0b00111111,  // 0
    0b00000110,  // 1
    0b01011011,  // 2
    0b01001111,  // 3
    0b01100110,  // 4
    0b01101101,  // 5
    0b01111101,  // 6
    0b00100111,  // 7
    0b01111111,  // 8
    0b01101111,  // 9
};

// 数字を表示する
void displayNumber(int n) {
  // digits[n]の各ビットを調べて対応するセグメントを点灯・消灯する
  digitalWrite(segmentPinA, digits[n] & 0b00000001 ? SEGMENT_ON : SEGMENT_OFF);
  digitalWrite(segmentPinB, digits[n] & 0b00000010 ? SEGMENT_ON : SEGMENT_OFF);
  digitalWrite(segmentPinC, digits[n] & 0b00000100 ? SEGMENT_ON : SEGMENT_OFF);
  digitalWrite(segmentPinD, digits[n] & 0b00001000 ? SEGMENT_ON : SEGMENT_OFF);
  digitalWrite(segmentPinE, digits[n] & 0b00010000 ? SEGMENT_ON : SEGMENT_OFF);
  digitalWrite(segmentPinF, digits[n] & 0b00100000 ? SEGMENT_ON : SEGMENT_OFF);
  digitalWrite(segmentPinG, digits[n] & 0b01000000 ? SEGMENT_ON : SEGMENT_OFF);
}

// setup()　は，最初に一度だけ実行される
void setup() {
  // ピンを出力モードに設定する
  pinMode(digitPin, OUTPUT);
  pinMode(segmentPinA, OUTPUT);
  pinMode(segmentPinB, OUTPUT);
  pinMode(segmentPinC, OUTPUT);
  pinMode(segmentPinD, OUTPUT);
  pinMode(segmentPinE, OUTPUT);
  pinMode(segmentPinF, OUTPUT);
  pinMode(segmentPinG, OUTPUT);
}

// loop() は，setup ()実行後，無限に実行される
void loop() {
  digitalWrite(digitPin, DIGIT_ON);
  displayNumber(0);
  delay(500);
  displayNumber(1);
  delay(500);
  displayNumber(2);
  delay(500);
  displayNumber(3);
  delay(500);
  displayNumber(4);
  delay(500);
  displayNumber(5);
  delay(500);
  displayNumber(6);
  delay(500);
  displayNumber(7);
  delay(500);
  displayNumber(8);
  delay(500);
  displayNumber(9);
  delay(500);
}