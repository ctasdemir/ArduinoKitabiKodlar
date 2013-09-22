/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 
 Bölüm 3 - Arduino Programlama Dili 
 Değişkenlerin Kullanımına Örnek - 6
 
 #define ifadesinin kullanımı 
 Seriport üzerinden “ARDUINO” yazdıran  program
 Bekleme süresi #define ile tanımlanıyor 
 ***************************************************************/
 
#define BEKLEME_SURESI 200 // ms
char karakterA = 'A';
char karakterR = 'R';
char karakterD = 'D';
char karakterU = 'U';
char karakterI = 'I';
char karakterN = 'N';
char karakterO = 'O';
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  Serial.print(karakterA);
  delay(BEKLEME_SURESI);
  Serial.print(karakterR);
  delay(BEKLEME_SURESI);
  Serial.print(karakterD);
  delay(BEKLEME_SURESI);
  Serial.print(karakterU);
  delay(BEKLEME_SURESI);
  Serial.print(karakterI);
  delay(BEKLEME_SURESI);
  Serial.print(karakterN);
  delay(BEKLEME_SURESI);
  Serial.println(karakterO);
  delay(BEKLEME_SURESI);
}

