/**********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Dijital Giriş - Çıkış İşlemleri - Örnek 2
 LED'lerle Karaşimşek Efekti
 
 Bağlantılar:
 Dijital - 8,9,10,11,12,13 pinleri LED'lerin anot uçlarına
 bağlı.
 LED'ler'in katot uçları 470 ohm'luk dirençler ile
 toprağa bağlı (GND) 
 ***********************************************************************/


/*
   Karaşimşek Efekti
   
*/
const int ledPinleri[] = {8, 9, 10, 11, 12, 13};
const int beklemeSuresi = 30; // ms cinsinden bekleme süresi

void setup(){
 // 6 LED pinini de çıkış olarak ayarlıyoruz
 for (int led = 0; led < 6; led++)
 {
     pinMode(ledPinleri[led], OUTPUT);
 }
}

void loop() {
 for (int led = 0; led < 5 ; led++)
 {
  digitalWrite(ledPinleri[led], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[led + 1], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[led], LOW);
  delay(beklemeSuresi *2);
 }
 
 for (int led = 5; led > 0; led--)
 {
  digitalWrite(ledPinleri[led], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[led - 1], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[led], LOW);
  delay(beklemeSuresi*2);
  }
}

