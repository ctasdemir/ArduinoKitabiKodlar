/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 Bölüm 3 - Arduino Programlama Dili 
 Değişkenlerin kullanımına örnek – 10
 
 Değişkenlerin tanım ömürleri

****************************************************************/
//Global değişkenlerin tanım alanı
int globalA;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
 fonksiyon1();
 delay(1000);
}

void fonksiyon1()
{
  int lokalB;
  static int sayac = 0;
  Serial.print("sayac degiskeninin fonksiyon basindaki degeri:");
  Serial.println(sayac);
  Serial.print("globalA degiskeninin degeri:");
  Serial.println(globalA);
  Serial.print("lokalB degiskeninin fonksiyon basindaki degeri:");
  Serial.println(lokalB);
  lokalB = 5;
  Serial.print("lokalB degiskeninin atama sonrasi degeri:");
  Serial.println(lokalB);
  sayac = sayac + 1;
  globalA = globalA + 1;
}

