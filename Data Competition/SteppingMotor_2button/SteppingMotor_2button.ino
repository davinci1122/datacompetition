#include <Stepper.h>

#define PIN1 2  // 青
#define PIN2 3  // ピンク
#define PIN3 4  // 黄
#define PIN4 5  // オレンジ

#define STEPS_PER_REVOLUTION 2048  // 1回転あたりのステップ数

Stepper stepper(STEPS_PER_REVOLUTION, PIN1, PIN3, PIN2, PIN4);

const int rotateButtonPin = 6;  // テーブル回転ボタンのピン番号
const int resetButtonPin = 7;   // 初期位置戻しボタンのピン番号

int currentPosition = 0;  // 現在の位置（ステップ数）
boolean rotateButtonState = false;
boolean resetButtonState = false;
boolean previousRotateButtonState = false;
boolean previousResetButtonState = false;

void setup() {
  stepper.setSpeed(10);  // 1分間当たりの回転数を設定(rpm)

  pinMode(rotateButtonPin, INPUT_PULLUP);
  pinMode(resetButtonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // ボタンの状態を読み取る
  rotateButtonState = digitalRead(rotateButtonPin);
  resetButtonState = digitalRead(resetButtonPin);

  // テーブル回転ボタンが押された場合
  if (rotateButtonState == LOW && previousRotateButtonState == HIGH) {
    while (rotateButtonState == LOW) {
      currentPosition += STEPS_PER_REVOLUTION / 36;  // 10度分のステップ数を加算（回転方向は時計回り）
      if (currentPosition >= STEPS_PER_REVOLUTION) {
        currentPosition -= STEPS_PER_REVOLUTION;
      }
      stepper.step(STEPS_PER_REVOLUTION / 36);  // 10度回転（ステップ数を計算して指定）
      Serial.println(currentPosition);
      delay(10);
      digitalWrite(PIN1, LOW);  // 出力を停止(モーターへの電流を止め発熱を防ぐ)
      digitalWrite(PIN2, LOW);
      digitalWrite(PIN3, LOW);
      digitalWrite(PIN4, LOW);
      rotateButtonState = digitalRead(rotateButtonPin);
    }
  }
/*
  // 初期位置戻しボタンが押された場合
  if (resetButtonState == LOW && previousResetButtonState == HIGH) {
    if (currentPosition != 0) {
      int stepsToReset = currentPosition;  // 現在位置までのステップ数
      currentPosition = 0;                 // 初期位置（0度）にリセット
      stepper.step(-stepsToReset);         // 初期位置まで反時計回りで戻る
      Serial.println(currentPosition);
      digitalWrite(PIN1, LOW);  // 出力を停止(モーターへの電流を止め発熱を防ぐ)
      digitalWrite(PIN2, LOW);
      digitalWrite(PIN3, LOW);
      digitalWrite(PIN4, LOW);
    }
  }
*/
  previousRotateButtonState = rotateButtonState;
  previousResetButtonState = resetButtonState;
}
