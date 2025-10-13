// week06_1_sound_library_SoundFile_play
// File-Preference 字形改大一點
// Sketch-Library-ManageLibrary 找 Sound 安裝
// File-Examples核心函式-Sound-SoundFile-simplePlayback
// 參考 這個範例有聲音 有相關的函式可學習參考
import processing.sound.*; // 使用聲音的外掛模組
SoundFile sound; // 宣告 SoundFile 物件變數
void setup(){
  size(500, 400); // 視窗大小
  sound = new SoundFile(this, "music.mp3");
  sound.play();
}
void draw(){
  
}
