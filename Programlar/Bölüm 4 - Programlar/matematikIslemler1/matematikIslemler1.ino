/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
  
 Bölüm 4 - Matematiksel İşlemler
 
 Matematik İşlemler örneği - 1
 Temel matematik işlemlerin
 gerçekleştirilmesi
 
 ****************************************************************/
 
void setup() {
  Serial.begin(9600);
}
void loop() {
  int sayi1;
  int sayi2;
  int toplamaSonuc;
  int cikarmaSonuc;
  int carpmaSonuc;
  int bolmeSonuc;


  sayi1 = 12;
  sayi2 = 6;

  toplamaSonuc = sayi1 + sayi2;  
  cikarmaSonuc = sayi1 - sayi2;
  carpmaSonuc = sayi1 * sayi2;
  bolmeSonuc = sayi1 / sayi2;
  
  Serial.print("Toplama sonucu:");
  Serial.println(toplamaSonuc);

  Serial.print("Cikarma sonucu:");
  Serial.println(cikarmaSonuc);

  Serial.print("Carpma sonucu:");
  Serial.println(carpmaSonuc);

  Serial.print("Bolme sonucu:");
  Serial.println(bolmeSonuc);
  
  // Programı burada kilitliyoruz
  while(1);
}


