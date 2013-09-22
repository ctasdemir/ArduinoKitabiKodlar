/*********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
  Dijital Giriş - Çıkış İşlemleri - Örnek 5
  
  Rastgele Sayı Üreten Program
  Rand()fonksiyonu ile üretilen rastgele sayi
  seriporttan gönderiliyor

**********************************************************************/

// Rastgele üretilen sayıyı saklayacak değişken
int rastgeleSayi;
void setup() {

  // Seri iletişimi başlatıyoruz
  Serial.begin(9600); 
  //Analog giriş 0 boşta bırakılarak elde edilen
  // gürültülü giriş değerlerinden rand() fonksiyonunun
  // rastgele sayılar üretmesi sağlanıyor
  randomSeed(analogRead(0));
}

void loop() {
  //0 ile 300 arasında rastgele sayı üretiliyor
  rastgeleSayi = random(300);
  Serial.println(rastgeleSayi);   
  delay(1000);                  
}

