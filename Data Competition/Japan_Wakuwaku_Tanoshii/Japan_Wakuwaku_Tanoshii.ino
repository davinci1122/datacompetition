//L298Nデュアルモータドライバを用いたDCモータ制御
// デジタルピンの定義
const int IN1 = 9;
const int IN2 = 8;
const int IN3 = 7;
const int IN4 = 6;
const int ENA = 10;  // PWM制御で使うENAピンをD9に(モーター1のPWM制御ピン)
const int ENB = 5;   // PWM制御で使うENBピンをD10に(モーター2のPWM制御ピン)
void setup() {
  pinMode(IN1, OUTPUT);  // デジタルピンを出力に設定
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
}
void loop() {
  digitalWrite(IN1, HIGH);  // HIGH LOWの組み合わせでモーター回転
  digitalWrite(IN2, LOW);   // 2つのモーターを正回転
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  
  int i;

  //モータの回転数を徐々に上げることで電圧の急激な印加を防げたら良いなと思ってるけど、効果があるのかは知らん
  for (i = 0; 0 < i < 150; i++) {
    analogWrite(ENA, i);
    analogWrite(ENB, i);
    delay(30);
  }

  //わくわくたのしい
  analogWrite(ENA, 113);
  analogWrite(ENA, 159);
  delay(1000);
  analogWrite(ENA, 116);
  analogWrite(ENA, 155);
  delay(1000);
  analogWrite(ENA, 115);
  analogWrite(ENA, 159);
  delay(1000);
  analogWrite(ENA, 116);
  analogWrite(ENA, 161);
  delay(1000);
  analogWrite(ENA, 121);
  analogWrite(ENA, 159);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 154);
  delay(1000);
  analogWrite(ENA, 117);
  analogWrite(ENA, 153);
  delay(1000);
  analogWrite(ENA, 120);
  analogWrite(ENA, 158);
  delay(1000);
  analogWrite(ENA, 144);
  analogWrite(ENA, 180);
  delay(1000);
  analogWrite(ENA, 132);
  analogWrite(ENA, 167);
  delay(1000);
  analogWrite(ENA, 134);
  analogWrite(ENA, 183);
  delay(1000);
  analogWrite(ENA, 114);
  analogWrite(ENA, 155);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 155);
  delay(1000);
  analogWrite(ENA, 115);
  analogWrite(ENA, 155);
  delay(1000);
  analogWrite(ENA, 117);
  analogWrite(ENA, 158);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 158);
  delay(1000);
  analogWrite(ENA, 120);
  analogWrite(ENA, 171);
  delay(1000);
  analogWrite(ENA, 116);
  analogWrite(ENA, 165);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 163);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 166);
  delay(1000);
  analogWrite(ENA, 120);
  analogWrite(ENA, 171);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 161);
  delay(1000);
  analogWrite(ENA, 126);
  analogWrite(ENA, 176);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 165);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 173);
  delay(1000);
  analogWrite(ENA, 123);
  analogWrite(ENA, 174);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 173);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 168);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 171);
  delay(1000);
  analogWrite(ENA, 117);
  analogWrite(ENA, 160);
  delay(1000);
  analogWrite(ENA, 123);
  analogWrite(ENA, 209);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 171);
  delay(1000);
  analogWrite(ENA, 111);
  analogWrite(ENA, 151);
  delay(1000);
  analogWrite(ENA, 112);
  analogWrite(ENA, 149);
  delay(1000);
  analogWrite(ENA, 112);
  analogWrite(ENA, 150);
  delay(1000);
  analogWrite(ENA, 122);
  analogWrite(ENA, 157);
  delay(1000);
  analogWrite(ENA, 132);
  analogWrite(ENA, 162);
  delay(1000);
  analogWrite(ENA, 121);
  analogWrite(ENA, 160);
  delay(1000);
  analogWrite(ENA, 113);
  analogWrite(ENA, 150);
  delay(1000);
  analogWrite(ENA, 114);
  analogWrite(ENA, 150);
  delay(1000);
  analogWrite(ENA, 113);
  analogWrite(ENA, 152);
  delay(1000);
  analogWrite(ENA, 120);
  analogWrite(ENA, 158);
  delay(1000);
  analogWrite(ENA, 124);
  analogWrite(ENA, 164);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 157);
  delay(1000);
  analogWrite(ENA, 121);
  analogWrite(ENA, 158);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 159);
  delay(1000);
  analogWrite(ENA, 117);
  analogWrite(ENA, 153);
  delay(1000);
  analogWrite(ENA, 126);
  analogWrite(ENA, 182);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 165);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 160);
  delay(1000);
  analogWrite(ENA, 113);
  analogWrite(ENA, 162);
  delay(1000);
  analogWrite(ENA, 116);
  analogWrite(ENA, 166);
  delay(1000);
  analogWrite(ENA, 120);
  analogWrite(ENA, 163);
  delay(1000);
  analogWrite(ENA, 122);
  analogWrite(ENA, 162);
  delay(1000);
  analogWrite(ENA, 117);
  analogWrite(ENA, 164);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 167);
  delay(1000);
  analogWrite(ENA, 117);
  analogWrite(ENA, 156);
  delay(1000);
  analogWrite(ENA, 112);
  analogWrite(ENA, 141);
  delay(1000);
  analogWrite(ENA, 115);
  analogWrite(ENA, 161);
  delay(1000);
  analogWrite(ENA, 114);
  analogWrite(ENA, 155);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 158);
  delay(1000);
  analogWrite(ENA, 122);
  analogWrite(ENA, 160);
  delay(1000);
  analogWrite(ENA, 120);
  analogWrite(ENA, 176);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 163);
  delay(1000);
  analogWrite(ENA, 116);
  analogWrite(ENA, 158);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 152);
  delay(1000);
  analogWrite(ENA, 117);
  analogWrite(ENA, 157);
  delay(1000);
  analogWrite(ENA, 121);
  analogWrite(ENA, 166);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 164);
  delay(1000);
  analogWrite(ENA, 120);
  analogWrite(ENA, 161);
  delay(1000);
  analogWrite(ENA, 123);
  analogWrite(ENA, 175);
  delay(1000);
  analogWrite(ENA, 123);
  analogWrite(ENA, 166);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 160);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 155);
  delay(1000);
  analogWrite(ENA, 124);
  analogWrite(ENA, 174);
  delay(1000);
  analogWrite(ENA, 120);
  analogWrite(ENA, 165);
  delay(1000);
  analogWrite(ENA, 128);
  analogWrite(ENA, 172);
  delay(1000);
  analogWrite(ENA, 130);
  analogWrite(ENA, 174);
  delay(1000);
  analogWrite(ENA, 144);
  analogWrite(ENA, 175);
  delay(1000);
  analogWrite(ENA, 125);
  analogWrite(ENA, 171);
  delay(1000);
  analogWrite(ENA, 120);
  analogWrite(ENA, 165);
  delay(1000);
  analogWrite(ENA, 124);
  analogWrite(ENA, 204);
  delay(1000);
  analogWrite(ENA, 123);
  analogWrite(ENA, 175);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 157);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 154);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 158);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 161);
  delay(1000);
  analogWrite(ENA, 118);
  analogWrite(ENA, 161);
  delay(1000);
  analogWrite(ENA, 117);
  analogWrite(ENA, 162);
  delay(1000);
  analogWrite(ENA, 123);
  analogWrite(ENA, 167);
  delay(1000);
  analogWrite(ENA, 125);
  analogWrite(ENA, 176);
  delay(1000);
  analogWrite(ENA, 132);
  analogWrite(ENA, 171);
  delay(1000);
  analogWrite(ENA, 153);
  analogWrite(ENA, 194);
  delay(1000);
  analogWrite(ENA, 131);
  analogWrite(ENA, 186);
  delay(1000);
  analogWrite(ENA, 124);
  analogWrite(ENA, 173);
  delay(1000);
  analogWrite(ENA, 122);
  analogWrite(ENA, 169);
  delay(1000);
  analogWrite(ENA, 119);
  analogWrite(ENA, 164);
  delay(1000);
}