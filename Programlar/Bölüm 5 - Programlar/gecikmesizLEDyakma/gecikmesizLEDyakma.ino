/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 
 Bölüm 5 - Kontrol Yapıları ve Fonksiyonlar
 
 delay() fonksiyonu kullanmadan LED yakıp söndürme örneği
 Arduino UNO kartı üzerindeki 13 nolu dijital pine
 bağlı olan LED yanmaAraligi değiskeniyle belirlenen
 sıklıkta yakıp söndürülüyor.
 Bu işlem gecikme fonksiyonları yerine millis() fonksiyonu
 ile gerçekleştiriliyor
   
  NOT:
  Bu örneği 
  Arduino Examples menüsündeki BlinkWithoutDelay programı olarak
  bulabilirsiniz.
****************************************************************/

const int ledPini =  13;  // LED pini

// LED'in durumunu gösteren değişken
int ledDurumu = LOW; 
 // LED durumunun değiştirildiği en son zamanı tutan değişken
long oncekiZamanDegeri = 0; 

long yanmaAraligi = 1000; // ms cinsinden LED'in yanıp sönme sıklığı

void setup() {
  pinMode(ledPini, OUTPUT);      
}

void loop()
{
  unsigned long zamanDegeri = millis();
 
  if(zamanDegeri - oncekiZamanDegeri > yanmaAraligi) {
    //Su anki zamanı bir  sonraki çevrim için kaydediyoruz
    oncekiZamanDegeri = zamanDegeri;   

    // LED'in durumunu değiştiriyoruz
    if (ledDurumu == LOW)
      ledDurumu = HIGH;
    else
      ledDurumu = LOW;
    // LED durumunu güncelle
    digitalWrite(ledPini, ledDurumu);
  }
}
