#define r1 6
#define a1 5
#define v1 3
#define pote A0
#define r2 9
#define a2 10
#define v2 11
#define boton 7
void setup()
{
  pinMode(r1 ,OUTPUT);
  pinMode(a1 ,OUTPUT);
  pinMode(v1 ,OUTPUT);
  pinMode(r2 ,OUTPUT);
  pinMode(a2 ,OUTPUT);
  pinMode(v2 ,OUTPUT);
  pinMode(pote ,INPUT);
  pinMOde(boton , INPUT);
  Serial.begin(9600);
}

void loop()
{
  int npote = analogRead(pote);
  Serial.println(npote);
  
  int boton1;
  boton1 = 7;	
  
  if()
  {
  }else{

  }  
  //naranja
  analogWrite(r1, 200);
  analogWrite(v1, 100);
  analogWrite(a1, 0);
  delay(1000);
  
  //magenta
  analogWrite(r1, 255);
  delay(1000);
  analogWrite(r1, 0 ); 
  delay(1000);
  
  analogWrite(a1, 0);
  delay(1000);
  analogWrite(a1, 0 );  
  delay(1000);

  analogWrite(v1, 144);
  delay(1000);
  analogWrite(v1, 0);
  
  //rojo
  
  //amarillo
  analogWrite(r1, 200);
  delay(1000);
  analogWrite(r1, 0 ); 
  
  analogWrite(r2, HIGH);
  analogWrite(r2, LOW ); 
  delay(1000);
  
  analogWrite(a2, HIGH);
  analogWrite(a2, LOW );  
  delay(1000);
  
  analogWrite(v2, HIGH);
  analogWrite(v2, LOW ); 
  delay(1000);
}