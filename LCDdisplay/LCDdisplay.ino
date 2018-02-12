#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup(){
    // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // initialize the serial communications:
}
void loop()
{
  int a=analogRead(A1);
   int b=analogRead(A2);
 lcd.setCursor(0, 0);
 lcd.print("joystick");
 lcd.setCursor(0,1);
 lcd.print(a);
 lcd.setCursor(0,5);
 lcd.print(b);
 delay(300);
  lcd.clear();

}


