/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 String'ler ile ile işlemler - Örnek 6
 String'ler arasında karşılaştırma yapılması
  
 compareTo() fonksiyonu ile string'ler karşılıştırılıyor   
****************************************************************/

// String bildirimleri
  String ornekString1;
  String ornekString2;
  String ornekString3;
  int sonuc;
void setup() {
  Serial.begin(9600);
}

void loop() {
 ornekString1 = "Kedi";
 ornekString2 = "Kopek";
 ornekString3 = "Kopek";
 sonuc =  ornekString2.compareTo(ornekString1); 
 Serial.print(sonuc);
 sonuc =  ornekString3.compareTo(ornekString2); 
 Serial.print(sonuc);


 
   // Programımızı burada kilitliyoruz.
  while(true);
}

