const int inputPin = 2;
const int ledPin = 12;
long randNumber;
int value = 0;

void setup () {
  Serial.begin (9600);
  pinMode (inputPin, INPUT );
  pinMode(ledPin,OUTPUT);
  randomSeed(analogRead(0));
}

void loop() {
  value = digitalRead (inputPin); //lectura digital de pin
  //Serial.println(value);
  // mandar mensaje a puerto serie en funcion del valor leido
   if (value ==1){
      Serial.println("Encendido  Numero generado es : ");
      randNumber= random(1, 50);
      digitalWrite(ledPin, HIGH);
      Serial.println (randNumber);
   }
   else {
     Serial.println ("apagado");
     //digitalWrite(ledPin,LOW);
   }
   delay (1);
   //digitalWrite(ledPin,LOW);
}
