/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 10 - LCD Kullanımı
 
 LCD Ekran Kullanımı - Örnek 9
 LCD üzerinde özel karakterler görüntüleme
 Görüntülemek istediğimiz karaktere ait 
 8x5 piksel değerlerini dizilerle tanımlayıp
 createChar() fonksiyonu ile LCD'ye yüklüyoruz
 7 adet özel karakter LCD'ye yüklenebilmektedir.
****************************************************************/

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte gulenSurat[8] = {B00000,
                    B01010,
                    B00000,
                    B10001,
                    B01110,
                    B00000,
                    B00000,
                    B00000};

byte uzgunSurat[8] = {B00000,
                    B01010,
                    B00000,
                    B01110,
                    B10001,
                    B00000,
                    B00000,
                    B00000};
byte kalp[8] = { B00000,
                 B01010,
                 B11111,
                 B11111,
                 B11111,
                 B01110,
                 B00100,
                 B00000};

byte okisaretleri[8] = { B00100,
                         B01110,
                         B11111,
                         B00000,
                         B00000,
                         B11111,
                         B01110,
                         B00100};
                         

void setup() {
  lcd.begin(16,2);
  lcd.createChar(0, gulenSurat);
  lcd.createChar(1, uzgunSurat);
  lcd.createChar(2, kalp);
  lcd.createChar(3, okisaretleri);
  
  lcd.clear();
  lcd.home();
  lcd.setCursor(0,0);
  lcd.write(byte(2));
  lcd.setCursor(1,0);
  lcd.write(byte(3));

}
void loop() {
  delay(1000);
  lcd.setCursor(2,0);
  lcd.write(byte(0));
  delay(1000);
  lcd.setCursor(2,0);
  lcd.write(byte(1));
}


