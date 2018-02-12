void setup()
{
  Serial.begin(9600);
  Serial.print("SaiKumar");
  Serial.println("F.Y.BMS");
  Serial.println("Start");
  pinMode(13,OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
   char a=Serial.read();
   Serial.println(a); 
   
   if(a=='n')
   {
     digitalWrite(13,1);
     
   }
   if(a=='f')
   {
     digitalWrite(13,0);
   }
   
  }
} 
