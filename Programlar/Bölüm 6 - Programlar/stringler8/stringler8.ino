/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 String'ler ile ile işlemler - Örnek 8
 
 Substring() fonksiyonu ile string'lerin parçalara
 ayrılması
 ****************************************************************/

void setup() {
  Serial.begin(9600);
}

void loop() {
String a = "Arduino string fonksiyonlari";
String b = a.substring(8);    // b stringine "string fonksiyonlari" yazılır
String c = a.substring(8,14); // c stringine "string" yazılır

Serial.print("Orjinal String: "); 
Serial.println(a); 

Serial.print("8. indisten sonrasi: "); 
Serial.println(b);

Serial.print("8. indis ile 14. indis arasi: "); 
Serial.println(c); 

 // programı burada kilitliyoruz (sonsuz döngüde kalıyor)
  while(true);
}



