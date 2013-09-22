/**************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
  String'ler ile ile işlemler - Örnek 2
  Temel String İşlemleri
  Stringlerin tanımlanması ve birbirine eklenmesi
****************************************************************/

// String bildirimleri
String string1, string2, string3,stringToplam;


void setup() {
  Serial.begin(9600);
  string1 = String(13);
  string2 = String(12,HEX);
  string3 = String (15,BIN);
  Serial.println("String islemleri"); //
}

void loop() {
  Serial.print("1.string:");
  Serial.println(string1);
  Serial.print("2.string:");
  Serial.println(string2);
  Serial.print("3.string:");
  Serial.println(string3);

stringToplam = "String birlestirme - 1. string:" + string1 + " 2. string:" + string2 
+ " 3. string:" + string3;
  Serial.println("String'lerin birlestirilmesi:");
  Serial.println(stringToplam);

 // programı burada kilitliyoruz (sonsuz döngüde kalıyor)
  while(true);
}

