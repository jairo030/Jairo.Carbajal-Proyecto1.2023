#define rojo1 3
#define rojo2 13
#define azul2 12
#define verde2 8
#define rojo3 5
#define azul3 6
#define verde3 9
void setup()
{
  pinMode(rojo1, OUTPUT);
  
  pinMode(rojo2, OUTPUT);
  pinMode(azul2, OUTPUT);
  pinMode(verde2, OUTPUT);
  
  pinMode(rojo3, OUTPUT);
  pinMode(azul3, OUTPUT);
  pinMode(verde3, OUTPUT);
  
}

void loop()
{
  analogWrite(rojo1, 251);
  delay(1000);
  analogWrite(rojo1,0);
  delay(1000);
  digitalWrite(rojo2,HIGH);
  digitalWrite(azul2,HIGH);
  digitalWrite(verde2,LOW);
  delay(1000);
  digitalWrite(rojo2,LOW);
  digitalWrite(azul2,LOW);
  digitalWrite(verde2,LOW);
  delay(1000);
  
  analogWrite(rojo3, 0);
  analogWrite(azul3, 255);
  analogWrite(verde3, 255);
  delay(1000);
  analogWrite(rojo3, 0);
  analogWrite(azul3, 0);
  analogWrite(verde3, 0);
  delay(1000);
}
