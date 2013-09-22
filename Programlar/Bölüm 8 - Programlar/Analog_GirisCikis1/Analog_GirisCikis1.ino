/**********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Analog Giriş - Çıkış İşlemleri - Örnek 1
 Analog - Dijital Çevrim Örneği
 A0 pinine bağlı olan potansiyemetrenin gerilim
 değeri okunuyor ve seriporttan gönderiliyor.
 ***********************************************************************/

// Analog giriş pini olarak A0 pinini kullanıyoruz
const int analogGirisPini = A0;  // Potansiyometrenin girişi bu pine bağlanacak.
int potansDegeri = 0;            // Potansiyometreden okunan değer
float gerilimDegeri = 0;         // Gerilim değeri
void setup() {

  // Seri iletişimi başlatıyoruz
  Serial.begin(9600); 
}

void loop() {
  // Analog giriş değerini okuyoruz
  potansDegeri = analogRead(analogGirisPini);            
  gerilimDegeri = (potansDegeri / 1023.0) * 5.0; // Dijital değer gerilim değerine çevriliyor

  // Sonuçları seriporttan yolluyoruz
  Serial.print("Sensor Degeri = " );
  Serial.println(potansDegeri);
  Serial.print("Gerilim = ");
  Serial.println(gerilimDegeri);   

  delay(500);                  
}


