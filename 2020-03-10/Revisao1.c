//Ache os 3 erros

include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Declaração de Variaveis e Atribuição de Valores
	int raio = 1;
	int pi = 3.14159265359;
	
	//Calculo
	float area = pi*raio*raio;
	
	//Mostrar Resultado
	printf("Um circulo de raio %i tem uma area igual a %f", raio, area);
	printf("\n");
	system(pause); /* Pause the Console */
    
   }

