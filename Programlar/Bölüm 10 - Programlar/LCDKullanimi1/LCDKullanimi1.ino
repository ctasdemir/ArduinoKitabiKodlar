/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 10 - LCD Kullanımı
 
  LCD Ekran Kullanımı - Örnek 1
  Arduino ile LCD ekran arasındaki bağlantılar
 * LCD RS     ==> digital-12
 * LCD Enable ==> digital-11
 * LCD D4     ==> digital-5
 * LCD D5     ==> digital-4
 * LCD D6     ==> digital-3
 * LCD D7     ==> digital-2
 * LCD R/W    ==> toprak (GND)
 * 10K potansiyometre 0-5V bağlantı:
 * orta ucu LCD'nin V0 pinine(pin 3)
****************************************************************/

// LCD kütüphenesini programÄ±mÄ±za ekliyoruz:
#include <LiquidCrystal.h>
// LCD bağlantılarımız ile LCD nesnesi yaratıyoruz
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  // LCD’miz 2x16 tipinde
  lcd.begin(16, 2);
}
void loop() {  
}

