#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Битовая маска символа улыбки
byte b[8] =       //b
{
  B01110,
  B10001,
  B10000,
  B11111,
  B10000,
  B10000,
  B10000,
  B00000,
};  
byte a[8] =      //a
{
  B10010,
  B10010,
  B10010,
  B10010,
  B10010,
  B10010,
  B01101,
  B00000,
}; 
byte n[8] =        //n
{
  B10000,
  B11000,
  B01000,
  B01000,
  B01001,
  B01001,
  B00110,
  B00000,
}; 
byte f[8] =         //f
{
  B00110,
  B00101,
  B00110,
  B01100,
  B10100,
  B10101,
  B11110,
  B00100,
}; 
byte g[8] =           //g
{
  B01100,
  B10010,
  B10010,
  B10010,
  B10010,
  B11111,
  B00010,
  B00010,
}; 
byte p[8] =                     //p
{
  B10010,
  B10010,
  B10010,
  B10010,
  B01110,
  B00010,
  B00010,
  B00011,
}; 
byte s[8] =                  //s
{
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B01110,
  B00000,
};  
byte w[8] =                    //w
{
  B01110,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B01110,
  B00000,
};

byte arr[8];

LiquidCrystal_I2C lcd(0x27,20,4);      

void setup()
{
  lcd.init();                         
  lcd.backlight();                     

  lcd.createChar(1, a);
  lcd.createChar(2, b);
  lcd.createChar(3, n);
  lcd.createChar(4, f);
  lcd.createChar(5, g);
  lcd.createChar(6, w);
  lcd.createChar(7, p);
  lcd.createChar(8, s);

  lcd.setCursor(0, 0); 
  lcd.print("\1\2\3\4\5\6\7\8");   

for ( int i=0; i < 9; i++ ){
  arr[8]={ a[i]  };
}  
}

void loop()
{
  


}
