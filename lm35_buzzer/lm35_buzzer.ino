/*
*Este projeto foi feito utilizando a apostila da Robocore.
*Função: utiliza um sensor de temperatura e um buzzer,
*emite um aviso sonoro caso a temperatura seja menor que 30 graus celcius
*/

const int LM35 = 0;
const int Buzzer = 12;

float temperatura = 0;
int ADClido = 0;

void setup(){
  analogReference(INTERNAL);
  pinMode(Buzzer, OUTPUT);
}

void loop(){
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.1075268817204301;
  if(temperatura < 30){
    digitalWrite(Buzzer, HIGH);
  }else{
    digitalWrite(Buzzer, LOW);
  }
}
