
void setup()
{
  Serial.begin(9600);
  Serial.println("welcome RFID");
}
char a;
String RFID="";
void loop()
{
  if(Serial.available()>0)
  {
    a=Serial.read();
    RFID+=a;
    if(RFID.length()>11)
    {
      Serial.println(RFID);
      RFID="";
      Serial.print("next");
    }
    
    
  }
  
}

