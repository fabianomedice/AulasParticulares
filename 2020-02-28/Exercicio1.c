#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declaração e atribuição do valor da base do retângulo
	float base = 3.5;
	// Declaração e atribuição do valor da altura do retângulo
	float altura = 2.0;
	// Declaração, atribuição e cálculo da área do retângulo 
	float area = base * altura;
	float perimetro = 2 * base + 2 * altura;
	// Escrita na tela da área do retângulo
	printf("\nUm retangulo de base igual a %f", base);
	printf("\ne altura igual a %f", altura);
	printf("\ntem uma área igual a %f", area);
	printf("\ne tem um perimetro igual a %f", perimetro);
	
	/*Inicio da Mudança*/
	printf("\n");
	system("pause"); /* Pause the Console */
    /*Fim da Mudança*/
   }

