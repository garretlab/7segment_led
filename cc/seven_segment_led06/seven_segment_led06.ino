const int anode_a = 12;  //アノードに接続するArduinoのピン
const int anode_b = 8;
const int anode_c = 5;
const int anode_d = 3;
const int anode_e = 2;
const int anode_f = 11;
const int anode_g = 6;
const int cathode_pin = 13; // カソードに接続するArduinoのピン

// 数字と表示させるセグメントの関係
const int digits[] = {
  0b00111111, // 0
  0b00000110, // 1
  0b01011011, // 2
  0b01001111, // 3
  0b01100110, // 4
  0b01101101, // 5
  0b01111101, // 6
  0b00100111, // 7
  0b01111111, // 8
  0b01101111, // 9
};

// 数字を表示する
void display_number (int n) {
  // digits[n]の各ビットを調べて対応するセグメントを点灯・消灯する
  digitalWrite(anode_a, digits[n] & 0b00000001 ? HIGH : LOW);
  digitalWrite(anode_b, digits[n] & 0b00000010 ? HIGH : LOW);
  digitalWrite(anode_c, digits[n] & 0b00000100 ? HIGH : LOW);
  digitalWrite(anode_d, digits[n] & 0b00001000 ? HIGH : LOW);
  digitalWrite(anode_e, digits[n] & 0b00010000 ? HIGH : LOW);
  digitalWrite(anode_f, digits[n] & 0b00100000 ? HIGH : LOW);
  digitalWrite(anode_g, digits[n] & 0b01000000 ? HIGH : LOW);
}

void setup () {
  pinMode(anode_a, OUTPUT);
  pinMode(anode_b, OUTPUT);
  pinMode(anode_c, OUTPUT);
  pinMode(anode_d, OUTPUT);
  pinMode(anode_e, OUTPUT);
  pinMode(anode_f, OUTPUT);
  pinMode(anode_g, OUTPUT);
  pinMode(cathode_pin, OUTPUT);
}

void loop () {
  digitalWrite(cathode_pin, LOW);
  display_number(0);
  delay(500);
  display_number(1);
  delay(500);
  display_number(2);
  delay(500);
  display_number(3);
  delay(500);
  display_number(4);
  delay(500);
  display_number(5);
  delay(500);
  display_number(6);
  delay(500);
  display_number(7);
  delay(500);
  display_number(8);
  delay(500);
  display_number(9);
  delay(500);
}

