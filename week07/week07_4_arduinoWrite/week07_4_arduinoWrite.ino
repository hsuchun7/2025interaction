// week07_4_arduinoWrite
void setup() {
  pinMode(11, OUTPUT); // 第11個pin腳(有PWM功能，可0-255輸出)
} // 這些特別的腳 分別是 第3 第5 第6 第9 第10 第11 共6個 都可控制它亮暗的程度

int a=0;
void loop() {
  analogWrite(11, a); // 亮的程度 是 a 的值
  a = (a+1) % 256; // 會再亮一點
  delay(10);// 每 0.01秒
}
