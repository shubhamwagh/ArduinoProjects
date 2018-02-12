void setup()
{
  Serial.begin(9600); 
  Serial.println("start"); 
}
void loop()
{
  
  if(Serial.available()>0)
  {
    int a=Serial.read();
    if(a=='0')
    {
    digitalWrite(13,0);
    }
    if(a=='1')
    {
      digitalWrite(13,1);
      
    }
    
    
  }
}


