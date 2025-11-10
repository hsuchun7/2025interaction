// week10_3_arduino_analogRead_A3
// 把 joystrick 的 Y線，經由麵包板 接到 MakerUNO pin 3
void setup() {
  pinMode(2, INPUT_PULLUP);
  //pinMode(3, INPUT); // 小蟲符號 代表 ANALOG 訊號
  pinMode(8, OUTPUT); // 出聲
}

void loop() {
  int now = analogRead(A3);
  if(now > 800){
    tone(8, 523, 100); // 523 的 DO
    delay(100);
    tone(8, 784, 100); // 784 的 SO
    delay(200);
  }else if(now < 200){ // 等久一點
      tone(8, 784, 100); // 784 的 SO
    delay(100);
    tone(8, 523, 100); // 523 的 DO
    delay(200);
  }
}
