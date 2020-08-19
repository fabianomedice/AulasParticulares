#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	// Declaração de variaveis
	float cateto1=0;
	float cateto2=0;
	float hipotenusa=0;
	// Entrada de valores de variaveis
	printf("Digite o valor do primeiro cateto ");
	scanf("%f", &cateto1); 
	printf("Digite o valor do segundo cateto ");
	scanf("%f", &cateto2); 
	// Processamento ou Cálculo
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	//y = sqrt(cateto1*cateto1+cateto2*cateto2);
	// Escrita na tela (Saída)
	printf("\nPara os catetos %f e %f",cateto1,cateto2);
	printf("\ntem-se a hipotenusa = %f", hipotenusa);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

