/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 Bölüm 10 - LCD Kullanımı
 
 LCD Ekran Kullanımı - Örnek 8
 Serial Monitor'den gönderilen verileri
 LCD ekran üzerinde görüntüleme örneği

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

#include <LiquidCrystal.h>
//Değişkenleri tanımlıyoruz
char gelenKarakter;
int gelenKarakterSayisi;
int i;
String yazi = "";
String kaydirilacakYazi = "";
// LCD bağlantılarımızı ile LCD'yi başlatıyoruz
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
  Serial.begin(9600); //Seri haberleşmeyi başlat (9600 bps)
  // LCD’mizin başlangıç ayarı 16 karakter x 2 satır
  lcd.begin(16, 2);
  lcd.home();
 }
 
void loop()
{
lcd.write((B01111110));
 delay(1000);

}


