/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 
 Bölüm 5 - Kontrol Yapıları ve Fonksiyonlar
 
 Fonksiyon kullanımı örneği
****************************************************************/


void setup(){
  // seriportu 9600 bps hızına ayarla
  Serial.begin(9600);
}

void loop() {
  int a = 2;
  int b = 3;
  int c = 4;
  int d;
  float e; // Ortalam sonucu ondalık sayı olabilir
  d = carpmaFonksiyonu(a, b); 
  Serial.print("Carpma Sonucu:");
  Serial.println(d);

  d = toplamaFonksiyonu(a, b); 
  Serial.print("Toplama Sonucu:");
  Serial.println(d);

  d = cikarmaFonksiyonu(a, b); 
  Serial.print("Cikarma Sonucu:");
  Serial.println(d); 

  e = ortalamaFonksiyonu(a, b, c);
  Serial.print("Ortalama Sonucu:");
  Serial.println(e);

  while(1);// Programı burada kilitliyoruz
}

int carpmaFonksiyonu(int x, int y){
  int sonuc;
  sonuc = x * y;
  return sonuc;
}
int toplamaFonksiyonu(int x, int y){
  int sonuc;
  sonuc = x + y;
  return sonuc;
}
int cikarmaFonksiyonu(int x, int y){
  int sonuc;
  sonuc = x - y;
  return sonuc;
}
float ortalamaFonksiyonu(int x, int y, int z){
  float sonuc;
  sonuc = (x + y + z) / 3.0;
  return sonuc;
}


