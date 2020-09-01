#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void) {
	// Declaração de variaveis
	float e=0;
	float m=0;
	double c=0;
	float k=0;
	float y1=0;
	float y2=0;
	float y3=0;
	// Entrada de valores de variaveis
	e=2.718281828;
	m=4.56;
	//c=1.1*pow(10,23);
	c=1.1e23;
	k=2.2*pow(10,1.25);
	// Processamento ou Cálculo
	y1=pow(e,1.23*e)+pow(e,-1.23*e);
	y2=m*pow(c,2) - sqrt(m*c) + log10(m*c);
	y3=( k+sqrt(pow(k,1.25)) ) / ( pow(k,1.25)+pow(k,1.25) );
	// Escrita na tela (Saída)
	printf("\nO valor de e = %f", e);
	printf("\nO valor de m = %f", m);
	printf("\nO valor de c = %f", c);
	printf("\nO valor de k = %f", k);
	printf("\nO valor de y1 = %f", y1);
	printf("\nO valor de y2 = %f", y2);
	printf("\nO valor de y3 = %f", y3);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

