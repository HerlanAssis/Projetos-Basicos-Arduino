/*
*Este projeto foi feito utilizando a apostila do robocore
*Função: Acender led se um botão for precionado.
*/

const int ledPin3 = 13; //led do Pino 13
const int ledPin2 = 12;
const int ledPin1 = 11;

const int Botao3 = 4;
const int Botao2 = 3;
const int Botao1 = 2; //Botao do Pino 2

int EstadoBotao3 = 0; //Variavel para ler o status do pushbutton
int EstadoBotao2 = 0;
int EstadoBotao1 = 0;

void setup(){
  pinMode(ledPin1, OUTPUT); //Pino do led sera saida
  pinMode(ledPin2, OUTPUT); //Pino do led sera saida
  pinMode(ledPin3, OUTPUT); //Pino do led sera saida
  
  pinMode(Botao1, INPUT); //Pino do botao sera entrada
  pinMode(Botao2, INPUT); //Pino do botao sera entrada
  pinMode(Botao3, INPUT); //Pino do botao sera entrada
}

void loop(){
  EstadoBotao1 = digitalRead(Botao1);
  EstadoBotao2 = digitalRead(Botao2);
  EstadoBotao3 = digitalRead(Botao3);
  /*novo estado do botão vai ser igual ao que
  Arduino ler no pino onde está o botão.
  Poderá ser ALTO (HIGH) se o botão estiver
  Pressionado, ou BAIXO (LOW),se o botão
  estiver solto */
  
  
  if(EstadoBotao1 == HIGH){  //Se botão estiver pressionado (HIGH)
    digitalWrite(ledPin1, HIGH);  // acende o led do pino 13.
  }else{//se não estiver pressionado
    digitalWrite(ledPin1, LOW); //deixa o led do pino 13 apagado
  }
  
  if(EstadoBotao2 == HIGH){  //Se botão estiver pressionado (HIGH)
    digitalWrite(ledPin2, HIGH);  // acende o led do pino 13.
  }else{//se não estiver pressionado
    digitalWrite(ledPin2, LOW); //deixa o led do pino 13 apagado
  }
  
  if(EstadoBotao3 == HIGH){  //Se botão estiver pressionado (HIGH)
    digitalWrite(ledPin3, HIGH);  // acende o led do pino 13.
  }else{//se não estiver pressionado
    digitalWrite(ledPin3, LOW); //deixa o led do pino 13 apagado
  }
}
