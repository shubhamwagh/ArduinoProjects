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
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(5000);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    delay(500);
    
  }
  
}

//*********ARK TECHNOSOLUTIONS*********//
