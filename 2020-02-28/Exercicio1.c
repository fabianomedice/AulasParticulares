#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declara��o e atribui��o do valor da base do ret�ngulo
	float base = 3.5;
	// Declara��o e atribui��o do valor da altura do ret�ngulo
	float altura = 2.0;
	// Declara��o, atribui��o e c�lculo da �rea do ret�ngulo 
	float area = base * altura;
	float perimetro = 2 * base + 2 * altura;
	// Escrita na tela da �rea do ret�ngulo
	printf("\nUm retangulo de base igual a %f", base);
	printf("\ne altura igual a %f", altura);
	printf("\ntem uma �rea igual a %f", area);
	printf("\ne tem um perimetro igual a %f", perimetro);
	
	/*Inicio da Mudan�a*/
	printf("\n");
	system("pause"); /* Pause the Console */
    /*Fim da Mudan�a*/
   }

