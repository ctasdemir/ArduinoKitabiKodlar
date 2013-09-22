/*********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 Dijital Giriş - Çıkış İşlemleri - Örnek 7
 
 7 Segment Gösterge sürme
 Arduino ile 7 segment gösterge
 sürüyoruz. Program 0 ile 9 
 otomatik olarak sayarak
 7 segment üzerinde gösteriyor. 
 Bağlantılar
 ----------------------
 7-Segment - a ==> D0
 7-Segment - b ==> D1
 7-Segment - c ==> D2
 7-Segment - d ==> D3
 7-Segment - e ==> D4
 7-Segment - f ==> D5
 7-Segment - g ==> D6
 **********************************************************************/

void setup() {
  pinMode(0,OUTPUT); //a
  pinMode(1,OUTPUT); //b
  pinMode(2,OUTPUT); //c
  pinMode(3,OUTPUT); //d
  pinMode(4,OUTPUT); //e
  pinMode(5,OUTPUT); //f
  pinMode(6,OUTPUT); //g
}

void loop() {
  int i;
  for(i = 0;i<10;i++)
  {
    RakamGoster(i);
    delay(500);  
  }  
}
void RakamGoster(int rakam)
{
  switch(rakam)
  {
  case 0:
    digitalWrite(0,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    break;
  case 1:
    digitalWrite(0,HIGH);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    break;
  case 2:
    digitalWrite(0,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    break;
  case 3:
    digitalWrite(0,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    break;

  case 4:
    digitalWrite(0,HIGH);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    break;
  case 5:
    digitalWrite(0,LOW);
    digitalWrite(1,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    break;

  case 6:
    digitalWrite(0,LOW);
    digitalWrite(1,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    break;
  case 7:
    digitalWrite(0,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    break;
  case 8:  
    digitalWrite(0,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    break;
  case 9: 
    digitalWrite(0,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    break;
  } 
}

