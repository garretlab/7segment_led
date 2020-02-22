const int anode_pins[] = {12, 8, 5, 3, 2, 11, 6, 4};    // アノードに接続するArduinoのピン
const int cathode_pins[] = {7, 9, 10, 13};  // カソードに接続するArduinoのピン
const int number_of_anode_pins = sizeof(anode_pins) / sizeof(anode_pins[0]);
const int number_of_cathode_pins = sizeof(cathode_pins) / sizeof(cathode_pins[0]);

// 各桁で点灯するセグメント。右の桁から。
const int turn_on_pins[] = {3, 12, 11, 2};

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
  for (int i = 0; i < number_of_cathode_pins; i++) {
    digitalWrite(cathode_pins[i], LOW);  // 表示桁を選択
    digitalWrite(turn_on_pins[i], HIGH); // 表示するセグメントのアノードをHIGHにする
    delay(3);  // 明るさ調整用。点滅しない程度に。
    digitalWrite(turn_on_pins[i], LOW); // アノードをすべてLOWにする
    digitalWrite(cathode_pins[i], HIGH); // 選択したカソードをHIGHにする
  }
}
