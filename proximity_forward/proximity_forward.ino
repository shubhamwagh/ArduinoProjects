

void setup()
{
Serial.begin(9600);
Serial.println("start");
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);

}
void loop()
{
  int a=analogRead(A0);
  Serial.println(a);
  delay(100);
  if(a<970)
 {
 digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);



 }
 else if(a>400)
 {
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);

 }
 

}

