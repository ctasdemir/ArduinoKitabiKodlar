/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 
 Bölüm 5 - Kontrol Yapıları ve Fonksiyonlar
 
  if yapısı kullanımı örneği
  
  2 nolu dijital pine pull-down direnci ile bağlı butona
  basıldığında 13 nolu pine bağlı olan (Arduino üzerindeki)
  LED yakılıyor 
 ***************************************************************/
 
int buttonPini = 2;  // butonun bağlı olduğu pin
int ledPini =  13;   // LED’in bağlı olduğu pin
int buttonDurumu = 0; // buton durumunu tutan değişken

void setup() {
  pinMode(ledPini, OUTPUT);
  pinMode(buttonPini, INPUT);     
}
void loop(){
 buttonDurumu = digitalRead(buttonPini); // buton girişini oku
// Buton girişi 1 (HIGH) ise LED çıkışını 1 (HIGH) yap
  if (buttonDurumu == HIGH) {     
    digitalWrite(ledPini, HIGH);  
  } 
  else {
  // turn LED off:
  digitalWrite(ledPini, LOW); 
  }
}
