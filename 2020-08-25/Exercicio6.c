#define _USE_MATH_DEFINES //para constantes matemáticas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void) {
	// Declaração de variaveis
	float angulo=0;
	float y1=0;
	float y2=0;
	float y4=0;
	float y5=0;
	// Entrada de valores de variaveis
	printf("Digite o valor do angulo em graus: ");
	scanf("%f", &angulo); 
	// Processamento ou Cálculo
	y1=cos(M_PI/180*angulo);
	y2=atan(M_PI/180*angulo);
	y4=sin(M_PI/180*angulo)+sin(pow(M_PI/180*angulo,2))+sin(pow(M_PI/180*angulo,3))+sin(pow(M_PI/180*angulo,4));
	y5=sin(M_PI/180*angulo)+pow(sin(M_PI/180*angulo),2)+pow(sin(M_PI/180*angulo),3)+pow(sin(M_PI/180*angulo),4);
	// Escrita na tela (Saída)
	printf("\nPara o angulo de %f graus, tem-se", angulo);
	printf("\nO valor de y1 = %f", y1);
	printf("\nO valor de y2 = %f", y2);
	printf("\nO valor de y4 = %f", y4);
	printf("\nO valor de y5 = %f", y5);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

