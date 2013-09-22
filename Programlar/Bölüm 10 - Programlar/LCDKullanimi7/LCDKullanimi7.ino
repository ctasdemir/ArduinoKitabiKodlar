/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 10 - LCD Kullanımı
 
 LCD Ekran Kullanımı - Örnek 7
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
/* Seriporttan gelen karakterler alınarak string'e çevriliyor
   eğer satır sonu karakteri (\n) alındıysa o ana kadar
   alınmış veriler LCD'de görüntüleniyor
 */
 gelenKarakterSayisi = Serial.available();
 if(gelenKarakterSayisi  >0 )
 {
  while(Serial.available()>0)
  {
    gelenKarakter = Serial.read();
    
    if(gelenKarakter !='\n')
    {
      yazi +=gelenKarakter;
    }
    else
    {
       kaydirilacakYazi = yazi;
       lcd.clear();  
       lcd.print(yazi);  
       yazi = "";       
    }
  }
 }
 YaziKaydir(kaydirilacakYazi);
}

/* 
  YaziKaydir fonksiyonu
  String olarak verilen verileri ekranda sağa doğru
  kaydırarak görüntüler
*/
void YaziKaydir(String yazi)
{
  int sayac;
   for (sayac = 0; sayac < 13; sayac++) {
    //her seferine ekranı sağa kaydır    
    lcd.scrollDisplayRight(); 
   //kaydırmalar arası gecikme
    delay(150);
  }
}

