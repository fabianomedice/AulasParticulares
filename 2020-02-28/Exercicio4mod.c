#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Definição de Constantes
	const double pi = 3.14159265359;
	
	
	int raio = 1;
	float area_float = pi*raio*raio;
	double area_double = pi*raio*raio;
	
	printf("Um circulo de raio %i tem uma area igual a \n%f com a variavel float e \n%lf com a variavel double", raio, area_float,area_double);
	printf("\n");
	system("pause"); /* Pause the Console */
    
   }

