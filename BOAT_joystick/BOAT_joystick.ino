void setup()
{ 
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop()
{
  int a=analogRead(A1);
  int b=analogRead(A2);
  int c=analogRead(A3);
  Serial.print(a);
  Serial.print("||");
  Serial.print(b);
  Serial.print("||");
  Serial.println(c);
  delay(100);
  if(c>900)
  {
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
  }
  
  else if(c<300)
  {
 digitalWrite(10,LOW);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
  }
  
  
  
  
  else if(b>900)
  {
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);

  }
  else  if(b<300)
  {
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
  
  
  
  
  
  
} 
