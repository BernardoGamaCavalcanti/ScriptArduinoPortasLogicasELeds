#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);

int minuto = 2500;
int primeiro = 13;
int segundo = 12;
int terceiro = 11;

void setup()
{
  lcd_1.begin(16, 2);
  pinMode(primeiro, OUTPUT);
  pinMode(segundo, OUTPUT);
  pinMode(terceiro, OUTPUT);

    lcd_1.setBacklight(1);
    lcd_1.print("Porta Logica E:");
    lcd_1.setCursor(4,1);
    lcd_1.print("0 E 0 = 0");
    delay(minuto);
    lcd_1.clear();
    delay(minuto);

    digitalWrite(segundo, 1);
    lcd_1.setBacklight(1);
    lcd_1.print("Porta Logica E:");
    lcd_1.setCursor(4,1);
    lcd_1.print("0 E 1 = 0");
    delay(minuto);
    digitalWrite(segundo, 0);
    lcd_1.clear();
    delay(minuto);

    digitalWrite(primeiro, 1);
    lcd_1.setBacklight(1);
    lcd_1.print("Porta Logica E:");
    lcd_1.setCursor(4,1);
    lcd_1.print("1 E 0 = 0");
    delay(minuto);
    digitalWrite(primeiro, 0);
    lcd_1.clear();
    delay(minuto);

    digitalWrite(primeiro, 1);
    digitalWrite(segundo, 1);
    digitalWrite(terceiro, 1);
    lcd_1.setBacklight(1);
    lcd_1.print("Porta Logica E:");
    lcd_1.setCursor(4,1);
    lcd_1.print("1 E 1 = 1");
    delay(minuto);
    digitalWrite(primeiro, 0);
    digitalWrite(segundo, 0);
    digitalWrite(terceiro, 0);
    lcd_1.clear();
    delay(minuto);
/////////////////////////////////////////////////////////////////////////////////////////////////
    digitalWrite(primeiro, 1);
    digitalWrite(terceiro, 1);
    lcd_1.setBacklight(1);
    lcd_1.print("Porta Logica OU:");
    lcd_1.setCursor(4,1);
    lcd_1.print("1 OU 0 = 1");
    delay(minuto);
    digitalWrite(primeiro, 0);
    digitalWrite(terceiro, 0);
    lcd_1.clear();
    delay(minuto);

    digitalWrite(segundo, 1);
    digitalWrite(terceiro, 1);
    lcd_1.setBacklight(1);
    lcd_1.print("Porta Logica E:");
    lcd_1.setCursor(4,1);
    lcd_1.print("0 OU 1 = 1");
    delay(minuto);
    digitalWrite(segundo, 0);
    digitalWrite(terceiro, 0);
    lcd_1.clear();
    delay(minuto);
    
    digitalWrite(primeiro, 1);
    digitalWrite(segundo, 1);
    digitalWrite(terceiro, 1);
    lcd_1.setBacklight(1);
    lcd_1.print("Porta Logica E:");
    lcd_1.setCursor(4,1);
    lcd_1.print("1 OU 1 = 1");
    delay(minuto);
    digitalWrite(primeiro, 0);
    digitalWrite(segundo, 0);
    digitalWrite(terceiro, 0);
    lcd_1.clear();
    delay(minuto);

    lcd_1.setBacklight(1);
    lcd_1.print("Porta Logica E:");
    lcd_1.setCursor(4,1);
    lcd_1.print("0 OU 0 = 0");
    delay(minuto);
    lcd_1.clear();
    delay(minuto);

    
}
void loop()
{

}





#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);// Pelo que entendi são duas bibliotécas que precisam ser chamadas no topo do script (lá em cima fora de tudo LINHA 1 e 2)

lcd_1.begin(16, 2);//esse vai no começo identificando e ativando o modelo de visor LCD

lcd_1.clear();//esse limpa o que ta escrito e vai depois de algo ter sido printado

lcd_1.setCursor(7,1); //Esse seleciona onde o cursos vai começar a escrever o texto (posição horizontal, posição vertical), lembrando que o primeiro é 0 e o segundo é 1, acho que deve ir sempre antes do que será printado com o comando abaixo

lcd_1.print("ACABOU");// esse escreve no visor LCD

lcd_1.setBacklight(0 ou 1);//apaga a luz de fundo se for 0 e acende se for 1


void setup()
{
  pinMode(8, OUTPUT);//Os pinModes (OUTPUT) são declarados dentro do void setup() para dizer para o Arduino que queremos usar aquele pino como saída
  pinMode(7, OUTPUT);//para que depois com o digitalWrite(nº do pino, 0 ou 1) possamos ligar os desligar a saída(output)
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

}

digitalWrite(logica13, 0);//esse "ativa ou desativa" o pino selecionado, piscar 1, não piscar 0


delay(minuto);//esse faz com o que foi printado antes fique em tela por mais tempo, seja isso apagar ou acender o pino ou o que foi escrito

lcd_1.blink(); //Cursor piscando

lcd_1.cursor(); //cursor de underline 

lcd_1.noCursor() //retira o cursor