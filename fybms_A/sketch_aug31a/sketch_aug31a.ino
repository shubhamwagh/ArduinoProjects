void setup()
{
 pinMode(10,OUTPUT); 
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(7,INPUT);
}
void loop()
{
  int a=digitalRead(7);
  int count=a+a;
  if (a==2)
  {
    digitalWrite(10,0);
    digitalWrite(11,1);
    digitalWrite(12,0);
    digitalWrite(13,1);
    delay(2000); 
    a=0;
  }
  else
  {
     digitalWrite(10,0);
     digitalWrite(11,0);
     digitalWrite(12,0);
     digitalWrite(13,0);
  }
}
