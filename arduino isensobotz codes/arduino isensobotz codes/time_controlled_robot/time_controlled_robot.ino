//*********ARK TECHNOSOLUTIONS*********//

int switchpin=A5;
void setup()
{
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(switchpin,INPUT);
 }
void loop()
{
  digitalRead(switchpin);
  if(switchpin==HIGH)
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
  }
  delay(100);//by changing the value of delay time can be controlled
}

//*********ARK TECHNOSOLUTIONS*********//
