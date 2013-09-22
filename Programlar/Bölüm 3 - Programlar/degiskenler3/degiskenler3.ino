/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 Bölüm 3 - Arduino Programlama Dili 
 
 Değişkenlerin Kullanımına Örnek - 3 
 Kayar Noktalı sayılarda karşılaştırma işlemi
 ****************************************************************/
float sayi = 1.9;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  sayi = sayi - 0.1; // her seferinde sayımızdan 0.1 çıkarıyoruz
  if( sayi == 0)
    {
      Serial.println("Sayı sıfıra eşit!");
    }
  Serial.println(sayi);
  delay(100);
}

