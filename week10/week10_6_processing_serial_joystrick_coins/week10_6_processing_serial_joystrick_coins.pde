// week10_6_processing_serial_joystrick_coins
// 利用 USB Serial 傳 joystrick 的量 讓板子左右移動
import processing.serial.*;
Serial myPort;
void setup(){
  size(500, 500);
  myPort = new Serial(this, "COM4", 9600);
  rectMode(CENTER); // 四邊形正中心 當座標
}
int x = 250, y = 400, now;
float dx = 0; // 移動速度
void draw(){
  background(#FFFFA0);
  rect(x, y, 100, 20);
  if(myPort.available() > 0){
    now = myPort.read(); // 0 ~ 255
    dx = (now-128)/10.0; // -128 ~ +127
    if(abs(dx)<0.2) dx = 0;
    println(dx);
  }
  x += dx;
}
