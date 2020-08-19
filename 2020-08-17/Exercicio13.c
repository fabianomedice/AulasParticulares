#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declaração de variaveis
	float sal_min=0;
	float sal_pes=0;
	float quant_sal_min=0;
	// Entrada de valores de variaveis
	printf("Digite o valor do salario minimo: R$");
	scanf("%f", &sal_min); 
	printf("Digite o valor do salario da pessoa: R$");
	scanf("%f", &sal_pes); 
	// Processamento ou Cálculo
	quant_sal_min = sal_pes/sal_min;
	// Escrita na tela (Saída)
	printf("\nA pessoa que recebe R$%f ganha %f salarios minimos",sal_pes,quant_sal_min);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

