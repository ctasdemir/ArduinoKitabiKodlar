/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 String'ler ile ile işlemler - Örnek 11
 
 indexOf() fonksiyonu ile bir string içinde
 başka bir karakter veya string'in bulunduğu yerin indisinin
 elde edilmesi
 ****************************************************************/


void setup() {
  Serial.begin(9600);
  Serial.println("String indexOf() ve lastIndexOf() fonksiyonlari");

}

void loop() {
  // indexOf() fonksiyonu belirli bir karakterin string içindeki yerinin indis değerini döndürür.

  String ornekString = "Arduino ile programlama yapmak cok kolay!";
  int birinciIndisDegeri;
  int ikinciIndisDegeri; 

  birinciIndisDegeri = ornekString.indexOf('o');
  Serial.print("o karakterinin ");
  Serial.println(ornekString);
  Serial.print(" icinde ilk bulundugu yerin indisi:"); 
  Serial.println(birinciIndisDegeri);


  ikinciIndisDegeri = ornekString.indexOf('o',birinciIndisDegeri + 1);
  Serial.print("o karakterinin ");
  Serial.println(ornekString);
  Serial.print(" icinde 2.kez bulundugu yerin indisi:"); 
  Serial.println(ikinciIndisDegeri);


  birinciIndisDegeri = ornekString.indexOf("ma");
  Serial.print("ma stringinin ");
  Serial.println(ornekString);
  Serial.print(" icinde ilk bulundugu yerin indisi:");
  Serial.println(birinciIndisDegeri);

  ikinciIndisDegeri = ornekString.indexOf("ma",birinciIndisDegeri + 1);
  Serial.print("ma stringinin ");
  Serial.println(ornekString);
  Serial.print(" icinde 2. kez bulundugu yerin indisi:");
  Serial.println(ikinciIndisDegeri);


  // Programı burada kitliyoruz (sonsuz döngü)
  while(true);
}




