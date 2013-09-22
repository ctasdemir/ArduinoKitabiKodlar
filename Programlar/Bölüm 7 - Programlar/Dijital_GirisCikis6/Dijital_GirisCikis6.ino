/*********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 Dijital Giriş - Çıkış İşlemleri - Örnek 6
   
 Dijital 2,3,4,5,6,7,8 nolu pinlere 
 bağlı LED'ler dijital 9 pinindeki butona
 her basıldığında 1 ile 6 arasında bir sayıyı
 gösterecek şekilde yakılıyor
 *********************************************************************/

const int ledPinleri[] = { 2, 3, 4, 5, 6, 7, 8};
const int butonPini = 9;

void setup(){
  // 6 LED pinini de çıkış olarak ayarlıyoruz
  pinMode(ledPinleri[0], OUTPUT);
  pinMode(ledPinleri[1], OUTPUT);
  pinMode(ledPinleri[2], OUTPUT);
  pinMode(ledPinleri[3], OUTPUT);
  pinMode(ledPinleri[4], OUTPUT);
  pinMode(ledPinleri[5], OUTPUT);
  pinMode(ledPinleri[6], OUTPUT);
  pinMode(butonPini,INPUT);
}

/* Butona her basıldığinda zar atıyoruz */
void loop() {
  if(ButonOku(butonPini) == true)
  {
    ZarSalla(); 
  }
  delay(1);
}
/*
  ZarSayiGoster Fonksiyonu
 parametre olarak verilen sayıya göre
 LED'lerin yakılmasını sağlıyor
 */
void ZarSayiGoster(int sayi)
{
  int i;
  for(i = 0; i<7;i++)
  {
    digitalWrite(ledPinleri[i],LOW);
  }
  switch(sayi)
  {
  case 1:
    digitalWrite(ledPinleri[3],HIGH);
    break;
  case 2:
    digitalWrite(ledPinleri[1],HIGH);
    digitalWrite(ledPinleri[5],HIGH);      
    break;
  case 3:
    digitalWrite(ledPinleri[1],HIGH);
    digitalWrite(ledPinleri[3],HIGH);
    digitalWrite(ledPinleri[5],HIGH);      
    break;  
  case 4:
    digitalWrite(ledPinleri[0],HIGH);
    digitalWrite(ledPinleri[1],HIGH);      
    digitalWrite(ledPinleri[5],HIGH);
    digitalWrite(ledPinleri[6],HIGH);      
    break;
  case 5:
    digitalWrite(ledPinleri[0],HIGH);
    digitalWrite(ledPinleri[1],HIGH);      
    digitalWrite(ledPinleri[3],HIGH);
    digitalWrite(ledPinleri[5],HIGH);      
    digitalWrite(ledPinleri[6],HIGH);      
    break;
  case 6:
    digitalWrite(ledPinleri[0],HIGH);
    digitalWrite(ledPinleri[1],HIGH);      
    digitalWrite(ledPinleri[2],HIGH);
    digitalWrite(ledPinleri[4],HIGH);      
    digitalWrite(ledPinleri[5],HIGH);
    digitalWrite(ledPinleri[6],HIGH);         
    break;
  }
}

/*
   ZarSalla fonksiyonunda 1 ile 6 arasında
 rastgele bir sayı üretiliyor. Belirli bir animasyon
 geçişinden sonra üretilen sayı LED'lerle gösteriliyor.
 */
void ZarSalla()
{
  int zar;
  int i;
  randomSeed(analogRead(0)); // Rastgele sayı üretmek için analog 0 girişini kullanıyoruz
  zar = random(1,7); // 1 ile 7 (dahil değil) arasında bir sayı üretiyoruz

  /* Zar geçişleri arasındaki bekleme her periyotta 50 ms
   artırılarak animasyonun yavaşlaması sağlanıyor */

  for(i = 0; i<250;i=i+50)
  {
    ZarSayiGoster(1);
    delay(i);
    ZarSayiGoster(2);
    delay(i);
    ZarSayiGoster(3);
    delay(i);
    ZarSayiGoster(4);
    delay(i);
    ZarSayiGoster(5);
    delay(i);
    ZarSayiGoster(6); 
    delay(i);
  }
  ZarSayiGoster(zar); // Gelen zar sayısını gösteriyoruz
}
boolean ButonOku(int butonPin)
{
  int okunanDeger =  digitalRead(butonPin);
  delay(25);
  if (  okunanDeger == digitalRead(butonPin) )
  {
    return okunanDeger;  
  }
  else
  {
    return false;
  } 
}


