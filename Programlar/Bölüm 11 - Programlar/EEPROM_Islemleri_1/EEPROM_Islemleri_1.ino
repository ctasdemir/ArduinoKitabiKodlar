/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
  Bölüm 11 - Kalıcı Hafıza Kullanımı 
  
  EEPROM İşlemleri - Örnek 1 
  EEPROM Write Fonksiyonu
  Serial Monitor üzerinden gönderilen karakterler EEPROM
  belleğe kaydediyor. Başka bir programda yazılan değerler
  okunabilir.
 ****************************************************************/
#include <EEPROM.h>

// EEPROM'da kayıt yapılacak bellek gözünün adresini tutan değişken
int addr = 0;
// EEPROM'a kaydedilecek olan karakteri tutan değişken
char kar = 0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
 if(Serial.available() > 0)
 {
   kar = Serial.read();
   EEPROM.write(addr,kar);
   Serial.print("Karakter kaydedildi:");
   Serial.println(kar);
   addr++; // Yeni bellek gözüne geç
 }
}

