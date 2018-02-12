void setup()
{
  Serial.begin(9600);
  Serial.println("start");
  pinMode(7,INPUT);
}

void loop()
{
  int s=digitalRead(7);
  
  Serial.println(s);
 delay(500);
}
