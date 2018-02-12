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
   if(a==HIGH)
   { 
     digitalWrite(10,HIGH);
     digitalWrite(11,LOW);
     digitalWrite(12,HIGH);
     digitalWrite(13,LOW);
     delay(1000);
     
   }
   else
   {
     digitalWrite(10,LOW);
     digitalWrite(11,LOW);
     digitalWrite(12,LOW);
     digitalWrite(13,LOW);
   }
   
}
