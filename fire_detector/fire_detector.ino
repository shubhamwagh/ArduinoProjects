//CONSTANTS
const int pinD0 = 0;
const int pinA0 = 1;

//VARIABLE
int A = -999;
int D = -999;
int readVal = 0;
boolean logging = false;
boolean fire = false;
boolean changed = true;


void setup() {              
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT);
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  Serial.begin(19200);
}

void loop() {
  initialAll();
  readValues();
  loggingProcess();
  if (changed)
    printState();
  delay(1000);// wait for a second
}

void initialAll(){
  readVal = 0;
}

void readValues(){
  A = analogRead(pinA0);
  D = analogRead(pinD0);
  fireCheck();
  if (Serial.available()>0){
    readVal = Serial.read();
  }
}

void loggingProcess(){
  if (readVal == 'l'){
    if (logging)
      logging = false;
    else
      logging = true;
  }
 
  if (logging){
    Serial.println("------------");
    Serial.println("SYUMMARY");
    Serial.print("A0:");
    Serial.println(A);
    Serial.print("D0:");
    Serial.println(D);
    Serial.println("------------");
  }
}

void printState(){
  if (fire){
    Serial.println("------------");
    Serial.println("FLAME Detected");
    Serial.println("------------");  
  }
  else{
    Serial.println("------------");
    Serial.println("NO FLAME");
    Serial.println("------------");  
  }
  changed = !changed;
}

void fireCheck(){
  if (A < 350 && D < 350){
    fire = true;
    changed = !changed;
  }
  else{
    fire = false;
    changed = !changed;  
  }
}
