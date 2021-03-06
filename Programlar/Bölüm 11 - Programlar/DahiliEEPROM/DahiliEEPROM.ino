/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 11 - Kalıcı Hafıza Kullanımı 
 
  Dahili EEPROM kullanımı
  Serial Monitor'den gönderilen veriler
 LCD ekran üzerinde görüntüleniyor.
 Gönderilen veriler dahili EEPROM'a
 kaydediliyor
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
 ***************************************************************/

#include <LiquidCrystal.h> //LCD kütüphanesi
#include <EEPROM.h>

//Değişkenleri tanımlıyoruz
char gelenKarakter; // Serial Monitorden gelen karakter
int gelenKarakterSayisi;
String yazi = "";
String baslangicYazi = "";
// LCD bağlantılarımızı ile LCD'yi başlatıyoruz
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  Serial.begin(9600); //Seri haberleşmeyi başlat (9600 bps)
  // LCD’mizin başlangıç ayarı 16 karakter x 2 satır
  lcd.begin(16, 2);
  lcd.home();
  // Program başladığında EEPROM'a daha önceden kaydedilmiş olan
  // string okunur ve LCD'de görüntülenir.
  baslangicYazi = EEPROMdan_String_Oku();
  lcd.print(baslangicYazi);
}
void loop()
{
  /* Seriporttan gelen karakterler alınarak string'e çevriliyor
   eğer satır sonu karakteri (\n) alındıysa o ana kadar
   alınmış veriler LCD'de görüntüleniyor
   */
  gelenKarakterSayisi = Serial.available();
  if(gelenKarakterSayisi  > 0 )
  {
    while(Serial.available()>0)
    {
      gelenKarakter = Serial.read();
      // Satır sonu karakteri (\n) gelene kadar gelen karakterleri 
      // string'e ekliyoruz
      if(gelenKarakter !='\n')
      {
        yazi +=gelenKarakter;
      }
      else
      {
        // Satır sonu geldi artık LCD'ye yazdırmaya geçebiliriz.
        lcd.clear();  
        lcd.print(yazi);  
        EEPROMa_String_Yaz(yazi);
        yazi = "";       
      }
    }
  }
  YaziKaydir();
}
/* 
 YaziKaydir fonksiyonu
 String olarak verilen verileri ekranda sağa doğru
 kaydırarak görüntüler
 */
void YaziKaydir()
{
  for (int i = 0; i < 16; i++) {
    //her seferine ekranı sola kaydır    
    lcd.scrollDisplayLeft(); 
    //kaydırmalar arası gecikme
    delay(150);
  }
}
/* EEPROM'dan String Okuma fonksiyonu
 EEPROM'un 0. gözünden string uzunluğu okunur.
 Sonra string uzunluğu kadar karakter okunarak
 String oluşturulur ve bu string döndürülür.
 */
String EEPROMdan_String_Oku(){
  byte bayt1;
  char karakter;
  String baslangicYazisi = "";
  bayt1 = EEPROM.read(0);

  for(int i = 1; i<(bayt1+1);i++)
  {
    karakter = (char)EEPROM.read(i);
    baslangicYazisi = baslangicYazisi + karakter;
  } 
  return baslangicYazisi;  
}
/* EEPROM'a String Yazma fonksiyonu
 Verilen strin'i EEPROM'a yazar.
 0. göze String boyutu yazılır. 
 */
void EEPROMa_String_Yaz(String EEPROMString)
{
  EEPROM.write(0,EEPROMString.length());
  for(int i = 0; i<EEPROMString.length();i++){
    EEPROM.write(i+1,EEPROMString.charAt(i));
    delay(5); // EEPROM Yazma işleminin tamamlanması için 5 ms bekleme
  }
} 


