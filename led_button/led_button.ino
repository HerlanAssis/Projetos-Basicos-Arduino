/*
*Este projeto foi feito utilizando a apostila do robocore.
*Funço: Acenter o led 13 da placa arduino com um botao
*/

const int ledPin = 13; //led do Pino 13
const int Botao = 2; //Botao do Pino 2
int EstadoBotao = 0; //Variavel para ler o status do pushbutton

void setup(){
  pinMode(ledPin, OUTPUT); //Pino do led sera saida
  pinMode(Botao, INPUT); //Pino do botao sera entrada
}

void loop(){
  EstadoBotao = digitalRead(Botao);
  /*novo estado do botão vai ser igual ao que
  Arduino ler no pino onde está o botão.
  Poderá ser ALTO (HIGH) se o botão estiver
  Pressionado, ou BAIXO (LOW),se o botão
  estiver solto */
  
  
  if(EstadoBotao == HIGH){  //Se botão estiver pressionado (HIGH)
    digitalWrite(ledPin, HIGH);  // acende o led do pino 13.
  }else{//se não estiver pressionado
    digitalWrite(ledPin, LOW); //deixa o led do pino 13 apagado
  }
}
