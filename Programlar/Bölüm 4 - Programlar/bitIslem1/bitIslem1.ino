/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
  
 Bölüm 4 - Matematiksel İşlemler
 Bit işlem örnekleri
 bitset() ve bitclear() fonksiyonlarının
 kullanımı
***************************************************************/

void setup()
{
 Serial.begin(9600); 
}

void loop()
{
  byte baytDegisken = 97;
  Serial.println("1 baytlik degisken:");
  Serial.print("10'luk tabanda:");
  Serial.println(baytDegisken,DEC);
  Serial.print("2'lik tabanda:");
  Serial.println(baytDegisken,BIN);
  //
  bitSet(baytDegisken,4);
  Serial.print("5. bit 1 yapıldı:");
  Serial.println(baytDegisken,BIN);
  bitClear(baytDegisken,0);
  Serial.print("1. bit sıfırlandı:");
  Serial.println(baytDegisken,BIN);

  // Programı burada kilitliyoruz
  while(1);
}

