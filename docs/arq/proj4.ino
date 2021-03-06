const int tilt = 2; //declara a variável "tilt" como tipo int, ligada na porta digital 2 do arduino
const int led = 11; //declara a variável "led" como tipo int, ligada na porta digital 11 do arduino

int estado; //declara a variável "estado" como tipo int 0; variável de estado de acionamento do botão

void setup(){

  pinMode(tilt, INPUT); //declara o pino 2, variável "tilt" como uma entrada
  pinMode(led, OUTPUT); //declara o pino 11, variável "led" como uma saída
}

void loop(){
 
  estado = digitalRead(tilt); //lê e atribui à variável estado o estado de acionamento do botão       

  if (estado == HIGH) { //verifica se o estado do sensor é acionado
    digitalWrite(led,HIGH); //se acionado, atribui à variável "led" um valor HIGH, de acionado
  } else {                  //se não,
    digitalWrite(led,LOW);  //atribui à variável "led" um valor LOW, de não acionado
  }       
}
