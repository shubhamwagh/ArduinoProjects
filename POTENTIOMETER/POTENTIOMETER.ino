void setup()
{
  Serial.begin(9600);
  
}
void loop()
{
 int a=analogRead(A0);
 Serial.println(a); 
 digitalWrite(13,HIGH);
 delay(a);
 digitalWrite(13,LOW);
 delay(a);
}


