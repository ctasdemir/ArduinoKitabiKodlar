/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
Bölüm 3 - Arduino Programlama Dili 
Değişkenlerin Kullanımı Örnek 2

  Kayar Noktalı sayılar
****************************************************************/
int tamSonuc;
float ondalikSonuc;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  tamSonuc = 12 / 5;
  ondalikSonuc = 12.0 / 5.0;

  Serial.print("Tam sayi sonucu:");
  Serial.println(tamSonuc);
  Serial.print("Ondalik sonuc:");
  Serial.println(ondalikSonuc);
 
 //programımızı burada kilitliyoruz (sonsuz döngü)
while(1);

}

