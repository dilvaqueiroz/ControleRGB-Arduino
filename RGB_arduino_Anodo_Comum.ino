int pinoR = 6; //pino digital em que o terminal R está conectado
int pinoG = 5; //pino digital em que o terminal G está conectado
int pinoB = 3; //pino digital em que o terminal B está conectado

#define NUM_BYTES   3
// comente a linha abaixo se o LED RGB que você estiver utilizando é catodo comum
#define COMMON_ANODE

char led_color[NUM_BYTES] = {0, };
unsigned char R, G, B;


// função de configuração da taxa de transferência de dados do arduino
void setup(){
  Serial.begin(9600);
}

//função de código principal que executará repetidamente
void loop(){

 while(Serial.available() == 0);
    Serial.readBytes(led_color, NUM_BYTES);

    R = (unsigned char)(led_color[0]);
    G = (unsigned char)(led_color[1]);
    B = (unsigned char)(led_color[2]);
    
    RGB(R, G, B);
}
 
// Função que produz o brilho de cada um dos LEDs de acordo com os parâmetros informados
void RGB(unsigned char vermelho, unsigned char verde, unsigned char azul){
  
  #ifdef COMMON_ANODE //se o LED RGB for definido como anodo
    vermelho = 255 - vermelho; //variável recebe o resultado da operação 255 menos o parâmetro (vermelho) informado na chamada da função
    verde = 255 - verde; //variável recebe o resultado da operação 255 menos o parâmetro(verde)informado na chamada da função
    azul = 255 - azul; //variável recebe o resultado da operação 255 menos o parâmetro(azul)informado na chamada da função
  #endif
  analogWrite(pinoR, vermelho); //define o brilho do LED de acordo com o valor informmado pela variável (vermelho)
  analogWrite(pinoG, verde); //define o brilho do LED de acordo com o valor informmado pela variável (verde)
  analogWrite(pinoB, azul); //define o brilho do LED de acordo com o valor informmado pela variável (azul)
}
