// week06_2_Example_Analyze_AudioWaveform

import processing.sound.*;

SoundFile sample; // 宣告 SoundFile 物件變數
Waveform waveform; // 宣告 WaveFile 物件變數

int samples = 100; // 一次讀入多少 sample: 100 個 sample

public void setup() {
  size(640, 360);
  // background(255); //可以註解掉

  // Load and play a soundfile and loop it.
  sample = new SoundFile(this, "beat.aiff"); // 讀入檔案
  sample.loop(); // 播放循環 vs. 之前 .play() 只放一次

  // Create the Waveform analyzer and connect the playing soundfile to it.
  waveform = new Waveform(this, samples); // 100格 來分析音樂
  waveform.input(sample); // 剛剛的音樂檔 進行分析
}

public void draw() {
  // Set background color, noFill and stroke style
  background(0);
  stroke(255);
  strokeWeight(2);
  noFill();

  waveform.analyze(); //進行波形的分析
  
  beginShape();
  for(int i = 0; i < samples; i++){ // 把這一百格的座標 算出來
    // Draw current data of the waveform
    // Each sample in the data array is between -1 and +1 
    vertex(
      map(i, 0, samples, 0, width), // X座標 對應0...100的值 拉長到視窗的長度 640
      map(waveform.data[i], -1, 1, 0, height) // y座標 就是 waveform.data[i] 的值
    );
  }
  endShape();
}
