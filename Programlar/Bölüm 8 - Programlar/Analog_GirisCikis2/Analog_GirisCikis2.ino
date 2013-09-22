/**********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
  Analog Giriş - Çıkış İşlemleri - Örnek 2
  LM35 sensörü ile sıcaklık ölçümü
  Bu sensör derece başına 10 mV çıkış verir.
  20 ºC => için 20 * 10 mV = 200 mV
  25 ºC
***********************************************************************/

//Değişkenleri tanımlıyoruz
float sicaklik;
float gerilim;
int sicaklikPin = 0;

void setup()
{
  Serial.begin(9600); //Seri haberleşmeyi başlat (9600 bps)
}

void loop()
{
  gerilim = analogRead(sicaklikPin);              // Sensörden gelen değeri oku
  gerilim = (gerilim / 1023) * 5000; // mV cinsinden gerilimi buluyoruz
  sicaklik = gerilim / 10.0;// Gerilim değerini sıcaklığa çeviriyoruz
 
  Serial.print("Sicaklik degeri:");            //Sonucu gönder       
  Serial.print(sicaklik);                
  Serial.println(" derece");             
  delay(1000);                                 //Saniyede bir ölçüm gönderiyoruz
}



