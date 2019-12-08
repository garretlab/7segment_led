const int anode_pins[] = {2, 3, 4, 5, 6, 8, 11, 12};    // アノードに接続するArduinoのピン
const int cathode_pin = 13;  // カソードに接続するArduinoのピン
const int number_of_anode_pins = sizeof(anode_pins) / sizeof(anode_pins[0]);

// setup()　は，最初に一度だけ実行される
void setup() {
  for (int i = 0; i < number_of_anode_pins; i++) {
    pinMode(anode_pins[i], OUTPUT);  // anode_pinsを出力モードに設定する
  }
  
  pinMode(cathode_pin, OUTPUT);  // cathode_pinを出力モードに設定する
}

// loop() は，setup ()実行後，無限に実行される
void loop() {
  int anode_pin = anode_pins[random(number_of_anode_pins)];  // 点灯するピンを選択する
  
  digitalWrite(cathode_pin, LOW);  // cathode_pinにLOWを出力する
  digitalWrite(anode_pin, HIGH);   // 選択したピンにHIGHを出力する
  delay(100);                      // 少し待つ
  digitalWrite(anode_pin, LOW);    // 選択したピンにLOWを出力する
}
