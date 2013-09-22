/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 9 - Seri Haberleşme 
 
 Seri Haberlesme - Örnek 3
 
 Seri haberleşme – Flush fonksiyonu
 10 saniye boyunca seriporttan veriler toplanıyor.
 Daha sonra flush fonksiyonu ile seriport
 tamponu boşaltılıyor.  
 ****************************************************************/

// seri haberleşme üzerinden gelen veri sayısı
int gelenVeriSayisi= 0;
void setup() {
  Serial.begin(9600); // Seri haberleşmeyi başlatıyoruz(9600 bps)
}
void loop() {
  int i = 0;
  //10 saniye boyunca seriporttan veri topla
  for(i = 0; i<10; i++){
    gelenVeriSayisi = Serial.available();
    Serial.print("Gelen veri sayisi:");
    Serial.println(gelenVeriSayisi);
    delay(1000);
  }
  //Seriport tamponunu boşalt
  Serial.flush();
  Serial.println("Tampon bosaltildi!");

  gelenVeriSayisi = Serial.available();
  Serial.print("Gelen veri sayisi:");
  Serial.println(gelenVeriSayisi);
  delay(1000);
}





