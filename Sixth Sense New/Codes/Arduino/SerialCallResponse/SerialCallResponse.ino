
int inbyte = 0;         // incoming serial byte

void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  
    establishContact();  // send a byte to establish contact until receiver responds 
}

void loop()
{
  // if we get a valid byte, read analog ins:
  if (Serial.available() > 0) {
    // get incoming byte:
    inbyte = Serial.read();
 
if (inbyte=='R')
{
  Serial.println('R');
  digitalWrite(13,HIGH);
 digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
}
else if (inbyte == 'L')
{
    Serial.println('L');
  digitalWrite(13,LOW);
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,LOW);
 }
 else if (inbyte=='F')
 {
     Serial.println('F');
   digitalWrite(13,HIGH);
 digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,LOW);
 }
 else if (inbyte=='B')
 {
     Serial.println('B');
   digitalWrite(13,LOW);
 digitalWrite(12,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
 }
 else
{digitalWrite(13,HIGH);
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
}
  }
}

void establishContact() {
  while (Serial.available() <= 0) {
    Serial.print('A');   // send a capital A
    delay(300);
  }
}


