#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declara��o de variaveis
	float num=0;
	float den=0;
	float resp=0;
	// Entrada de valores de variaveis
	printf("Digite o valor do numerador ");
	scanf("%f", &num); 
	printf("Digite o valor do denominador ");
	scanf("%f", &den); 
	// Processamento ou C�lculo
	resp = num/den;
	// Escrita na tela (Sa�da)
	printf("\nO numero decimal com numerador=%f e denominador=%f e' %f",num,den,resp);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

