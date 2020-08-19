#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declaração de variaveis
	float num=0;
	float den=0;
	float resp=0;
	// Entrada de valores de variaveis
	printf("Digite o valor do numerador ");
	scanf("%f", &num); 
	printf("Digite o valor do denominador ");
	scanf("%f", &den); 
	// Processamento ou Cálculo
	resp = num/den;
	// Escrita na tela (Saída)
	printf("\nO numero decimal com numerador=%f e denominador=%f e' %f",num,den,resp);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

