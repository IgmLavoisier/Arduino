
int n=0;
char ca[50];


void setup() {
  Serial.begin(9600);
}


void loop() {

  if (n<100){
    n=n+1;
    sprintf(ca, " %d ",n );
    Serial.println(  ca );
    if ( n > 9 )
         n=0;
  
    delay(50);     
  }  
  //delay(20);
  //Serial.end();
}
