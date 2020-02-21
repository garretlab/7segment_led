// LEDをオン・オフする際の出力
#define DIGIT_ON LOW
#define DIGIT_OFF HIGH
#define SEGMENT_ON HIGH
#define SEGMENT_OFF LOW

const int digitPins[] = {7, 9, 10, 13};                                        // ディジット(コモン)に接続するArduinoのピン
const int segmentPins[] = {12, 8, 5, 3, 2, 11, 6};                             // セグメントピンに接続するArduinoのピン
const int numberOfDigitPins = sizeof(digitPins) / sizeof(digitPins[0]);        // ディジットの数
const int numberOfSegmentPins = sizeof(segmentPins) / sizeof(segmentPins[0]);  // セグメントの数
int numbersToDisplay = 0;                                                      // LEDに表示する数字を保持する変数

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

// セグメントをすべてオフにする
void clearSegments() {
  for (int j = 0; j < numberOfSegmentPins; j++) {
    digitalWrite(segmentPins[j], SEGMENT_OFF);
  }
}

// 4桁の数字を表示する
void displayNumbers() {
  int n = numbersToDisplay;                      // numberToDisplayの値を書き換えないために変数にコピー
  for (int i = 0; i < numberOfDigitPins; i++) {  // 右の桁からディジットを選択する
    digitalWrite(digitPins[i], DIGIT_ON);        // ディジットをオンにする
    displayNumber(n % 10);                       // 10で割った余りを求めて、1の位を求め、表示する
    delayMicroseconds(100);
    clearSegments();                        // セグメントをすべてオフにする
    digitalWrite(digitPins[i], DIGIT_OFF);  // ディジットをオフにする
    n /= 10;                                // 10で割り、次に表示する数字を、1の位に移す
  }
}

// 表示する数字をセットする
void setNumbers(int n) {
  numbersToDisplay = n;
}

// setup()　は，最初に一度だけ実行される
void setup() {
  for (int i = 0; i < numberOfDigitPins; i++) {
    pinMode(digitPins[i], OUTPUT);  // digitPinsを出力モードに設定する
    digitalWrite(digitPins[i], DIGIT_OFF);
  }
  for (int i = 0; i < numberOfSegmentPins; i++) {
    pinMode(segmentPins[i], OUTPUT);  // segmentPinsを出力モードに設定する
  }

  // f = クロック周波数 / ( 2 * 分周比　*　( 1 + 比較レジスタの値))
  // 分周比=64, 比較レジスタの1値=255 -> f = 16000000 / (2 * 64 * 256) = 488 Hz
  OCR2A = 255;                  // 255クロックごとに割り込みをかける
  TCCR2B = 0b100;               // 分周比を32に設定する
  bitWrite(TIMSK2, OCIE2A, 1);  // TIMER2を許可する
}

void loop() {
  for (int i = 0; i < 10000; i++) {
    setNumbers(i);
    delay(1000);
  }
}

ISR(TIMER2_COMPA_vect) {
  displayNumbers();
}