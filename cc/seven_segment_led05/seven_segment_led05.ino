const int anode_a = 12;  //アノードに接続するArduinoのピン
const int anode_b = 8;
const int anode_c = 5;
const int anode_d = 3;
const int anode_e = 2;
const int anode_f = 11;
const int anode_g = 6;
const int cathode_pin = 13; // カソードに接続するArduinoのピン

void display_0() {
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, HIGH);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, LOW);
}

void display_1() {
  digitalWrite(anode_a, LOW);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, LOW);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, LOW);
  digitalWrite(anode_g, LOW);
}

void display_2() {
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, LOW);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, HIGH);
  digitalWrite(anode_f, LOW);
  digitalWrite(anode_g, HIGH);
}

void display_3() {
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, LOW);
  digitalWrite(anode_g, HIGH);
}

void display_4() {
  digitalWrite(anode_a, LOW);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, LOW);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, HIGH);
}

void display_5() {
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, LOW);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, HIGH);
}

void display_6() {
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, LOW);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, HIGH);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, HIGH);
}

void display_7() {
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, LOW);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, LOW);
}
void display_8() {
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, HIGH);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, HIGH);
}

void display_9() {
  digitalWrite(anode_a, HIGH);
  digitalWrite(anode_b, HIGH);
  digitalWrite(anode_c, HIGH);
  digitalWrite(anode_d, HIGH);
  digitalWrite(anode_e, LOW);
  digitalWrite(anode_f, HIGH);
  digitalWrite(anode_g, HIGH);
}

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
  display_0();
  delay(500);
  display_1();
  delay(500);
  display_2();
  delay(500);
  display_3();
  delay(500);
  display_4();
  delay(500);
  display_5();
  delay(500);
  display_6();
  delay(500);
  display_7();
  delay(500);
  display_8();
  delay(500);
  display_9();
  delay(500);
}
