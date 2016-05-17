long distancia;
long tiempo;
void setup(){
  Serial.begin(9600);
  pinMode(9, OUTPUT );/*activacion del pin 9 como salida8*/
  pinMode(8, INPUT); /*activacion del pin 8 como entrada8*/
}

void loop (){
  digitalWrite(9,LOW);/*Por cuestion de estabilizacion del sensor*/
  delayMicroseconds(5);
  digitalWrite(9,HIGH);/* envio del pulso ultrasonico*/
  delayMicroseconds(10);
 tiempo=pulseIn(8,HIGH);/*Funcion para pedir la longitud del pulso entrante del pulso
ultrasonico y cuando el sensor recibe el rebote, es decir: desde que deja de hacerlo, LOW,
la longitud del pulso entrante*/
distancia=int(0.017*tiempo);
Serial.println ("Distancia");
Serial.println(distancia);
Serial.println("cm");
delay(1000);
}
