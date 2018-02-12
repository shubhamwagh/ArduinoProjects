void setup()
{
  Serial.begin(9600);
  Serial.println("Start");
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(7,INPUT);
  
  }
  
  
  void loop()
  {
    int s=digitalRead(7);
    
    if(s==1)
    {
      Serial.println(s);
      digitalWrite(10,1);
      digitalWrite(11,0);
      digitalWrite(12,1);
      digitalWrite(13,0);
      delay(2000);
  }
   
 else 
 {
   Serial.println(s);
   digitalWrite(10,0);
   digitalWrite(11,0);
   digitalWrite(12,0);
   digitalWrite(13,0);
 }

}
