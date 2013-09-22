/**********************************************************************
 Arduino Kitabı - Coşkun Taşdemir
 Dikeyeksen Yayınları 
 http://www.dikeyeksen.com/muhendislik/arduino.html
   
  Analog Giriş - Çıkış İşlemleri - 4
  RGB (red-green-blue) LED kontrolü

   3 renkli LED ile çeşitli renk örnekleri oluşturuluyor.
   hue2rgb fonksiyonu kendisine verilen 0-1 aralığındaki 
   değere göre renk skalasındaki karşılığının kırmızı, yeşil
   ve mavi tonlarına ait değerleri veriyor (0-255 arasında).
   Bu değerler analogWrite fonksiyonu ile LED'e uygulanarak
   bütün renk skalası geziliyor.   
   Kullanılan LED tipine göre ilgili bölümü kullanabilirsiniz
   (ortak anot veya ortak katot)  
***********************************************************************/

// LED bağlatı pinleri
int rpin = 11;  // kırmızı
int gpin = 10; // yeşil
int bpin = 9; // mavi
float h = 0; //hue (ton) değeri
int r=0, g=0, b=0; // renk değerleri
void setup()
{
}
void loop()                     
{
  // Her seferinde hue değeri 0.001 artırılıyor ve 1 olduğunda başa dönülüyor
  h = h + 0.001;
  if(h >= 1.0){
  h = 0;
  }
  // hue değeri r,g,b bileşenlerine çevriliyor
  h2rgb(h,r,g,b);

// Ortak anot RGB LED
  analogWrite(rpin, 255 - r);
  analogWrite(gpin, 255 - g);
  analogWrite(bpin, 255 - b);
   
/* Ortak katot için aşağıdaki kodları kullanabilirsiniz 
  analogWrite(rpin, r);
  analogWrite(gpin, g);
  analogWrite(bpin, b);
*/

  delay(20);
}

/* h2rgb
  0 ile 1 arasında verilen renk tonu (hue) değerine göre 
  Kırmızı (R), yeşil(G) ve mavi (B) değerlerini verir.
  Giriş: H => Hue değeri (0-1 arasında)
  Çıkış: R, G, B (0-255 arasında)
*/
void h2rgb(float H, int& R, int& G, int& B) {
  int var_i;
  float S=1, V=1, var_1, var_2, var_3, var_h, var_r, var_g, var_b;

  if ( S == 0 )              
  {
    R = V * 255;
    G = V * 255;
    B = V * 255;
  }
  else
  {
    var_h = H * 6;
    if ( var_h == 6 ) var_h = 0;      
    var_i = int( var_h ) ;            
    var_1 = V * ( 1 - S );
    var_2 = V * ( 1 - S * ( var_h - var_i ) );
    var_3 = V * ( 1 - S * ( 1 - ( var_h - var_i ) ) );
    if ( var_i == 0 ) {
      var_r = V     ;
      var_g = var_3 ;
      var_b = var_1 ;
    }
    else if ( var_i == 1 ) {
      var_r = var_2 ;
      var_g = V;
      var_b = var_1 ;
    }
    else if ( var_i == 2 ) {
      var_r = var_1 ;
      var_g = V;
      var_b = var_3 ;
    }
    else if ( var_i == 3 ) {
      var_r = var_1 ;
      var_g = var_2 ;
      var_b = V;
    }
    else if ( var_i == 4 ) {
      var_r = var_3 ;
      var_g = var_1 ;
      var_b = V;
    }
    else {
    var_r = V;
    var_g = var_1 ;
    var_b = var_2 ;
    }
    R = (1-var_r) * 255;        
    G = (1-var_g) * 255;
    B = (1-var_b) * 255;
  }
}

