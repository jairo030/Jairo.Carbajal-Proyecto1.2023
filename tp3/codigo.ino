#define rojo 3
#define verde 5
#define azul 6
#define potR A5
#define potG A4
#define potB A3
#define boton 12
int DvalorR = 0;
int DvalorG = 0;
int DvalorB = 0;



void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(boton, INPUT);

  Serial.begin(9600);


}

void loop()
{

  //////print de los colores///////////
   	/*Serial.print(" rojo:");  
 	Serial.print(nvalorR);

 	Serial.print(" verde:");
    Serial.print(nvalorG); 

  
  	Serial.print(" azul:");
    Serial.println(nvalorB);*/
  

  /////boton////////////
  
  	int lectura = digitalRead(boton);
 	 //Serial.println(lectura);

  /////////if////////
  
  if(lectura == 0){
   	Serial.println("Tiene 10 s para configurar el color del led");
   	delay(10000);
    
    int valorR = analogRead(potR);
    int valorG = analogRead(potG);
    int valorB = analogRead(potB);

    int nvalorR = map(valorR, 0, 1023, 0, 255);
    int nvalorG = map(valorG, 0, 1023, 0, 255);
    int nvalorB = map(valorB, 0, 1023, 0, 255);

    analogWrite(rojo, nvalorR);
    analogWrite(verde, nvalorG);
    analogWrite(azul, nvalorB);
    
  	DvalorR = nvalorR;
    DvalorG = nvalorG;
    DvalorB = nvalorB;

    Serial.print("El led esta usando esta configuracion de colores RGB: ");
    Serial.print(DvalorR);
    Serial.print(" , ");
    Serial.print(DvalorG);
    Serial.print(" , ");
    Serial.println(DvalorB);

    analogWrite(rojo, nvalorR);
    analogWrite(verde, nvalorG);
    analogWrite(azul, nvalorB);
  }
}	