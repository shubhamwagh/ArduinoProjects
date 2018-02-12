
void setup()
{
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
 
}
void loop()
{ 
  int r=digitalRead(3);
  int l=digitalRead(4);
  if(r==HIGH && l==HIGH)
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    
  }
  else if(r==HIGH && l==LOW)
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
  }
  else if(r==LOW && l==HIGH)
  {
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
  }

}
