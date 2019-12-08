// LEDをオン・オフする際の出力
#define DIGIT_ON LOW
#define DIGIT_OFF HIGH
#define SEGMENT_ON HIGH
#define SEGMENT_OFF LOW

const int digitPins[] = {7, 9, 10, 13};                                        // ディジット(コモン)に接続するArduinoのピン
const int segmentPins[] = {12, 8, 5, 3, 2, 11, 6};                             // セグメントピンに接続するArduinoのピン
const int numberOfDigitPins = sizeof(digitPins) / sizeof(digitPins[0]);        // ディジットの数
const int numberOfSegmentPins = sizeof(segmentPins) / sizeof(segmentPins[0]);  // セグメントの数

// setup()　は，最初に一度だけ実行される
void setup() {
  for (int i = 0; i < numberOfDigitPins; i++) {
    pinMode(digitPins[i], OUTPUT);  // digitPinsを出力モードに設定する
    digitalWrite(digitPins[i], DIGIT_OFF);
  }
  for (int i = 0; i < numberOfSegmentPins; i++) {
    pinMode(segmentPins[i], OUTPUT);  // segmentPinsを出力モードに設定する
  }
}

void loop() {
  int digitPin = digitPins[random(numberOfDigitPins)];        // 点灯するディジットを選択する
  int segmentPin = segmentPins[random(numberOfSegmentPins)];  // 点灯するセグメントを選択する

  digitalWrite(digitPin, DIGIT_ON);
  digitalWrite(segmentPin, SEGMENT_ON);
  delay(10);
  digitalWrite(digitPin, DIGIT_OFF);
  digitalWrite(segmentPin, SEGMENT_OFF);
}