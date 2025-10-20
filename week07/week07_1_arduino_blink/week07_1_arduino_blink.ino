// week07_1_arduino_blink
// 安裝好後，要選裝置管理員的 USB-Serial
// COM3 or VOM4 or COM5 選好後搜尋 Arduino uno 選他
void setup() {
  pinMode(13, OUTPUT); //把第13隻腳 能送出資料 output
}

void loop() {
  digitalWrite(13, HIGH); // 發亮
  delay(500);
  digitalWrite(13, LOW); // 暗掉
  delay(500);
}
