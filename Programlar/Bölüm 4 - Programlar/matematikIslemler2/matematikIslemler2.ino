/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
  
 Bölüm 4 - Matematiksel İşlemler
 
 Matematik İşlemler örneği - 2
 Tam sayı ve ondalık sayı bölme işlemleri
 
 ***************************************************************/
 
  int tamSayi1;
  int tamSayi2;
  int tamSonuc;
  float ondalikSayi1;
  float ondalikSonuc;

void setup() {
  Serial.begin(9600);
}
void loop() {

  tamSayi1 = 136;
  tamSayi2 = 11;  
  ondalikSayi1 = 136.0;
  
  // İki tam sayi bölünüp sonuc tam sayı değişkene atılıyor
  tamSonuc = tamSayi1 / tamSayi2;
  Serial.print("Tam sayi / tam sayi sonucu = ");
  Serial.println(tamSonuc);

    // İki tam sayi bölünüp sonuc ondalik değişkene atılıyor
  ondalikSonuc = tamSayi1 / tamSayi2;
  Serial.print("Tam sayi / tam sayi sonucu (sonuc ondalik) = ");
  Serial.println(ondalikSonuc);

  // Tip dönüşümü ile tam sayılar ondalık sayıya çevriliyor
  ondalikSonuc = ondalikSayi1 / tamSayi2;
  Serial.print("(Ondalik sayi / tam sayi sonucu = ");
  Serial.println(ondalikSonuc);


  // Tip dönüşümü ile tam sayılar ondalık sayıya çevriliyor
  ondalikSonuc = (float)tamSayi1 / (float)tamSayi2;
  Serial.print("(float) Tam sayi / (float) tam sayi sonucu = ");
  Serial.println(ondalikSonuc);
 

  // Programı burada kilitliyoruz
  while(1);
}


