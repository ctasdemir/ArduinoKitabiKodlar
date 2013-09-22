/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 9 - Seri Haberleşme 
 
 Seri Haberlesme - Örnek 1 
 Print ve Println fonksiyonları ile 
 seriport üzerinden çıktı alma örneği
 ***************************************************************/
 
float ondalikSayi = 1234.123456;
int tamsayi = 12;
void setup() {
  // Seri iletişimi başlatıyoruz (9600 bps)
  Serial.begin(9600); 
}
void loop() {
  Serial.println("Seri Haberlesme Fonksiyonlari");
  Serial.println("Ondalik Sayi:");
  Serial.println(ondalikSayi);
  Serial.println(ondalikSayi,3);
  Serial.println(ondalikSayi,4);

  Serial.print("Karakter:");
  Serial.println('A');
  Serial.print("Karakterin ASCII karsiligi:");
  Serial.println('A',DEC);

  Serial.print("Tam sayi:");
  Serial.println(tamsayi);
  Serial.print("2'li tabanda:");
  Serial.println(tamsayi,BIN);
  Serial.print("8'li tabanda:");
  Serial.println(tamsayi,OCT);
  Serial.print("16'li tabanda:");
  Serial.println(tamsayi,HEX);
 
 // Programı burada kilitliyoruz
 while(1);
}


