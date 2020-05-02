//Darshan Mistry.

#include <LiquidCrystal_I2C.h> //init header file for I2C Interfacing..

LiquidCrystal_I2C lcd(0x27, 20, 4); //port connection init...
void setup() 
{
  lcd.init();
  lcd.backlight();
  lcd.print("Darshan Mistry.!"); //print the character...
}
//Loop..
void loop()
{
  lcd.cursor();
  delay(500);  //delay to display
  lcd.noCursor();
  delay(500);
}
