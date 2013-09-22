/**************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 String'ler ile ile işlemler - Örnek 1
 Karakter Dizileri
*************************************************************/

char karakterDizisi[] = "Arduino";
int i = 0;

void setup() {
  // Seri haberleşmeyi başlatıyoruz
  Serial.begin(9600);
  Serial.println("Karakter \t ASCII Kodu");
}
void loop() {
 
  for(i = 0; i<8;i++){
    Serial.print(karakterDizisi[i]);
    Serial.print("-");
    Serial.println(byte(karakterDizisi[i]));

    
  }
  
  //Programı burada kilitliyoruz
  while(1);
}


