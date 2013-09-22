/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 10 - LCD Kullanımı
 
 LCD Ekran Kullanımı - Örnek 6
  
 LM35 sensörü ile sıcaklık ölçümü ve 
 LCD ekranda görüntüleme 
 Bu sensör derece başına 10 mV çıkış verir.
 20 ºC => için 20 * 10 mV = 200 mV
 LM35 çıkışı analog 0 girişine bağlı.
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
float sicaklik;
float gerilim;
int sicaklikPin = 0;

// LCD bağlantılarımızı ile LCD'yi başlatıyoruz
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
  Serial.begin(9600); //Seri haberleşmeyi başlat (9600 bps)
  // LCD’mizin başlangıç ayarı 16 karakter x 2 satır
  lcd.begin(16, 2);
}
void loop()
{
  gerilim = analogRead(sicaklikPin);              // Sensörden gelen değeri oku
  gerilim = (gerilim / 1023) * 5000; // mV cinsinden gerilimi buluyoruz
  sicaklik = gerilim / 10.0; // Gerilim değerini sıcaklığa çeviriyoruz

  lcd.setCursor(0,0);
  lcd.print("Sicaklik:");
  lcd.setCursor(0,1);
  lcd.print(sicaklik);  
  delay(1000);                                 //Saniyede bir ölçüm gönderiyoruz
}



