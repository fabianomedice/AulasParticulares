#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	// Declaração de variaveis
	float razao=0;
	float termo1=0;
	float termo5=0;
	// Entrada de valores de variaveis
	printf("Digite o valor do primeiro termo da PG ");
	scanf("%f", &termo1); 
	printf("Digite o valor da razao da PG ");
	scanf("%f", &razao); 
	// Processamento ou Cálculo
	termo5 = termo1*pow(razao,(5-1));
	// Escrita na tela (Saída)
	printf("\nPara a PG de termo1=%f e razao=%f",termo1,razao);
	printf("\ntem-se o termo5 = %f", termo5);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

