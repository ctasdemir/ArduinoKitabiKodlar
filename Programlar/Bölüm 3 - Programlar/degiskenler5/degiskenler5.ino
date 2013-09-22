/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 Bölüm 3 - Arduino Programlama Dili 
 Değişkenlerin Kullanımına Örnek - 5
 
 Sabit değişken kullanımı
****************************************************************/
const int LEDpini = 9;
const int butonPini = 8;
void setup()
{
  Serial.begin(9600);
  pinMode(LEDpini, OUTPUT);
  pinMode(butonPini, INPUT);     
}
void loop()
{
  // derleyicinin hata vereceği kod
  LEDpini = 12;
  

  delay(100);
}

