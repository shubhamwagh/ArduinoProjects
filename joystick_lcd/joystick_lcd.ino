#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{ 
  Serial.begin(9600);
 lcd.begin(16, 2);
}
void loop()
{
  int a=analogRead(A1);
  int b=analogRead(A2);
    
  lcd.setCursor(0,1); 
  lcd.print("x=");
    lcd.setCursor(3,1);
  lcd.print(a);

  lcd.setCursor(8,1);
  lcd.print("b=");
    lcd.setCursor(11,1);
  lcd.print(b);

  
 
  
  if(a>900)
  {
    lcd.setCursor(0,0);
    lcd.print("forward");
  }
  
  else if(a<300)
  {
    lcd.setCursor(0,0);
    lcd.print("backword");

  }
  else if(b<200)
  {
    lcd.setCursor(0,0);
    lcd.print("right");
    
  }
  else if(b>1000)
  { 
    lcd.setCursor(0,0);
    lcd.print("left");
  }
  
  
  else
  {
  lcd.setCursor(0,0);
  lcd.print("stop");
  }
  
  delay(100);
lcd.clear();

}
  
  
  
 /* else if(b>900)
  {
    lcd.print("right");
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);

  }
  else  if(b<300)
  {
    lcd.print("left");
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);

  }
  
    else 
  {
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);

  }
  
  
  
  
  
  
} */
