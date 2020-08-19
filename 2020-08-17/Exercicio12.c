#include <stdio.h>
#include <stdlib.h>

int main() {
	/* ---------------------------------------
	Usando char
	--------------------------------------- */
	// Declaração de variaveis
	int hora=0;
	int min=0;
	int min_dia=0;
	char entrada_char[6]="hh:mm";
	char conversao[3]="hh";
	// Entrada de valores de variaveis
	printf("Digite o valor da hora e minuto no formato hh:mm ");
	scanf("%s", &entrada_char); 
	// Processamento ou Cálculo
	conversao[0]=entrada_char[0];
	conversao[1]=entrada_char[1];
	hora = atoi(conversao);
	conversao[0]=entrada_char[3];
	conversao[1]=entrada_char[4];
	min = atoi(conversao);
	min_dia = 60*hora+min;
	// Escrita na tela (Saída)
	printf("\nPara hora=%i e minuto=%i do valor digitado %s",hora,min,entrada_char);
	printf("\ntem-se %i minutos se passaram ate o comeco do dia",min_dia);
	printf("\n\n");
	
	/* ---------------------------------------
	Usando num
	--------------------------------------- */
	// Declaração de variaveis
	float entrada_num = 0;
	
	// Entrada de valores de variaveis
	printf("Digite o valor da hora e minuto no formato hh.mm ");
	scanf("%f", &entrada_num); 
	// Processamento ou Cálculo
	hora = entrada_num/1;
	min = entrada_num*100-hora*100;
	min_dia = 60*hora+min;
	// Escrita na tela (Saída)
	printf("\nPara hora=%i e minuto=%i do valor digitado %f",hora,min,entrada_num);
	printf("\ntem-se %i minutos se passaram ate o comeco do dia",min_dia);
	printf("\n");
	
	system("pause"); /* Pause the Console */
   }

