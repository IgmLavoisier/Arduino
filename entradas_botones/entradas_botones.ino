

int en1=2;
int en2=3;
int en3=4;

int ou1=5;
int ou2=6;
int ou3=7;
int ou4=8;

int din1=0;
int din2=0;
int din3=0;
int din4=0;
int contador=0;

bool flag1=true;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(en1, INPUT);
  pinMode(en2, INPUT);
  pinMode(en3, INPUT);
  pinMode(ou1, OUTPUT);
  pinMode(ou2, OUTPUT);
  pinMode(ou3, OUTPUT);
  pinMode(ou4, OUTPUT);
}




void bascula(){
  if (flag1){
    din1=digitalRead(en1);
    if (din1==HIGH){
      digitalWrite(ou1, HIGH);
      flag1=false;
      digitalWrite(ou4, HIGH);
    }

    din2=digitalRead(en2);
    if (din2==HIGH){
      digitalWrite(ou1, LOW);
      digitalWrite(ou4, HIGH);
      flag1=false;
    }

  }
  
  if (contador > 100){
    contador=0;
    flag1=true;
    digitalWrite(ou4,LOW);
      
  }
  contador++;
  delay(2);  
}


// the loop function runs over and over again forever
void loop() {

    bascula();
}
/*

    }
    else{
      digitalWrite(5, LOW);
    }



  din2=digitalRead(en2);
  if (din2==HIGH){
      digitalWrite(6, HIGH);
  }
  else{
      digitalWrite(6, LOW);
  }

  din3=digitalRead(en3);
  if (din3==HIGH){
      digitalWrite(7, HIGH);
  }
  else{
      digitalWrite(7, LOW);
  }
  
  if (din4==HIGH){
      digitalWrite(8, HIGH);
  }
  else{
      digitalWrite(8, LOW);
  }
  
  */
  
