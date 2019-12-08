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

void display0() {
  digitalWrite(segmentPinA, SEGMENT_ON);
  digitalWrite(segmentPinB, SEGMENT_ON);
  digitalWrite(segmentPinC, SEGMENT_ON);
  digitalWrite(segmentPinD, SEGMENT_ON);
  digitalWrite(segmentPinE, SEGMENT_ON);
  digitalWrite(segmentPinF, SEGMENT_ON);
  digitalWrite(segmentPinG, SEGMENT_OFF);
}

void display1() {
  digitalWrite(segmentPinA, SEGMENT_OFF);
  digitalWrite(segmentPinB, SEGMENT_ON);
  digitalWrite(segmentPinC, SEGMENT_ON);
  digitalWrite(segmentPinD, SEGMENT_OFF);
  digitalWrite(segmentPinE, SEGMENT_OFF);
  digitalWrite(segmentPinF, SEGMENT_OFF);
  digitalWrite(segmentPinG, SEGMENT_OFF);
}

void display2() {
  digitalWrite(segmentPinA, SEGMENT_ON);
  digitalWrite(segmentPinB, SEGMENT_ON);
  digitalWrite(segmentPinC, SEGMENT_OFF);
  digitalWrite(segmentPinD, SEGMENT_ON);
  digitalWrite(segmentPinE, SEGMENT_ON);
  digitalWrite(segmentPinF, SEGMENT_OFF);
  digitalWrite(segmentPinG, SEGMENT_ON);
}

void display3() {
  digitalWrite(segmentPinA, SEGMENT_ON);
  digitalWrite(segmentPinB, SEGMENT_ON);
  digitalWrite(segmentPinC, SEGMENT_ON);
  digitalWrite(segmentPinD, SEGMENT_ON);
  digitalWrite(segmentPinE, SEGMENT_OFF);
  digitalWrite(segmentPinF, SEGMENT_OFF);
  digitalWrite(segmentPinG, SEGMENT_ON);
}

void display4() {
  digitalWrite(segmentPinA, SEGMENT_OFF);
  digitalWrite(segmentPinB, SEGMENT_ON);
  digitalWrite(segmentPinC, SEGMENT_ON);
  digitalWrite(segmentPinD, SEGMENT_OFF);
  digitalWrite(segmentPinE, SEGMENT_OFF);
  digitalWrite(segmentPinF, SEGMENT_ON);
  digitalWrite(segmentPinG, SEGMENT_ON);
}

void display5() {
  digitalWrite(segmentPinA, SEGMENT_ON);
  digitalWrite(segmentPinB, SEGMENT_OFF);
  digitalWrite(segmentPinC, SEGMENT_ON);
  digitalWrite(segmentPinD, SEGMENT_ON);
  digitalWrite(segmentPinE, SEGMENT_OFF);
  digitalWrite(segmentPinF, SEGMENT_ON);
  digitalWrite(segmentPinG, SEGMENT_ON);
}

void display6() {
  digitalWrite(segmentPinA, SEGMENT_ON);
  digitalWrite(segmentPinB, SEGMENT_OFF);
  digitalWrite(segmentPinC, SEGMENT_ON);
  digitalWrite(segmentPinD, SEGMENT_ON);
  digitalWrite(segmentPinE, SEGMENT_ON);
  digitalWrite(segmentPinF, SEGMENT_ON);
  digitalWrite(segmentPinG, SEGMENT_ON);
}

void display7() {
  digitalWrite(segmentPinA, SEGMENT_ON);
  digitalWrite(segmentPinB, SEGMENT_ON);
  digitalWrite(segmentPinC, SEGMENT_ON);
  digitalWrite(segmentPinD, SEGMENT_OFF);
  digitalWrite(segmentPinE, SEGMENT_OFF);
  digitalWrite(segmentPinF, SEGMENT_ON);
  digitalWrite(segmentPinG, SEGMENT_OFF);
}
void display8() {
  digitalWrite(segmentPinA, SEGMENT_ON);
  digitalWrite(segmentPinB, SEGMENT_ON);
  digitalWrite(segmentPinC, SEGMENT_ON);
  digitalWrite(segmentPinD, SEGMENT_ON);
  digitalWrite(segmentPinE, SEGMENT_ON);
  digitalWrite(segmentPinF, SEGMENT_ON);
  digitalWrite(segmentPinG, SEGMENT_ON);
}

void display9() {
  digitalWrite(segmentPinA, SEGMENT_ON);
  digitalWrite(segmentPinB, SEGMENT_ON);
  digitalWrite(segmentPinC, SEGMENT_ON);
  digitalWrite(segmentPinD, SEGMENT_ON);
  digitalWrite(segmentPinE, SEGMENT_OFF);
  digitalWrite(segmentPinF, SEGMENT_ON);
  digitalWrite(segmentPinG, SEGMENT_ON);
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
  // digitPinをオンにする
  digitalWrite(digitPin, DIGIT_ON);

  display0();
  delay(500);
  display1();
  delay(500);
  display2();
  delay(500);
  display3();
  delay(500);
  display4();
  delay(500);
  display5();
  delay(500);
  display6();
  delay(500);
  display7();
  delay(500);
  display8();
  delay(500);
  display9();
  delay(500);
}