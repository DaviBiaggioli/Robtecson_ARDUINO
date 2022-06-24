 //Programa : Controle 2 motores DC usando Ponte H L298N
//Autor : FILIPEFLOP
/*
   pinMot1A = IN1
   pinMot1B = IN2
   pinMot2A = IN3
   pinMot2B = IN4*/

//Definicoes pinos Arduino ligados a entrada da Ponte H
#define pinMot1A 6
#define pinMot1B 9
#define pinMot2A 10
#define pinMot2B 11
  
void setup()
{
  //Define os pinos como saida
 pinMode(pinMot1A, OUTPUT);
 pinMode(pinMot1B, OUTPUT);
 pinMode(pinMot2A, OUTPUT);
 pinMode(pinMot2B, OUTPUT);
}
  
void loop()
{
 //Gira o Motor A no sentido horario
 digitalWrite(pinMot1A, HIGH);
 digitalWrite(pinMot1B, LOW);
 delay(2000);
 //Para o motor A
 digitalWrite(pinMot1A, HIGH);
 digitalWrite(pinMot1B, HIGH);
 delay(500);
 //Gira o Motor B no sentido horario
 digitalWrite(pinMot2A, HIGH);
 digitalWrite(pinMot2B, LOW);
 delay(2000);
 //Para o motor B
 digitalWrite(pinMot2A, HIGH);
 digitalWrite(pinMot2B, HIGH);
 delay(500);
 
 //Gira o Motor A no sentido anti-horario
 digitalWrite(pinMot1A, LOW);
 digitalWrite(pinMot1B, HIGH);
 delay(2000);
 //Para o motor A
 digitalWrite(pinMot1A, HIGH);
 digitalWrite(pinMot1B, HIGH);
 delay(500);
 //Gira o Motor B no sentido anti-horario
 digitalWrite(pinMot2A, LOW);
 digitalWrite(pinMot2B, HIGH);
 delay(2000);
 //Para o motor B
 digitalWrite(pinMot2A, HIGH);
 digitalWrite(pinMot2B, HIGH);
 delay(500);
}
