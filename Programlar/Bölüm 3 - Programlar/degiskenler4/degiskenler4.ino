/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 
 Bölüm 3 - Arduino Programlama Dili 
 Değişkenlerin Kullanımına Örnek - 4

 Karakter değişkenleri ile  seriport 
 üzerinden “ARDUINO” yazdıran program
 ***************************************************************/
 
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
  delay(200);
  Serial.print(karakterR);
  delay(200);
  Serial.print(karakterD);
  delay(200);
  Serial.print(karakterU);
  delay(200);
  Serial.print(karakterI);
  delay(200);
  Serial.print(karakterN);
  delay(200);
  Serial.println(karakterO);
  delay(200);
}

