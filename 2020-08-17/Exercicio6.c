#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	// Declaração de variaveis
	float a=0;
	float b=0;
	float c=0;
	float y=0;
	// Entrada de valores de variaveis
	printf("Digite o valor da variavel a ");
	scanf("%f", &a); 
	printf("Digite o valor da variavel b ");
	scanf("%f", &b); 
	printf("Digite o valor da variavel c ");
	scanf("%f", &c); 
	// Processamento ou Cálculo
	y = a + b/(c+a) + 2*(a-b) + log2(64);
	// Escrita na tela (Saída)
	printf("\nPara as variaveis a=%f , b=%f, c=%f",a,b,c);
	printf("\ntem-se o y = %f ,", y);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

