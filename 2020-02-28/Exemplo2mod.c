#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Declaração de Variaveis
	float base;  // Declaração e atribuição do valor da base do retângulo
	float altura; // Declaração e atribuição do valor da altura do retângulo
	float area;  // Declaração, atribuição e cálculo da área do retângulo 
	
	// Atribuição de valores e cálculo
	base = 3.5;
	altura = 2.0;
	area = base * altura;
	
	// Escrita na tela da área do retângulo
	printf("\n Um retangulo de base igual a %f", base);
	printf("\n e altura igual a %f", altura);
	printf("\n tem uma a'rea igual a %f", area);
	printf("\n");
	
	system("pause"); /* Pause the Console */
    
    return 0;
   }

