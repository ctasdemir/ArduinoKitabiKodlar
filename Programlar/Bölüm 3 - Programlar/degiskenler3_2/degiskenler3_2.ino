/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 
 Bölüm 3 - Arduino Programlama Dili 
 
  Değişkenlerin Kullanımına Örnek - 3.2 
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
   if( fabs(sayi) < 0.0001)
    {
      Serial.println("Sayi sifira cok yakin");
    }

  Serial.println(sayi);
  delay(100);
}

