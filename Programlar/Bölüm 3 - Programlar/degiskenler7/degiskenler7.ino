/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 
 Bölüm 3 - Arduino Programlama Dili 
 Değişkenlerin kullanımına örnek – 7
 
 Dizilerin Kullanımı
 for döngüsü ile dizi elemanları
 seriport üzerinden gönderiliyor
****************************************************************/


int tamSayilar[10] = {1, 3, 4, 7, 9, 10, 45, 67, 56, 444};
float ondalikSayilar[5] = {10.3, 34.3, 34.23, 45.67};
void setup() {
  Serial.begin(9600);    
}
void loop(){

 for(int i = 0;i < 10; i++)
{
   Serial.println(tamSayilar[i]);
}
for(int i = 0;i < 5; i++)
{
   Serial.println(ondalikSayilar[i]);
}

//Programımızı burada kilitliyoruz
while(1);

}

