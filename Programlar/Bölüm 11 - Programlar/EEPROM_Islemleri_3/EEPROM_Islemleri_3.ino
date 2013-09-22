/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 11 - Kalıcı Hafıza Kullanımı 
  
 EEPROM İşlemleri - Örnek 3 
 EEPROM'a int değişken kaydetme ve okuma
 Int değişkeni iki bayta (düşük ve yüksek) ayrılarak
 EEPROM’a kaydediliyor.
 
 ****************************************************************/
#include <EEPROM.h>
// EEPROM'da kayıt yapılacak bellek gözünün adresini tutan değişken
int addr = 0;
// EEPROM'a kaydedilecek olan değişken tutan değişken
int sayi = 0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
   EEPROMaIntYaz(0,1111);
   EEPROMaIntYaz(2,2222);
   EEPROMaIntYaz(4,3456);
   EEPROMaIntYaz(6,9876);
   Serial.println(EEPROMdanIntOku(0));
   Serial.println(EEPROMdanIntOku(2));
   Serial.println(EEPROMdanIntOku(4));
   Serial.println(EEPROMdanIntOku(6));
   //Programı burada kilitliyoruz
   while(1);
}
/* EEPROM’a int kaydeden fonksiyon
  int değeri iki bayta ayrılarak EEPROM’a kaydediliyor
  düşük Bayt => Adres gözüne
  yüksek Bayt => Adres + 1 gözüne kaydediliyor 
*/
void EEPROMaIntYaz(int adres, int yazilacakSayi)
{
  byte dusukBayt = lowByte(yazilacakSayi);
  byte yuksekBayt = highByte(yazilacakSayi);

  EEPROM.write(adres,dusukBayt);
  EEPROM.write(adres+1,yuksekBayt);   
}
/* EEPROM’dan int okuyan fonksiyon
  int değeri EEPROM’dan okunan iki 
  bayttan oluşturuluyor
  düşük Bayt => Adres gözünden
  yüksek Bayt => Adres + 1 gözünden okunuyor */
int EEPROMdanIntOku(int adres)
{
  int dusukBayt = EEPROM.read(adres);
  int yuksekBayt = EEPROM.read(adres+1);
  int sayi = dusukBayt + (yuksekBayt<<8);
  return sayi;
}

