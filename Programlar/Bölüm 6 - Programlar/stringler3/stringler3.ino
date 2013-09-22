/**************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 
 
 String'ler ile ile işlemler - Örnek 3
 Temel String İşlemleri
 Stringlerin tanımlanması ve birbirine eklenmesi
 ***************************************************************/

// String bildirimleri
String ornekString1 = "Arduino";
String ornekString2 = "ile programlama";
String ornekString3 = "cok zevkli!";

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print(ornekString1);
  Serial.print(" string'inin boyutu:");
  Serial.println(ornekString1.length());

  Serial.print(ornekString2);
  Serial.print(" string'inin boyutu:");
  Serial.println(ornekString2.length());

  Serial.print(ornekString3);
  Serial.print(" stringi'nin boyutu:");
  Serial.println(ornekString3.length());
  
  
  // programı burada kilitliyoruz (sonsuz döngüde kalıyor)
  while(true);
}

