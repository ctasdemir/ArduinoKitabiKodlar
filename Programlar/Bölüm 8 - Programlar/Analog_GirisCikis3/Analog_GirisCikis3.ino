/**********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 Analog Giriş - Çıkış İşlemleri - Örnek 3
 Analog - Dijital Çevrim ile LED Parlaklığı kontrolü
 
 A0 pinine bağlı olan potansiyemetrenin gerilim
 değeri okunuyor ve seriporttan gönderiliyor.
 D3 Pinine bağlı olan LED'in parlaklığı potansiyometre
 giriş değerine göre ayarlanıyor
 ***********************************************************************/
 
// Analog giriş pini olarak A0 pinini kullanıyoruz
// Potansiyometrenin girişi bu pine bağlanacak.

const int analogGirisPini = A0;  
const int LEDpini = 3;
int potansDegeri = 0;        // Potansiyometreden okunan değer
float gerilimDegeri = 0;     // Gerilim değeri
int LEDSonuc = 0;
void setup() {
  // Seri iletişimi başlatıyoruz
  Serial.begin(9600); 
}
void loop() {
  // Analog giriş değerini okuyoruz
  potansDegeri = analogRead(analogGirisPini);         

  gerilimDegeri = (potansDegeri / 1023.0) * 5.0;
  LEDSonuc =  map( potansDegeri,0,1023, 0, 255);

  analogWrite(LEDpini,LEDSonuc);
  // Sonuçları seriporttan yolluyoruz
  Serial.print("Sensor Degeri = " );                       
  Serial.println(potansDegeri);      
  Serial.print("Gerilim = ");      
  Serial.println(gerilimDegeri);   
  Serial.print("LED Sonuc = "); 
  Serial.println(LEDSonuc);

  delay(200);                     
}




