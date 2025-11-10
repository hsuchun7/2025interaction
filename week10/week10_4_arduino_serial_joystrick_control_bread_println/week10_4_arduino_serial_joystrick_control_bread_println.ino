// week10_4_arduino_serial_joystrick_control_bread_println
// 修改自 week10_3_arduino_analogRead_A3
// 把 joystrick 的 Y線，經由麵包板 接到 MakerUNO pin 3
// 不能接其他的 要接右~小蟲 代表 analog 符號
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(8, OUTPUT); // 出聲
}

void loop() { // 1sec, run 1000Hz 
  delay(100); // slowly, avoid processing can't handle
  int now = analogRead(A3);
  Serial.println(now);
  // 想利用 Serial Monitor 來看看會送出甚麼符號

  if(now > 800){ // high
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
