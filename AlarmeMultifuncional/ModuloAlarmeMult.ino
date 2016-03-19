/*
*Este projeto foi feito utilizando a apostila da Robocore.
*Função: Alarme multifuncional utilizando sensor de luz, de teperatura, buzzer e BarGraph
*/

const int LDR = 0;
const int LM35= 1;
const int Buzzer = 2;
const int led[] = {5,6,7,8,9,10,11};

int valorLDR = 0;
int ADClido = 0;
float temperatura = 0;
int pwm = 0;

void setup(){
  for(int x = 0; x < 7 ; x++){
    pinMode(led[x], OUTPUT);
  }
  pinMode(Buzzer,OUTPUT);
}

void loop(){
  valorLDR = analogRead(LDR);
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.4887585532746823;
  
  /*digitalWrite(led[0], HIGH);
  digitalWrite(led[1], HIGH);
  digitalWrite(led[2], HIGH);
  digitalWrite(led[3], HIGH);
  digitalWrite(led[4], HIGH);
  digitalWrite(led[5], HIGH);
  digitalWrite(led[6], HIGH);*/  
  
  if (temperatura > 33.00){
    digitalWrite(led[0], HIGH);
  }else{
    digitalWrite(led[0], LOW);
  }
  
  if (temperatura > 34.00){
    digitalWrite(led[1], HIGH);
  }else{
    digitalWrite(led[1], LOW);
  }
  
  if (int(temperatura) > 35.00){
    digitalWrite(led[2], HIGH);
  }else{
    digitalWrite(led[2], LOW);
  }
  
    
  if(valorLDR > 250){
    digitalWrite(led[6], LOW);
    digitalWrite(Buzzer, LOW);
  }else{
    digitalWrite(led[6], HIGH);
    digitalWrite(Buzzer, HIGH);    
  }
  
  if(valorLDR > 350){
    digitalWrite(led[5], HIGH);
  }else{
    digitalWrite(led[5], LOW);
  }
    
  if(valorLDR > 400){
    digitalWrite(led[4], HIGH);
  }else{
    digitalWrite(led[4], LOW);
  }
  
  if(valorLDR > 500){
    digitalWrite(led[3], HIGH);
  }else{
    digitalWrite(led[3], LOW);
  }

}
