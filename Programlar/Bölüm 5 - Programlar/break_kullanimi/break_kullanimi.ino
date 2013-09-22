/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 
 Bölüm 5 - Kontrol Yapıları ve Fonksiyonlar
 
 break ifadesinin kullanımı örneği

****************************************************************/

void setup() {
  // seriportu 9600 bps hızına ayarla
  Serial.begin(9600);
}
void loop() {
  int a = 0;
  while (a < 100)
  {
     if(a == 10)
     { break; }
      a = a + 1;
      Serial.println(a);
      delay(100);
  }
     Serial.println("Donguden Cikildi!");

     while(1); // Programı burada kilitliyoruz   
}

