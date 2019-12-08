const int anode_pins[] = {12, 8, 5, 3, 2, 11, 6, 4};    // アノードに接続するArduinoのピン
const int cathode_pins[] = {7, 9, 10, 13};  // カソードに接続するArduinoのピン
const int number_of_anode_pins = sizeof(anode_pins) / sizeof(anode_pins[0]);
const int number_of_cathode_pins = sizeof(cathode_pins) / sizeof(cathode_pins[0]);

// setup()　は，最初に一度だけ実行される
void setup() {
  for (int i = 0; i < number_of_anode_pins; i++) {
    pinMode(anode_pins[i], OUTPUT);  // anode_pinsを出力モードに設定する
  }
  for (int i = 0; i < number_of_cathode_pins; i++) {
    pinMode(cathode_pins[i], OUTPUT);  // cathode_pinを出力モードに設定する
    digitalWrite(cathode_pins[i], HIGH);
  }
}

void loop () {
  int anode_pin = anode_pins[random(number_of_anode_pins)];  // 点灯するピンを選択する
  int cathode_pin = cathode_pins[random(number_of_cathode_pins)];  // 点灯するピンを選択する
  
  digitalWrite(cathode_pin, LOW);
  digitalWrite(anode_pin, HIGH);
  delay(10);
  digitalWrite(cathode_pin, HIGH);
  digitalWrite(anode_pin, LOW);
}
