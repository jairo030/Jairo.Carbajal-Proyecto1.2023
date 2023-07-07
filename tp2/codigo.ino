#define rojo1 3
#define rojo2 13
#define azul2 12
#define verde2 8
#define rojo3 5
#define azul3 6
#define verde3 9
#define pot A1
#define boton 7

void setup()
{
  pinMode(rojo1, OUTPUT);
  
  pinMode(rojo2, OUTPUT);
  pinMode(azul2, OUTPUT);
  pinMode(verde2, OUTPUT);
  
  pinMode(rojo3, OUTPUT);
  pinMode(azul3, OUTPUT);
  pinMode(verde3, OUTPUT);

  pinMode(boton , INPUT);
  Serial.begin(10);

  
}

void loop()
  
  
{  

  int lectura = digitalRead(boton);
  Serial.println(lectura);
  
  int valor = analogRead(pot);
  int nvalor = map( valor, 0 , 1023 , 0 , 250);
  
  if(lectura == 0){
  	analogWrite(rojo1,0);
    
    digitalWrite(rojo2,LOW);
 	digitalWrite(azul2,LOW);
  	digitalWrite(verde2,LOW);
    
  	analogWrite(rojo3, 0);
  	analogWrite(azul3, 0);
  	analogWrite(verde3, 0);
    
  }else{
  
  analogWrite(rojo1, 251);
  delay(nvalor);
  analogWrite(rojo1,0);
  delay(nvalor);
  
  
  digitalWrite(rojo2,HIGH);
  digitalWrite(azul2,HIGH);
  digitalWrite(verde2,LOW);
  delay(nvalor);
  digitalWrite(rojo2,LOW);
  digitalWrite(azul2,LOW);
  digitalWrite(verde2,LOW);
  delay(nvalor);
  
  analogWrite(rojo3, 0);
  analogWrite(azul3, 255);
  analogWrite(verde3, 255);
  delay(nvalor);
  analogWrite(rojo3, 0);
  analogWrite(azul3, 0);
  analogWrite(verde3, 0);
  delay(nvalor);
  }
  

  

  
  
    
}
