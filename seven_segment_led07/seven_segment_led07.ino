// LEDをオン・オフする際の出力
#define DIGIT_ON LOW
#define DIGIT_OFF HIGH
#define SEGMENT_ON HIGH
#define SEGMENT_OFF LOW

const int digitPin = 13;                                                       // ディジット(コモン)に接続するArduinoのピン
const int segmentPins[] = {12, 8, 5, 3, 2, 11, 6};                             // セグメントピンに接続するArduinoのピン
const int numberOfSegmentPins = sizeof(segmentPins) / sizeof(segmentPins[0]);  // セグメントの数

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
  for (int i = 0; i < numberOfSegmentPins; i++) {
    digitalWrite(segmentPins[i], digits[n] & (1 << i) ? SEGMENT_ON : SEGMENT_OFF);
  }
}

// setup()　は，最初に一度だけ実行される
void setup() {
  pinMode(digitPin, OUTPUT);  // digitPinを出力モードに設定する
  for (int i = 0; i < numberOfSegmentPins; i++) {
    pinMode(segmentPins[i], OUTPUT);  // segmentPinsを出力モードに設定する
  }
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