void setup()
{
  Serial.begin(9600);
  Serial.println("start");
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
 
  
}
void loop()
{
    int x=analogRead(A0);
  int y=analogRead(A1);
  int z=analogRead(A2);
  
  Serial.print(x);
  Serial.print("||");
  Serial.print(y);
  Serial.print("||");
  Serial.println(z);
  
  
  if(x<250)
  {
    digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);

  }
  else if(x>400)
  {digitalWrite(10,LOW);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
  }  
  else if(z<400)
  {
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);

    
  }
  else if(z>400)
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

