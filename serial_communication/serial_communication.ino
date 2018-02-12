
void setup() 
{
  Serial.begin(9600);
  Serial.println("rushikesh");
  Serial.print("rushikesh dilip jawanjal");
}

void loop()
{
  if (Serial.available()>0)
  {
    char a=Serial.read();
    Serial.println(a);
  }
}
