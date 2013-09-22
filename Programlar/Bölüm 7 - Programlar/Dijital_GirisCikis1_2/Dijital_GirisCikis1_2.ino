/**********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Dijital Giriş - Çıkış İşlemleri - Örnek 1.2
 1 buton ile LED yakılması
 Dahili pull-up direnci kullanılıyor.
 
 Bağlantılar:
 Dijital - 12 : Buton 2. ucu
 Dijital - 13 : LED Anot ucu
 
 **********************************************************************/


// pin numaralarını sabit olarak tanımlıyoruz
const int butonPin = 12;      // butonun bağlı olduğu pin numarası
const int ledPin = 13;        // LED'in bağlı olduğu pin numarası

// Değişkenler
int buttonDurumu = 0;         // Buton girişinin durumu (HIGH veya LOW)

void setup() {
  // Buton pinini giriş olarak ayarlıyoruz:
  pinMode(butonPin, INPUT);
  // Dahili pull-up direncini aktif hale getiriyoruz
  digitalWrite(butonPin, HIGH);
  // LED pinini çıkış olarak ayarlıyoruz
  pinMode(ledPin, OUTPUT);
}


void loop() {
  // Buton durumunu oku
  buttonDurumu = digitalRead(butonPin);

  /* Butona basıldığında butonun durumu LOW olacaktır. Bu durumda
   LED çıkışını HIGH yapıyoruz. Tersi durumda ise LOW yapıyoruz
   */
  if (buttonDurumu == LOW) {
    digitalWrite(ledPin, HIGH);
  } 
  else {
    digitalWrite(ledPin, LOW);
  }
}


