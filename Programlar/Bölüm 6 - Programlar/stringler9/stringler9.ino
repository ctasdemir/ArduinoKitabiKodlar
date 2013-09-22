/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 String'ler ile ile işlemler - Örnek 9
 
 toLowerCase() ve toUpperCase ile string'lerdeki karakterlerin
 küçük veya büyük harflere çevrilmesi
 ****************************************************************/

String ornekString = "BUYUK ve kucuk HaRfLeR";


void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(ornekString);  
  ornekString.toLowerCase();  // ornekString “buyuk ve kucuk harfler” olur
  Serial.println(ornekString);
  ornekString.toUpperCase();  // ornekString “BUYUK VE KUCUK HARFLER”  olur
  Serial.println(ornekString);

  // programı burada kilitliyoruz (sonsuz döngüde kalıyor)
  while(true);
}




