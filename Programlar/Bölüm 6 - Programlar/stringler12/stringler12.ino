/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 String'ler ile ile işlemler - Örnek 12
 
 Replace() fonksiyonu ile içerisindeki belirli bir karakter
 bir başkası ile değiştirilebilir
 ****************************************************************/

void setup() {
  Serial.begin(9600);
}

void loop() {

  String ornekString1 = "aaBdCDe.eFg.h.i.A.B.Y..";

  Serial.println(ornekString1); 
  ornekString1.replace('.',',');// nokta işaretleri, virgül işaretine çevriliyor
  Serial.println(ornekString1);

  // programı burada kilitliyoruz (sonsuz döngüde kalıyor)
  while(true);
}




