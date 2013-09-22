/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 String'ler ile ile işlemler - Örnek 7
 
 String’lerde   startsWith() ve endsWith() fonskiyonlarının 
 kullanımı
 
****************************************************************/

void setup() {
  Serial.begin(9600);
}

void loop() {
  // startsWith() fonksiyonu ile bir string’in başlangıcında
  // başka bir string’in varlığını arayabiliriz
  String string1 = "Arduino ile string islemleri";
  int sayi1 = 12;
  int sayi2 = 15;
  Serial.println(string1);

  if (string1.startsWith("Arduino")) {
    Serial.println("String Arduino ile basliyor!"); 
  } 

  // Belirli bir indisten sonra da string1 içerisinde string2’nin varlığı
  // kontrol edilebilir
  string1 = "string ve arduino";
  if (string1.startsWith("arduino", 10)) {
    Serial.println("Arduino kelimesi string icinde bulundu!"); 
  } 

  // String sonuna eklediğimiz sayının 0 veya 5 rakamıyla bitip bitmediğine göre
  // 5'e bölünüp bölünemediğini kontrol ediyoruz
  string1 = "Tam sayi=";
  string1 = string1 + sayi1;
  Serial.println(string1);

  if (string1.endsWith("5") || string1.endsWith("0")){
    Serial.println("5'e bolunebilir"); 
  } 
  else {
    Serial.println("5'e bolunemez1"); 

  }
  
  string1 = "Tam sayi=";
  string1  = string1 + sayi2;
  Serial.println(string1);

  if (string1.endsWith("5") || string1.endsWith("0")) {
    Serial.println("5'e bolunebilir"); 
  } 
  else {
    Serial.println("5'e bolunemez1"); 

  }


  // Programı burada kilitliyoruz.
  while(true);

}

