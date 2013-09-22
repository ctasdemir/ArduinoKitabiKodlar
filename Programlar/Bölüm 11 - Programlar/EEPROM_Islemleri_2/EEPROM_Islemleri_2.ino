/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
  Bölüm 11 - Kalıcı Hafıza Kullanımı 
  
  EEPROM İşlemleri - Örnek 2
  EEPROM Read fonksiyonu
  EEPROM bellekteki verileri okuyarak bilgisaraya gönderir
 ****************************************************************/
 
#include <EEPROM.h>
// EEPROM'un 0 nolu bellek gözünden itibaren okumaya başla
int adres = 0;
// EEPROM'dan okunan karakteri tutan değişken
char kar;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // EEPROM'da şu anki adreste bulunan karakteri oku
  kar = EEPROM.read(adres);
  Serial.print(adres);
  Serial.print("\t"); // TAB işareti ekle
  Serial.print(kar);
  Serial.print("\t"); // TAB işareti ekle
  Serial.print("Desimal:");
  Serial.println(byte(kar));

  // Bir sonraki adrese geç
  adres++; 
  // EEPROM'un boyutu 1024 bayt
  if (adres == 1024)
    adres = 0;
  delay(500);
}

