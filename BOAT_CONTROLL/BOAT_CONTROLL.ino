void setup()
{
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.println("start"); 
}
void loop()
{
  
  if(Serial.available()>0)
  {
    int a=Serial.read();
    if(a=='F')
    {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    delay(500);
    }
  
    
    if(a=='B')
    {
      digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(500);
    }
  }
    else
    {
     digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    
    }
    
}


