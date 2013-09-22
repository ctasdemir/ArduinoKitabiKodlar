/***************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
 
 
 Bölüm 3 - Arduino Programlama Dili 
 Değişkenlerin kullanımına örnek – 8
 
 2  boyutlu diziler
***************************************************************/




int i,j;
int ikiBoyutluDizi[4][5] = { {1, 2, 3, 4, 5}, 
                             {11, 12, 13, 14, 15}, 
                             {10 ,20 ,30, 40, 50},
                             {14, 23, 45, 57, 63}};


void setup(){
  Serial.begin(9600); // Seri iletişimi 9600 hızıyla başlat

for(i = 0; i<4; i++){
    for(j= 0; j<5; j++){
    Serial.print("i=");
    Serial.print(i);
    Serial.print(" j=");
    Serial.print(j);
    Serial.print("Dizi elemani=");
    Serial.println(ikiBoyutluDizi[i][j]);
   }
}

  
}

void loop(){
  
}




