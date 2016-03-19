/*
*Este projeto foi feito utilizando a apostila da Robocore.
*Função: Emite sons em diferentes toanlizades pelo buzzer representando a temperatura.
*/

const int LM35 = 0;
const int Buzzer = 12;


float temperatura = 0;
float TempAntiga = 0;

int ADClido = 0;
int count = 0;

void setup(){
  pinMode(Buzzer,OUTPUT);
  analogReference(INTERNAL);
  
  Serial.begin(9600);
}

void loop(){
  ADClido = analogRead(LM35);
  TempAntiga = temperatura;
  temperatura = ADClido * 0.1075268817204301;
  
  /*delay(2000);
  tone(Buzzer,262,200); //DO
  delay(200);
  tone(Buzzer,294,300); //RE
  delay(200);
  tone(Buzzer,330,300); //MI
  delay(200);
  tone(Buzzer,349,300); //FA
  delay(300);
  tone(Buzzer,392,200); //SOL
  delay(200);*/
  
  if(count == 5){
    Serial.print("Temperatura = ");
    Serial.print(temperatura);
    Serial.println(" *C");
     
    tempEmSom(temperatura);
    count = 0;
  }
  
  delay(5000);
  count++;
}

void tempEmSom(float temp){
  int dez = int(temp) / 10;
  int uni = int(temp) % 10;
  //int dec = ( int(temp * 100) % 100) / 10; Calculo dos decimais
  
  for(int i = 0; i < dez; i++){ // Informa as Dezenas do tempo
    tone(Buzzer,294,300); //RE
    delay(1000);
  }
  
  for(int i = 0; i < uni; i++){//Informar as Unidades do tempo
    tone(Buzzer,262,200); //DO
    delay(800);
  }
  
  /*for(int i = 0; i < dec; i++){
    tone(Buzzer,330,300); //MI
    delay(600);
  }*/
}
