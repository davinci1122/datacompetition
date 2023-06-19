#include <Servo.h>

Servo rasen;
int rotateClockwiseButtonPin = 2;   // 時計回り回転ボタンのピン番号
int rotateCounterClockwiseButtonPin = 3;    // 反時計回り回転ボタンのピン番号

int rotateClockwiseButtonState = 0; // 時計回り回転ボタンの状態を保持する変数
int rotateCounterClockwiseButtonState = 0;  // 反時計回り回転ボタンの状態を保持する変数

void setup() {
  rasen.attach(9);    // サーボモータをピン9に接続
  pinMode(rotateClockwiseButtonPin, INPUT_PULLUP);  // 時計回り回転ボタンピンを入力に設定 (プルアップ抵抗を有効化)
  pinMode(rotateCounterClockwiseButtonPin, INPUT_PULLUP);   // 反時計回り回転ボタンピンを入力に設定 (プルアップ抵抗を有効化)
}

void loop() {
  // 時計回り回転ボタンの状態を読み取る
  rotateClockwiseButtonState = digitalRead(rotateClockwiseButtonPin);

  // 反時計回り回転ボタンの状態を読み取る
  rotateCounterClockwiseButtonState = digitalRead(rotateCounterClockwiseButtonPin);

  // ボタンが押されていない場合は停止
  if (rotateClockwiseButtonState == HIGH) {
    rasen.write(90);  // サーボモータを停止させる
    delay(100);  // ボタンの反応を安定
  }
  // 時計回り回転ボタンが押された場合
  if (rotateClockwiseButtonState == LOW) {
    rasen.write(50);  // サーボモータを時計回りに設定 (サーボモータに応じて値を調整)
    delay(50);  // ボタンの反応を安定化させるために遅延を追加
  }

  // 反時計回り回転ボタンが押された場合
  if (rotateCounterClockwiseButtonState == LOW) {
    rasen.write(130);  // サーボモータを反時計回りに設定 (サーボモータに応じて値を調整)
    delay(50);  // ボタンの反応を安定化させるために遅延を追加
  }
}
