// LEDをオン・オフする際の出力
#define DIGIT_ON LOW
#define DIGIT_OFF HIGH
#define SEGMENT_ON HIGH
#define SEGMENT_OFF LOW

const int digitPin = 13;                                                       // ディジット(コモン)に接続するArduinoのピン
const int segmentPins[] = {2, 3, 4, 5, 6, 8, 11, 12};                          // セグメントピンに接続するArduinoのピン
const int numberOfSegmentPins = sizeof(segmentPins) / sizeof(segmentPins[0]);  // セグメントの数

// setup()　は，最初に一度だけ実行される
void setup() {
  pinMode(digitPin, OUTPUT);  // digitPinを出力モードに設定する
  for (int i = 0; i < numberOfSegmentPins; i++) {
    pinMode(segmentPins[i], OUTPUT);  // segmentPinsを出力モードに設定する
  }
}

// loop() は，setup ()実行後，無限に実行される
void loop() {
  int segmentPin = segmentPins[random(numberOfSegmentPins)];  // 点灯するピンを選択する

  digitalWrite(digitPin, DIGIT_ON);       // digitPinをオンにする
  digitalWrite(segmentPin, SEGMENT_ON);   // 選択したピンをオンにする
  delay(100);                             // 少し待つ
  digitalWrite(segmentPin, SEGMENT_OFF);  // 選択したピンをオフにする
}