void setup()
{
  Serial.begin(9600);
  Serial.println("start");
  
}

void loop()
{
  int x=analogRead(A0);
  Serial.println(x);
  delay(50);
}

