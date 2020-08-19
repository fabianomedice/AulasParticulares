#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	// Declaração de variaveis
	float lado=0;
	float perimetro=0;
	float area=0;
	float diagonal=0;
	// Entrada de valores de variaveis
	printf("Digite o valor do lado do quadrado ");
	scanf("%f", &lado); 
	// Processamento ou Cálculo
	perimetro = lado*4;
	area = pow(lado,2);
	//area = lado*lado;
	diagonal = lado*sqrt(2);
	// Escrita na tela (Saída)
	printf("\nPara o quadrado de lado %f ",lado);
	printf("\ntem-se o perimetro de %f ,", perimetro);
	printf("\na area de %f ", area);
	printf("\ne a diagonal de %f ", diagonal);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

