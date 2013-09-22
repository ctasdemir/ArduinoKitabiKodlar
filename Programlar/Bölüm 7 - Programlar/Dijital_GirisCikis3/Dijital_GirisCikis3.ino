/*********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html

 Dijital Giriş - Çıkış İşlemleri - 3
 LED'lerle Karaşimşek Efekti
(For döngüsü kullaılmadan)
 
 Bağlantılar:
 Dijital - 8,9,10,11,12,13 pinleri LED'lerin anot uçlarına
 bağlı.
 LED'ler'in katot uçları 470 ohm'luk dirençler ile
 toprağa bağlı (GND) 
**********************************************************************/

  

const int ledPinleri[] = {8, 9, 10, 11, 12, 13};
const int beklemeSuresi = 30; // ms cinsinden bekleme süresi

void setup(){
 // 6 LED pinini de çıkış olarak ayarlıyoruz
    pinMode(ledPinleri[0], OUTPUT);
    pinMode(ledPinleri[1], OUTPUT);
    pinMode(ledPinleri[2], OUTPUT);
    pinMode(ledPinleri[3], OUTPUT);
    pinMode(ledPinleri[4], OUTPUT);
    pinMode(ledPinleri[5], OUTPUT);
}

void loop() {
  digitalWrite(ledPinleri[0], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[1], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[0], LOW);
  delay(beklemeSuresi *2);

  digitalWrite(ledPinleri[1], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[2], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[1], LOW);
  delay(beklemeSuresi *2);

  digitalWrite(ledPinleri[2], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[3], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[2], LOW);
  delay(beklemeSuresi *2);

  digitalWrite(ledPinleri[3], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[4], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[3], LOW);
  delay(beklemeSuresi *2);

  digitalWrite(ledPinleri[4], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[5], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[4], LOW);
  delay(beklemeSuresi *2);

  // Sağdan sola 
 
  digitalWrite(ledPinleri[5], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[4], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[5], LOW);
  delay(beklemeSuresi*2);

  digitalWrite(ledPinleri[4], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[3], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[4], LOW);
  delay(beklemeSuresi*2);

  digitalWrite(ledPinleri[3], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[2], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[3], LOW);
  delay(beklemeSuresi*2);

  digitalWrite(ledPinleri[2], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[1], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[2], LOW);
  delay(beklemeSuresi*2);

  digitalWrite(ledPinleri[1], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[0], HIGH);
  delay(beklemeSuresi);
  digitalWrite(ledPinleri[1], LOW);
  delay(beklemeSuresi*2);
  }

