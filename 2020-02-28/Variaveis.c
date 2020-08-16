// Declaração de bibliotecas
/* #include <nome da biblioteca> */

#include <stdio.h> // standard input-output header
/*Biblioteca utilizada para ter os inputs (scanf) e outputs (printf) no codigo*/

#include <stdlib.h> // standard library header
/*emulador da prompt do sistema operacional que você está programando, 
caso seja Windows ele emula todos os comandos do DOS, 
se você estiver programando no Linux, quem será emulado é o Terminal. */

int main() {
	
	// Declaração de Variaveis
	float numerador; 
	float denominador;

	// Atribuição de valores e cálculo
	numerador = 7;
	denominador = 3;
	
	int i_int = numerador/denominador;
	float f_float = numerador/denominador;
	double lf_double = numerador/denominador;
	
	// Mostra os tamanhos de bytes dos tipos dos dados
	printf("Tamanho do int e' %lu bytes\n", sizeof(int));
	printf("Tamanho do char e' %lu bytes\n", sizeof(char));
	printf("Tamanho do float e' %lu bytes\n", sizeof(float));
	printf("Tamanho do double e' %lu bytes\n", sizeof(double));

	
	// Escrita na tela
	printf("\nUma divisao de %i com %i da:", numerador,denominador); //usando int para as variaveis
	printf("\nUma divisao de %f com %f da:", numerador,denominador); //usando float para as variaveis
	//printf("\nUma divisao de %lf com %lf da:", numerador,denominador); //usando double para as variaveis
	
	printf("\n%i para variavel int (inteiro) com range [-32767 +32767] ou 2 bytes", i_int);
	printf("\n%f para variavel float (reais ou numero com virgula) com range [3.4*10^-38 3.4*10^38] ou 4 bytes", f_float);
	printf("\n%lf para variavel double (dobro de precisao do float) com range [1.7*10^-308  1.7*10^308] ou 8 bytes", lf_double);
	printf("\n");
	
	system("pause"); /* Pause the Console */
	/* Pode ser substituida com a getch() da biblioteca conio.h */
	
	/* Outro exemplo da stdlib.h para visualizar melhor */
    // system("calc");
    
    char c_char = 'A'; // aspas simples '_' servem para mostrar char por char
    /* É igual utilizar
    char c_char = 65; // valor da tabela ascii
	*/
	char s_string[] = "0123456789";  //aspas duplas "_" servem para mostrar string
	/* 
	10 caracteres mais o caracter terminador \0 (nulo)
    É igual utilizar 
	char s_string[] = {'0','1','2','3','4','5','6','7','8','9','\0'}; //array de chars é {} e array de numeros é []
	char s_string[11] = "0123456789"; 
	char s_string[11] = {'0','1','2','3','4','5','6','7','8','9'};
	char s_string[11] = {'0','1','2','3','4','5','6','7','8','9','\0'};
	*/
	
    printf("\nPara variavel de escrita temos");
    printf("\n%c para variavel char, onde so' ha' uma char de 1 bit, de acordo com a tabela ASCII", c_char);
    printf("\n%s para variavel string, com o numero de chars que forem configurados", s_string);
	printf("\n");
    
    system("pause"); /* Pause the Console */
    
    return 0;
   }

