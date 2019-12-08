const int anode_pins[] = {12, 8, 5, 3, 2, 11, 6};    // アノードに接続するArduinoのピン
const int cathode_pin = 13;  // カソードに接続するArduinoのピン
const int number_of_anode_pins = sizeof(anode_pins) / sizeof(anode_pins[0]);

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

// 数字(n)を表示する
void display_number (int n) {
  for (int i = 0; i < number_of_anode_pins; i++) {
    digitalWrite(anode_pins[i], digits[n] & (1 << i) ? HIGH : LOW);
  }
}

// setup()　は，最初に一度だけ実行される
void setup() {
  for (int i = 0; i < number_of_anode_pins; i++) {
    pinMode(anode_pins[i], OUTPUT);  // anode_pinsを出力モードに設定する
  }
  pinMode(cathode_pin, OUTPUT);  // cathode_pinを出力モードに設定する
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
