void setup()
{
 pinMode(10,OUTPUT); 
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
}
void loop()
{
  if(Serial.available()>0)
  {
   char a=Serial.read();
   Serial.println(a);
  
   if(a=='f')
{
 digitalWrite(10,0);
 digitalWrite(11,1);
 digitalWrite(12,0);
 digitalWrite(13,1);
 delay(2000);
}
 if(a=='b')
 {
 digitalWrite(10,1); 
 digitalWrite(11,0);
 digitalWrite(12,1);
 digitalWrite(13,0);
 delay(2000);
 }
 if(a=='r')
 {
 digitalWrite(10,0); 
 digitalWrite(11,1);
 digitalWrite(12,1);
 digitalWrite(13,0);
 delay(2000);
 }
 
 
if(a=='l')
{
 digitalWrite(10,1);
 digitalWrite(11,0);
 digitalWrite(12,0);
 digitalWrite(13,1);
 delay(2000);
}
  }
}

