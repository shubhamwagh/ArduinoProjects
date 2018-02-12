void setup()
{ 
  Serial.begin(9600);
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
} 

