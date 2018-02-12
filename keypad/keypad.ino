int r1=2;
int r2=3;
int r3=4;
int r4=5;

int c1=6;
int c2=7;
int c3=8;
int c4=9;

void setup()
{
  Serial.begin(9600);
  Serial.println("start");
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);

  pinMode(c1,INPUT);
  pinMode(c2,INPUT);
  pinMode(c3,INPUT);
  pinMode(c4,INPUT);
  
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  
}
void loop()
{
  int val;
  //setting the columns as high initially
  digitalWrite(c1,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(c4,HIGH);
  
  //checking everything one by one
  //case 1: col1 =0 while other col as 1
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  //checking each column for row1 one by one
  if(digitalRead(c1)==0)
  {
    Serial.println("key 1 pressed");
    digitalWrite(10,HIGH);
     digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
       digitalWrite(13,LOW);
    
  }
  else if(digitalRead(c2)==0)
  {
    Serial.println("Key 2 pressed");
     digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
       digitalWrite(12,LOW);
        digitalWrite(13,HIGH);
  }
  else if(digitalRead(c3)==0)
  {
    Serial.println("Key 3 pressed");
  }
  else if(digitalRead(c4)==0)
  {
    Serial.println("Key A pressed");
  }
  
  //case 2: col2 =0 while other col as 1
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  //checking each column for row1 one by one
  if(digitalRead(c1)==0)
  {
    Serial.println("key 4 pressed");
  }
  else if(digitalRead(c2)==0)
  {
    Serial.println("Key 5 pressed");
  }
  else if(digitalRead(c3)==0)
  {
    Serial.println("Key 6 pressed");
  }
  else if(digitalRead(c4)==0)
  {
    Serial.println("Key B pressed");
  }
  
  //case 3: col3 =0 while other col as 1
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r4,HIGH);
  //checking each column for row1 one by one
  if(digitalRead(c1)==0)
  {
    Serial.println("key 7 pressed");
  }
  else if(digitalRead(c2)==0)
  {
    Serial.println("Key 8 pressed");
  }
  else if(digitalRead(c3)==0)
  {
    Serial.println("Key 9 pressed");
  }
  else if(digitalRead(c4)==0)
  {
    Serial.println("Key C pressed");
  }
  
  //case 1: col1 =0 while other col as 1
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
  //checking each column for row1 one by one
  if(digitalRead(c1)==0)
  {
    Serial.println("key F pressed");
  }
  else if(digitalRead(c2)==0)
  {
    Serial.println("Key 0 pressed");
  }
  else if(digitalRead(c3)==0)
  {
    Serial.println("Key E pressed");
  }
  else if(digitalRead(c4)==0)
  {
    Serial.println("Key D pressed");
  }
  //giving delay between keypress
  delay(200);
  
} 
