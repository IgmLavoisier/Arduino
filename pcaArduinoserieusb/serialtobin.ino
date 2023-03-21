
int contador=0;
int n=0;
bool flag1=true;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(30000);
}



/*
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
*/



void mostrar(int contador) {

      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);

      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);


      if (  (contador-(contador%1))/1  %2  == 0 )
          digitalWrite(2, LOW);   
      else
          digitalWrite(2, HIGH);   

      if (  (contador-(contador%2))/2  %2  == 0 )
          digitalWrite(3, LOW);   
      else
          digitalWrite(3, HIGH);   

      if (  (contador-(contador%4))/4  %2  == 0 )
          digitalWrite(4, LOW);   
      else
          digitalWrite(4, HIGH);   

      if (  (contador-(contador%8))/8  %2  == 0 )
          digitalWrite(5, LOW);   
      else
          digitalWrite(5, HIGH);   


}


void loop() {

      //delay(2000);     
      //if (Serial){
      //n=Serial.readString().toInt();
      n=Serial.read();
      
      if (n>0){
         mostrar(n);
         delay(40);     
      }
        
    
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
  
