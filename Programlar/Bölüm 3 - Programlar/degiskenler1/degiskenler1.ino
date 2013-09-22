/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 Bölüm 3 - Arduino Programlama Dili 
 Değişkenlerin Kullanımı Örnek 1

tamsayi1 ve tamsayi2 adında ve int tipinde iki değişken tanımlayıp 
başlangıç değerleri veriyoruz. uzuntamsayi değişkeni de long tipinde 
tanımlanıp başlangıç değeri olarak sıfır veriliyor
****************************************************************/

int tamsayi1 = 12; 
int tamsayi2 = 5;
int tamsayiSonuc;
long int uzuntamsayi = 0;
void setup() {
  Serial.begin(9600);           // seri iletişimi 9600bps hızında ayarla
}
void loop(){ 
tamsayiSonuc = tamsayi1 + tamsayi2;
Serial.print("12+5=");
Serial.println(tamsayiSonuc);

tamsayi1 = 1400;
tamsayi2 = 1000;
tamsayiSonuc = tamsayi1 * tamsayi2;
Serial.print("1400 * 1000=");
Serial.println(tamsayiSonuc);

// Tip dönüşümü yapılmadan 
Serial.print("Tip donusumu yapilmadan 1400*1000=");
uzuntamsayi = tamsayi1 * tamsayi2;  
Serial.println(uzuntamsayi);
// Tip dönüşümü
Serial.print("Tip donusumu yapilarak 1400*1000=");
uzuntamsayi = (long)(tamsayi1) * (long)(tamsayi2);  
Serial.println(uzuntamsayi);

//programımızı burada kilitliyoruz (sonsuz döngü)
while(1);
}

