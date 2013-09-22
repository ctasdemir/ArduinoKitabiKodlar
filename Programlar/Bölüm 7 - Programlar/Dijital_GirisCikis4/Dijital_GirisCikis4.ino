/*********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 Dijital Giriş - Çıkış İşlemleri - Örnek 4
 Buton sıçramasını giderme örneği 
 
 Butona her basıldığında LED’in durumu değiştiriliyor.
 D12: Buton girişi
 D13: Led Çıkışı
 ********************************************************************/

const int butonPin = 12;     // buton pin numarası
const int ledPin =  13;      // LED pint numarası

// LED’in durumunu tutan değişken (1 – Yanıyor, 0 – yanmıyor)
int LEDDurumu = 0; 
// Okunan buton degerini tutan değişken (1 – buton basılı, 0 – basılı değil)
int okunanDurum = 0;

void setup() {
   pinMode(butonPin, INPUT);
   pinMode(ledPin, OUTPUT);
}
void loop() {
  // buton durumunu okuyup ilgili değişkene atıyoruz
  int OkunanDurum = ButonOku(butonPin);

  //okunanDurum değişkeninin değerine göre LED durumunu değiştiriyoruz
  if (okunanDurum == 1)
  {
    // LED sönükse yak
    if (LEDDurumu == 0)
    {
      digitalWrite(ledPin, HIGH);
      LEDDurumu = 1;
    }
    // LED yanıksa söndür
    else
    {
      digitalWrite(ledPin, LOW);
      LEDDurumu = 0;
    }
  } 
  
  delay(500);
}

/* 
   Buton okuma fonksiyonu 
   Butonun sönümlenmesi için buton okunduktan sonra gecikme koyuluyor
   ve butonun değeri yeniden okunuyor
*/
boolean ButonOku(int butonPin)
{
  int okunanDeger =  digitalRead(butonPin);
  delay(30);
  if (  okunanDeger == digitalRead(butonPin) )
  {
    return okunanDeger;  
  }
  else
  {
    return false;
  } 
}

