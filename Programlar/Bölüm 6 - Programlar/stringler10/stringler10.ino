/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 String'ler ile ile işlemler - Örnek 10
 
 Trim() fonksiyonu ile string başında ve sonundaki boşlukların
 kaldırılması
 ***************************************************************/

String a = "           Arduino string fonksiyonlari           ";
String b;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(a); // Orjinal string
  a.trim();
  Serial.println(a); // String başında ve sonundaki boşluklar kaldırılmış hali

  // programı burada kilitliyoruz (sonsuz döngüde kalıyor)
  while(true);
}




