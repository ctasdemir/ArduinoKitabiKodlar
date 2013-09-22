/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
  
 Bölüm 3 - Arduino Programlama Dili 
 Değişkenlerin kullanımına örnek – 9
 
 Değişkenlerin tanım alanları (scope)

****************************************************************/
//Global değişkenlerin tanım alanı
int a;
float b;
char c;

void setup()
{
  //setup() fonksiyonu yerel değişkenleri tanım alanı
  byte d;
  int e;
  float f;
  
  Serial.begin(9600);
}
void loop()
{
 // loop() fonksiyonu yerel değişkenleri tanım alanı
 int g;
 byte h;
 
}

