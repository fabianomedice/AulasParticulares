#define _USE_MATH_DEFINES //para constantes
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	// Declaração de variaveis
	float raio=0;
	float perimetro=0;
	float area=0;
	// Entrada de valores de variaveis
	printf("Digite o valor do raio do circulo ");
	scanf("%f", &raio); 
	// Processamento ou Cálculo
	perimetro = 2*M_PI*raio;
	area = (M_PI*pow(raio,2));
	//area = (M_PI*raio*raio);
	// Escrita na tela (Saída)
	printf("\nPara o raio de %f de um circulo", raio);
	printf("\ntem-se o perimetro de %f ,", perimetro);
	printf("\na area de %f ", area);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

