/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 10 - LCD Kullanımı
 
 LCD Ekran Kullanımı - Örnek 10
 LCD ekran üzerinde giriş gerilimlerini görüntüleme
 ve kutucuklar içerisinde seviyeyi gösterme uygulaması
 Analog0 ve analog1 giriş gerilimleri hem Volt cinsinden LCD
 üzerinde gösteriliyor hem de kutucuk içerisinde seviyesi görüntüleniyor.
   
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
 
 analog0 ve analog1 girişlerine potansiyometrelerin
 orta uçları bağlı.
 
 ****************************************************************/

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte basamak[7][8] = {{B00000, B00000, B00000, B00000, B00000,B00000, B11111,B11111},
                      {B00000, B00000, B00000, B00000, B00000,B11111, B11111,B11111},
                      {B00000, B00000, B00000, B00000, B11111,B11111, B11111,B11111},
                      {B00000, B00000, B00000, B11111, B11111,B11111, B11111,B11111},
                      {B00000, B00000, B11111, B11111, B11111,B11111, B11111,B11111},
                      {B00000, B11111, B11111, B11111, B11111,B11111, B11111,B11111},
                      {B11111, B11111, B11111, B11111, B11111,B11111, B11111,B11111}};
int i;
int analogGiris1;
int analogGiris2;
float gerilim1;
float gerilim2;
void setup() {
  lcd.begin(16,2); 
  for(i = 0; i<7;i++){
      lcd.createChar(i,basamak[i]);
  }  
  lcd.clear();
  lcd.home();

}

void loop() {
   
  analogGiris1 = analogRead(0);
  analogGiris2 = analogRead(1);
  
  gerilim1 = (analogGiris1 / 1023.0) * 5.0;
  gerilim2 = (analogGiris2 / 1023.0) * 5.0;
  
  analogGiris1 = map(analogGiris1,0,1023,1,7);
  analogGiris2 = map(analogGiris2,0,1023,1,7);
  
  gosterge(0,analogGiris1);
  gosterge(1,analogGiris2);

  lcd.setCursor(1,0);
  lcd.print(" Giris-1:");
  lcd.print(gerilim1);
  lcd.print("V");
  lcd.setCursor(1,1);
  lcd.print(" Giris-2:");
  lcd.print(gerilim2);
  lcd.print("V");

}


void gosterge(int satir,int giris)
{
  lcd.setCursor(0,satir);
  lcd.write(byte(giris-1));
}



