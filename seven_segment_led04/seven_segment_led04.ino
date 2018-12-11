const int anode_a = 12;  //アノードに接続するArduinoのピン
const int anode_b = 8;
const int anode_c = 5;
const int anode_d = 3;
const int anode_e = 2;
const int anode_f = 11;
const int anode_g = 6;
const int cathode_pin = 13; // カソードに接続するArduinoのピン

// setup()　は，最初に一度だけ実行される
void setup () {
  // ピンを出力モードに設定する
  pinMode(anode_a, OUTPUT);
  pinMode(anode_b, OUTPUT);
  pinMode(anode_c, OUTPUT);
  pinMode(anode_d, OUTPUT);
  pinMode(anode_e, OUTPUT);
  pinMode(anode_f, OUTPUT);
  pinMode(anode_g, OUTPUT);
  pinMode(cathode_pin, OUTPUT);
}

// loop() は，setup ()実行後，無限に実行される
void loop() {
  // cathode_pinにLOWを出力する
  digitalWrite(cathode_pin, LOW);
  
  // 各数字で点灯するピンにHIGHを，消灯するピンにLOWを出力する
  /* 0 */
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, HIGH);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, LOW);
  delay(500);

  /* 1 */
  digitalWrite(anode_a, LOW);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, LOW);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, LOW);
  digitalWrite(anode_g, LOW);
  delay(500);

  /* 2 */
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, LOW);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, HIGH);
  digitalWrite(anode_f, LOW);
  digitalWrite(anode_g, HIGH);
  delay(500);

  /* 3 */
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, LOW);
  digitalWrite(anode_g, HIGH);
  delay(500);

  /* 4 */
  digitalWrite(anode_a, LOW);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, LOW);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, HIGH);
  delay(500);
  
  /* 5 */
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, LOW);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, HIGH);
  delay(500);
  
  /* 6 */
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, LOW);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, HIGH);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, HIGH);
  delay(500);
  
  /* 7 */
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, LOW);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, LOW);
  delay(500);
  
  /* 8 */
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, HIGH);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, HIGH);
  delay(500);

  /* 9 */
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, HIGH);
  delay(500);
}
