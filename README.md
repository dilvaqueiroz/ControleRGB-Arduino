# ControleRGB-Arduino
Construção de um protótipo de lâmpada RGB para bancadas de análise sensorial de alimentos, realizado em Arduino para controle de LED RGB ânodo comum.

### Tecnologias
   - [Arduino IDE](https://www.arduino.cc/en/software)
   - [C++](https://isocpp.org/)

### Materiais
   - Arduino Uno
   - Cabo USB AM/BM
   - Led RGB Ânodo comum
   - 3 Resistores 1kΩ
   - Protoboard
   - Jumpers

### Construção do Circuito 
   
   Examine os terminais do LED RGB posicione-o de modo que o terminal maior (de alimentação) fique como sendo o segundo da sua esqueda para a direita, encaixe-o na protoboard e monte siguindo o esquema da imagem abaixo: Lembrando que esse esquema é para Diodo Ânodo Comum que utiliza 5V, no caso de uso do Cátodo Comum ligue o segundo terminal a qualquer entrada GND do arduino. Os demais estão ligados as portas digitais(PWM) 6,5 e 3 do arduino, fica a critério se quiser mudar as portas mas lembrando que os terminais só poderão serem ligados as portas digitais(PWM) (aquelas que por sua vez possuem este simbolo ~).
   
![Arduino RGB](https://user-images.githubusercontent.com/48795370/100282004-a3abde80-2f49-11eb-8c5c-aed1bf792a8a.png)

#### OBS: Não esqueça de olhar se as portas de suas ligações correspondem realmente aos números das suas variáveis inteiras nomeadas de pinoR,G e B no código.

### Instalação
Após o download da IDE Arduino conecte o dispositivo e configure o tipo do Arduino no menu Ferramentas (na aplicação com língua inglesa Tools), na opção Placa (ou Board para língua inglesa) troque para Arduino UNO em seguida na opção Porta (Serial na versão inglesa) escolha COM3 geralmente é o padrão. Em seguida abra o código e envie-o para o arduino através do botão Carregar (versão inglesa Upload).

