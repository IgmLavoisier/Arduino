
int n;
char c;
char ca[10];
int pin=5;


void setup() {
  Serial.begin(115200);
  pinMode(pin, OUTPUT);
  pinMode(pin+1, OUTPUT);
  pinMode(pin+2, OUTPUT);
}


void loop() {
  n=Serial.readString().toInt();
  c=n;  
  Serial.println( 'x' );
  digitalWrite(pin+n,HIGH);
  delay(50);
  digitalWrite(pin+n,LOW);
}
