const int anode_pin = 2;    // アノードに接続するArduinoのピン
const int cathode_pin = 13; // カソードに接続するArduinoのピン

// setup()　は，最初に一度だけ実行される
void setup() {
  pinMode(anode_pin, OUTPUT);    // anode_pinを出力モードに設定する
  pinMode(cathode_pin, OUTPUT);  // cathode_pinを出力モードに設定する
}

// loop() は，setup ()実行後，無限に実行される
void loop() {
  digitalWrite(cathode_pin, LOW);  // cathode_pinにLOWを出力する
  digitalWrite(anode_pin, HIGH);   // anode_pinにHIGHを出力する
}
