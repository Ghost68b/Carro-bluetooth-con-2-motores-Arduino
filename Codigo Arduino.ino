int led1 = 2;/*in4*/
int led2 = 3;/*in3*/
int led3 = 8;/*in2*/
int led4 = 9;/*in1*/
/*out1,2 enfrente*/
/*out3,4 atras*/
int estado = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop()
{
  if( Serial.available()>0)
  {
    estado = Serial.read();
  }
  switch( estado)
  {
    /*adelante*/
    case 'a':
    digitalWrite(led1, HIGH);
    break;
   
    /*atras*/
    case 'c':
    digitalWrite(led2, HIGH);
    break;
    
    /*izquierda    */
    case 'e':
    digitalWrite(led3, HIGH);
    digitalWrite(led1, HIGH);
    break;
    
   /* derecha */
    case 'd':
    digitalWrite(led4, HIGH);
    digitalWrite(led1, HIGH);
    break;
   
 /* detener */
    case 'b':
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    break;
     }
}
