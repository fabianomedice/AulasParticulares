#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declaração de variaveis
	float razao=0;
	float termo1=0;
	float termo13=0;
	// Entrada de valores de variaveis
	printf("Digite o valor do primeiro termo da PA ");
	scanf("%f", &termo1); 
	printf("Digite o valor da razao da PA ");
	scanf("%f", &razao); 
	// Processamento ou Cálculo
	termo13 = termo1+(13-1)*razao;
	// Escrita na tela (Saída)
	printf("\nPara a PA de termo1=%f e razao=%f",termo1,razao);
	printf("\ntem-se o termo13 = %f", termo13);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

