int PIN_Y1= A1; // analog input 0
int PIN_X2=A2;// analog input 1
int PIN_Y2 =A3; // analog input 2
int PIN_X1=A4; // analog input 3
int PIN_READX= A3; // analog input 2
int PIN_READY=A4; // analog input 3

// stores the position from the touchscreen
int posX = 0;
int posY = 0;

void setup()
{
  Serial.begin(9600);
  Serial.print("start");
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  // configuration for reading the x value
  pinMode(PIN_Y1, INPUT);
  pinMode(PIN_Y2, INPUT);
  pinMode(PIN_X1, OUTPUT);
  digitalWrite(PIN_X1, LOW);
  pinMode(PIN_X2, OUTPUT);
  digitalWrite(PIN_X2, HIGH);
  delay(1);                     // let things settle
  posX = analogRead(PIN_READX); // read the X value

//  // configuration for reading the y value
  pinMode(PIN_X1, INPUT);
  pinMode(PIN_X2, INPUT);
  pinMode(PIN_Y2, OUTPUT);
  digitalWrite(PIN_Y2, LOW);
  pinMode(PIN_Y1, OUTPUT);
  digitalWrite(PIN_Y1, HIGH);
  delay(1);                     // let things settle
  posY = analogRead(PIN_READY); // read the Y value

  // send position out over serial port
  Serial.print(posX);
  Serial.print(",");
  Serial.println(posY);
int a=analogRead(PIN_READX);
delay(50);
int b=analogRead(PIN_READY);

if (a>b)
{
  Serial.println("back");
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
}
if(a<b)
{
    Serial.println("forward");
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
}
else
{
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
}
}
