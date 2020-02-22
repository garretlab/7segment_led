// LEDをオン・オフする際の出力
#define DIGIT_ON LOW
#define DIGIT_OFF HIGH
#define SEGMENT_ON HIGH
#define SEGMENT_OFF LOW

const int digitPins[] = {7, 9, 10, 13};                                        // ディジット(コモン)に接続するArduinoのピン
const int segmentPins[] = {12, 8, 5, 3, 2, 11, 6};                             // セグメントピンに接続するArduinoのピン
const int numberOfDigitPins = sizeof(digitPins) / sizeof(digitPins[0]);        // ディジットの数
const int numberOfSegmentPins = sizeof(segmentPins) / sizeof(segmentPins[0]);  // セグメントの数

// 各桁で点灯するセグメントに接続しているArduinoのピン番号。
const int turnOnPins[] = {3, 12, 11, 2};

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
  for (int i = 0; i < numberOfDigitPins; i++) {  // 表示桁を選択
    digitalWrite(digitPins[i], DIGIT_ON);        // ディジットをオンに
    digitalWrite(turnOnPins[i], SEGMENT_ON);     // セグメントをオンに
    delay(3);                                    // 明るさ調整用。点滅しない程度に。
    digitalWrite(digitPins[i], DIGIT_OFF);       // ディジットをオフに
    digitalWrite(turnOnPins[i], SEGMENT_OFF);    // セグメントをオフに
  }
}
