#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Declara��o de Variaveis
	float base;  // Declara��o e atribui��o do valor da base do ret�ngulo
	float altura; // Declara��o e atribui��o do valor da altura do ret�ngulo
	float area;  // Declara��o, atribui��o e c�lculo da �rea do ret�ngulo 
	
	// Atribui��o de valores e c�lculo
	base = 3.5;
	altura = 2.0;
	area = base * altura;
	
	// Escrita na tela da �rea do ret�ngulo
	printf("\n Um retangulo de base igual a %f", base);
	printf("\n e altura igual a %f", altura);
	printf("\n tem uma a'rea igual a %f", area);
	printf("\n");
	
	system("pause"); /* Pause the Console */
    
    return 0;
   }

