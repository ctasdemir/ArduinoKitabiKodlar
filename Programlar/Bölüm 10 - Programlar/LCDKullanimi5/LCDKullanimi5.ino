/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 10 - LCD Kullanımı
 
 LCD Ekran Kullanımı - Örnek 5
 
 LCD ekran Üzerindeki yazıları kaydırma
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

// LCD kütüphanesini programımıza ekliyoruz:
  #include <LiquidCrystal.h>
//LCD bağlantılarımız ile bir LCD nesnesi oluşturuyoruz.
/*
  LCD Ekran Sürme
 
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
*/
// LCD kütüphanesini programımıza ekliyoruz:
#include <LiquidCrystal.h>
// LCD bağlantılarımızı ile LCD'yi başlatıyoruz
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // LCD’mizin başlangıç ayarı 16 karakter x 2 satır
  lcd.begin(16, 2);
  lcd.print("ARDUINO!");
 //İmleci 2. satırın başına alıyoruz
  lcd.setCursor(0, 1);
  lcd.print("PROGRAMLAMA");
}
void loop() {
  int i = 0;
 //Ekranı 16 kere sağa kaydırıyoruz
  for(i=0;i<16;i++){ 
  lcd.scrollDisplayRight();
  delay(200);
  }
//Ekranı 16 kere sola kaydırıyoruz
  for(i=0;i<16;i++){ 
  lcd.scrollDisplayLeft();
  delay(200);
  }
}

