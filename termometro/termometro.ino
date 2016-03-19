/*
*Este projeto foi feito utilizando a apostila da Robocore.
*Função: Termômetro utilizando sensor de teperatura, buzzer e BarGraph
*/

const int LM35 = 0;
const int Buzzer = 12;
const int LED[] = {2,3,4,5,6,7,8,9,10,11};

float temperatura = 0;
int ADClido = 0;
int count = 0;

void setup(){
  analogReference(INTERNAL);
  pinMode(Buzzer, OUTPUT);
  for(int x = 0; x < 10; x++){
    pinMode(LED[x], OUTPUT);
  }
  
  Serial.begin(9600);
}

void loop(){
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.107526817204301;
  
  float baseTemperatura = 30.00;
  
  for(int i = 0; i < 10; i++){
    if(temperatura > baseTemperatura){
      digitalWrite(LED[10 - 1 - i], HIGH);
    }else{
      digitalWrite(LED[10 - 1 - i], LOW);
    }
    
    baseTemperatura += 0.50;
  }
  
  if(temperatura > 35.5){
    digitalWrite(Buzzer, HIGH);
  }else{
    digitalWrite(Buzzer, LOW);
  }
  
  if(count == 5){
    Serial.print("Temperatura = ");
    Serial.print(temperatura);
    Serial.println(" *C");

    count = 0;
  }
  
  delay(5000);
  count++;
}
