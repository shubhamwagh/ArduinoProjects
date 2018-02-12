//PWM PINS
//3
//5
//6
//9
//10
//11

void setup()
{
 Serial.begin(9600);
  
}
void loop()
{
 int a=analogRead(A0);
 int pwm=map(a, 0, 1023, 0, 255);
 Serial.println(pwm);
 analogWrite(5,pwm);
 analogWrite(6,0);
 analogWrite(9,pwm);
 analogWrite(10,0);
 delay(5000);
 
 analogWrite(5,0);
 analogWrite(6,pwm);
 analogWrite(9,0);
 analogWrite(10,pwm);
 delay(5000);
 
 }



