/**************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 String'ler ile ile işlemler - Örnek 4
 String toplama operatörü kullanımı
  
 String'ler ile sabitler de ve değişkenler
 toplanabilir.
***************************************************************/

// String bildirimleri
  String string1 = "String Ornegi";
  String string2 = "String Ornegi-2";
  String string3;
  int tamSayi = 4567;
  char karakter = 'C';

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Bir string'in tam sayı sabitle toplanması
  Serial.println("String + sabit sayi:");
  string3 =  string1 + 123;
  Serial.println(string3);   

  Serial.println("String + int degisken:");
  string3 =  string1 + tamSayi;
  Serial.println(string3);   

  // Bir string'in long tam sayı sabitle toplanması:
  Serial.println("String + buyuk sabit sayi:");
  string3 = string1 + 123456789;
  Serial.println(string3);    
  

  //Bir stringin karakter sabitiyle toplanması:
  Serial.println("String + karakter sabiti");
  string3 =  string1 + 'A';
  Serial.println(string3);   
  
  //Bir stringin karakter degişkeni ile toplanması:
  Serial.println("String + karakter degiskeni");
  string3 =  string1 + karakter;
  Serial.println(string3);   

  // Bir string'in başka bir string sabitiyle toplanması
  Serial.println("String + sabit string");
  string3 =  string1 +  "abc";
  Serial.println(string3);    

 // İki string'in toplanması
  Serial.println("String + String");
  string3 = string1 + string2;
  Serial.println(string3);    

  // Programımızı burada kilitliyoruz.
  while(true);
}

