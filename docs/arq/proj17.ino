int led[] = {11, 10, 9}; //declara a variável "led" como um vetor, contendo o número das portas onde o led está conectado
int quantidade = 3;  //declara a variável "quantidade" como int 3, o número de leds conectados no sistema, declatados no vetor "leds"

void setup() {
  for (int pino = 0; pino < quantidade; pino++) { //declara pino por pino como saída, desde 0 até o número total de pinos
    pinMode(led[pino], OUTPUT); //declara o pino de acordo com a posição do vetor como uma saída
  }
}

void loop() {

 for (int pino = 0; pino < quantidade; pino++) {//percorre o vetor, de posição em posição, do 0 à quantidade total de pinos
    digitalWrite(led[pino], HIGH); //determina o acionamento do pino, variável "led" como HIGH, alto, ligado
    delay(1000); //pausa o programa por 1000 milisegundos, 1 segundo
    digitalWrite(led[pino], LOW); //determina o desacionamento do pino, variável "led" como LOW, baixo, desligado

  }
  }
