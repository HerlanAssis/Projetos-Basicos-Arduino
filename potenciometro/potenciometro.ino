/*
*Este projeto foi feito utilizando a apostila da Robocore.
*Função: Utiliza um poteciômetro e o led da placa,
*ele acende e apaga o led de acordo com o valor lido do potenciômetro
*/

const int pinoPotenciometro = A0;
const int led = 13;
int valorPot = 0;

void setup(){
  pinMode(led, OUTPUT);
}

void loop(){
  valorPot = analogRead(pinoPotenciometro);
  digitalWrite(led, HIGH);
  digitalWrite(led, LOW);
  delay(valorPot);
}
