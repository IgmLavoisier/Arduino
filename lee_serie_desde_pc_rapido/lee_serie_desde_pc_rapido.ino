
int n;
char c;
int pin=5;
int sle=20;

void setup() {
  Serial.begin(9600);
  pinMode(pin , OUTPUT);
  pinMode(pin+1, OUTPUT);
  pinMode(pin+2, OUTPUT);
  pinMode(pin+3, OUTPUT);
}



void loop() {
   //Serial.flush();
   n=Serial.read(); 
   //Serial.println(n);
  n=n-'0';
  digitalWrite(n+5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10);                       // wait for a second
  digitalWrite(n+5, LOW);    // turn the LED off by making the voltage LOW
  //delay(10);  
  
}

 
  /*
  digitalWrite(pin+n,HIGH);
  delay(50);
  digitalWrite(pin+n,LOW);
  */
