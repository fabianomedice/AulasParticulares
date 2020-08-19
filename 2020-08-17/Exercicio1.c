#include <stdio.h>
#include <stdlib.h>

int main() {
	/* -----------------------------
	Usando logica matem�tica
	----------------------------- */
	// Declara��o de variaveis
	int numCDU=0;
	int numUDC=0;
	int centena = 0;
	int dezena = 0;
	int unidade = 0;
	// Entrada de valores de variaveis
	printf("Digite um numero decimal inteiro com tres digitos ");
	scanf("%i", &numCDU); 
	// Processamento ou C�lculo
	centena = numCDU/100;
	dezena = numCDU/10%10;
	unidade = numCDU-centena*100-dezena*10;
	numUDC = unidade*100+dezena*10+centena;
	// Escrita na tela (Sa�da)
	printf("\nPara o numero digitado %i em CDU", numCDU);
	printf("\ntem-se %i como centena", centena);
	printf("\ntem-se %i como dezena", dezena);
	printf("\ntem-se %i como unidade", unidade);
	printf("\nentao seu inverso e' %i", numUDC);
	printf("\n");
	
	/* -----------------------------
	Usando logica de convers�o
	----------------------------- */
	// Declara��o de variaveis
	char conversao[4]="CDU";
	char apoio = "";
	// Entrada de valores de variaveis
	printf("Digite um numero decimal inteiro com tres digitos ");
	scanf("%i", &numCDU); 
	// Processamento ou C�lculo
	//itoa(A_Variavel_Inteira,A_variavel_char,A_base_matematica_escolhida)
	itoa(numCDU,conversao,10);
	apoio = conversao[0];
	conversao[0]=conversao[2];
	conversao[2]=apoio;
	numUDC = atoi(conversao);
	// Escrita na tela (Sa�da)
	printf("\nPara o numero digitado %i em CDU", numCDU);
	printf("\nentao seu inverso e' %i", numUDC);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

