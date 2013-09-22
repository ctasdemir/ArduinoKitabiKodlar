/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
  
 Bölüm 4 - Matematiksel İşlemler
 
 Matematik İşlemler örneği – 7
 floor() ve ceil() fonksiyonları ile ondalık
 sayıların tam sayıya yuvarlanması
 ****************************************************************/


float f= -1.0;

void setup() 
{ 
  Serial.begin(9600); 
} 

void loop() 
{ 
  for(int i=0; i<20; i++)
  {
   Serial.print("Sayi:");
   Serial.print(f);   
   Serial.print(" Floor:");
   Serial.print(floor(f));
   Serial.print(" Ceil:");
   Serial.println(ceil(f));
   f = f + 0.2;
   
  }
  
  while(1);
  
} 
