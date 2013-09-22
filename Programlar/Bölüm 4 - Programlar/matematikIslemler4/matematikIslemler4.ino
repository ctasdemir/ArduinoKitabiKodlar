/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 Bölüm 4 - Matematiksel İşlemler
 
 
  Matematik İşlemler örneği – 4
  Matematik Fonksiyonları - sqrt()
  1 ile 50 arasındaki sayıların
  karekökleri yazdırılıyor
****************************************************************/

int i;
float kok;

void setup() {
  Serial.begin(9600);
}


void loop() {
  // 1 - 50 arasındaki sayıların kare kökü yazdırılıyor  

  for(i=1;i<51;i++){
    kok = sqrt(i);
    Serial.print(i);
    Serial.print(" sayisinin kare koku:");
    Serial.println(kok);
  }
  //Programı burada kilitliyoruz
  while(1);
}

