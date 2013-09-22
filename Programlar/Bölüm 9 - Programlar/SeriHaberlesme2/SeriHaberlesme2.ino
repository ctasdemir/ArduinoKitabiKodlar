/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
  
 Bölüm 9 - Seri Haberleşme 
 
 Seri Haberlesme - Örnek 2
 
 Serial Monitor üzerinden gönderilen 
 karakterlere göre 4 LED'den birisinin durumu
 değiştirilir.
 
 Bağlantılar:
 Arduino Dijital 9 - LED1
 Arduino Dijital 10 - LED2
 Arduino Dijital 11 - LED3 
 Arduino Dijital 12 - LED4
 
 Gönderilecek Karakterler:
 A => 1.LED
 B => 2.LED
 C => 3.LED
 D => 4.LED
 ***************************************************************/

// Gelen verinin aktarılacağı karakter değişkeni	
char karakter = 0;        
//LED Pinlerinin numaralari
const byte LEDpinleri[4] ={ 9,10,11,12};

// LED'lerin durumlarını tutan değişkenler
// true = LED Yanık, false = LED Sönük
boolean LEDDurum[4] ={ false,false,false,false};

void setup() {
  Serial.begin(9600); // Seri haberleşmeyi başlatıyoruz(9600 bps)
  pinMode(LEDpinleri[0],OUTPUT);
  pinMode(LEDpinleri[1],OUTPUT);
  pinMode(LEDpinleri[2],OUTPUT);
  pinMode(LEDpinleri[3],OUTPUT);          
}
void loop() {
  // Veri gelmiş mi?
  if (Serial.available() > 0) {
    // gelen veriyi oku
    karakter = Serial.read();
    // Gelen karakteri yazdır
    Serial.print("Gelen karakter: ");
    Serial.println(karakter);

    //Gelen Karakterler göre ilgili LED'i yakıyoruz
    switch(karakter)
    {
    case 'A':
      LEDDurumDegistir(0);           
      break;

    case 'B':
      LEDDurumDegistir(1); 
      break;

    case 'C':
      LEDDurumDegistir(2);
      break;

    case 'D':
      LEDDurumDegistir(3);
      break;    
      
    default:
      Serial.println("Gecersiz bir karakter gonderildi!");
      break; 
    }
  }
}

/* Fonksiyona girilen LEDno değerine göre
 ilgili LED'in durumunu değiştirir.
 (LED Yanıyorsa söndürür, sönükse yakar).
 */
void LEDDurumDegistir(int LEDno)
{
  if(LEDDurum[LEDno] == false)
  {
    digitalWrite(LEDpinleri[LEDno],HIGH);
    LEDDurum[LEDno] = true;   
    Serial.print(LEDno);
    Serial.println("nolu LED yakildi!");
  }
  else
  {
    digitalWrite(LEDpinleri[LEDno],LOW);
    LEDDurum[LEDno] = false;   
   Serial.print(LEDno);
   Serial.println("nolu LED sonduruldu!");

  }
}



