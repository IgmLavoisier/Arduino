
int n;
char c;
char ca[10];
int pin=5;


void setup() {
  Serial.begin(30000);
}


void loop() {
  while ( true ) {
    for ( n=0;n<10;n++){
      Serial.write( n );
      delay(100);
    }
  }
}
