/**********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Dijital Giriş - Çıkış İşlemleri - Örnek 1
 1 buton ile LED yakılması
 
 Bağlantılar:
 Dijital - 12 : Buton 2. ucu
 Dijital - 13 : LED Anot ucu
 
 ***********************************************************************/


// pin numaralarını sabit olarak tanımlıyoruz
const int butonPin = 12;      // butonun bağlı olduğu pin numarası
const int ledPin = 13;        // LED'in bağlı olduğu pin numarası

// Değişkenler
int buttonDurumu = 0;         // Buton girişinin durumu (HIGH veya LOW)

void setup() {
  // Buton pinini giriş olarak ayarlıyoruz:
  pinMode(butonPin, INPUT);
  // LED pinini çıkış olarak ayarlıyoruz
  pinMode(ledPin, OUTPUT);
}


void loop() {
  // Buton durumunu oku
  buttonDurumu = digitalRead(butonPin);

  /* Butona basıldığında butonun durumu HIGH olacaktır. Bu durumda
   LED çıkışını HIGH yapıyoruz. Tersi durumda ise LOW yapıyoruz
   */
  if (buttonDurumu == HIGH) {
    digitalWrite(ledPin, HIGH);
  } 
  else {
    digitalWrite(ledPin, LOW);
  }
}


