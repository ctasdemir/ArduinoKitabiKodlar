/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 
 Bölüm 5 - Kontrol Yapıları ve Fonksiyonlar
 continue ifadesinin kullanımı örneği

****************************************************************/

void setup() {
  // seriportu 9600 bps hızına ayarla
  Serial.begin(9600);
}

void loop() {
  int a = 0;
  while (a < 100)
  {
     a = a + 1;
     if(a%2 == 0)
     { continue; }

    // çift sayılar için döngünün buradan sonraki kısmı işletilmez, başa dönülür.
      
      Serial.println(a);
      delay(100);
  }
    Serial.println("Donguden Cikildi!");
    while(1); // Program burada kilitleniyor
}

