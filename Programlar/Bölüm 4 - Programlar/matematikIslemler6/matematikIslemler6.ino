/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
  
 Bölüm 4 - Matematiksel İşlemler 
 
 Matematik İşlemler örneği – 6
 Max, min ve constrain fonksiyonlarının
 kullanımı 
 ***************************************************************/

int sayi;


void setup() {
  // Seri haberleşmeyi başlatıyoruz
  Serial.begin(9600);
}
void loop() {
  for (sayi = -1000; sayi <= 2000; sayi +=100)
  {
    Serial.print("Sayi:");
    Serial.print(sayi);
    Serial.print(" Max:");
    Serial.print(max(sayi,100));
    Serial.print(" Min:");
    Serial.print(min(sayi,100));
    Serial.print(" Constrain:");
    Serial.println(constrain(sayi,100,200));

  }
  //Programı burada kilitliyoruz
  while(1);
}


