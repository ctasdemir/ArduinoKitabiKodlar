/**********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
   
  Analog Giriş - Çıkış Örneği 5
  Analog - Dijital Çevrim ile DC Motor Hız kontrolü

  A0 pinine bağlı olan potansiyemetre ile
  D11 Pinine bağlı olan DC motorun hızı 
  kontrol ediliyor
  *********************************************************************/
// Analog giriş pini olarak A0 pinini kullanıyoruz
// Potansiyometrenin girişi bu pine bağlanacak.
// Motor çıkışı D11 nolu pinden sağlanacak.

const int analogGirisPini = A0;  
const int motorPini = 11;	 	// PWM Çıkışı	
int potansDegeri = 0;        	// Potansiyometreden okunan değer

void setup() {

}
void loop() {
  // Analog giriş değerini okuyoruz
  potansDegeri = analogRead(analogGirisPini);         
  potansDegeri =  map( potansDegeri,0,1023, 0, 255);
  analogWrite(motorPini, potansDegeri);
  delay(200);                     
}

