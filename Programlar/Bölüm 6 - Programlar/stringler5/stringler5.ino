/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 String'ler ile ile işlemler - Örnek 5
 String içerisinde belirli bir karakterin değiştirilmesi
  
   charAt() ve setCharAt() fonksiyonları ile string içerisinde
   belirli bir karakter değiştirilebilir.
****************************************************************/

// String bildirimleri
  String ornekString = "Arduino ile String islemleri";
  char karakter;
void setup() {
  Serial.begin(9600);
}

void loop() {
   Serial.print("Orjinal string: ");
   Serial.println(ornekString);
   karakter = ornekString.charAt(6);
   ornekString.setCharAt(6,'a');
   Serial.print("6. karakteri 'a' yapilmis string: ");
   Serial.println(ornekString);
   // Programımızı burada kilitliyoruz.
  while(true);
}

