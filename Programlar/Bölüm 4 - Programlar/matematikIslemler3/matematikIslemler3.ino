/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
  
 Bölüm 4 - Matematiksel İşlemler
 
 Matematik İşlemler örneği - 3
 
 Matematik Fonksiyonları - pow()
 1 ile 10 arasındaki sayıların
 kareleri yazdırılıyor
 ***************************************************************/
 
void setup() {
  Serial.begin(9600);
}
int i;
int kare;
float kok;

void loop() {
  // 1 - 10 arasındaki sayıların kareleri yazdırılıyor  
  for(i=1;i<11;i++){
    kare = pow(i,2);
    Serial.print(i);
    Serial.print(" sayisinin karesi:");
    Serial.println(kare);
  }
  // Programı burada kilitliyoruz  
  while(1);  
}


