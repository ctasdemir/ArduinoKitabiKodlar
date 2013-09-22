/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 
 Bölüm 5 - Kontrol Yapıları ve Fonksiyonlar
 
 for kullanımı örneği
 for döngüsü ile 0'dan 10'a kadar sayılar yazdırılıyor.
****************************************************************/

void setup() {
  

}

void loop() {
// for döngüsü ile a değişkenine 0’dan 10’a kadar değerler atanıyor. (Döngü 10 kez çalıştırılıyor)
int a;
for(a = 0; a < 10; a++)
{
    Serial.println("Sayac:");
    Serial.print(a);
    delay(500);
}


  
}
