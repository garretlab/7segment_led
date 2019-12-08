// LEDをオン・オフする際の出力
#define DIGIT_ON LOW
#define DIGIT_OFF HIGH
#define SEGMENT_ON HIGH
#define SEGMENT_OFF LOW

const int digitPin = 13;   // ディジット(コモン)に接続するArduinoのピン
const int segmentPin = 2;  // セグメントに接続するArduinoのピン

// setup()　は，最初に一度だけ実行される
void setup() {
  pinMode(digitPin, OUTPUT);    // digitPinを出力モードに設定する
  pinMode(segmentPin, OUTPUT);  // segmentPinを出力モードに設定する
}

// loop() は，setup ()実行後，無限に実行される
void loop() {
  digitalWrite(digitPin, DIGIT_ON);      // digitPinをオンにする
  digitalWrite(segmentPin, SEGMENT_ON);  // segmentPinをオンにする
}