// Bibliotecas

#include <stdio.h>
#include <stdlib.h>

// Funções Customizadas
void AREA_QUADRADO(float lado)
{
	float area = lado*lado;
	
	// Escrita na tela da área do quadrado
	printf("Um quadrado de lado %f tem uma area igual a %f", lado, area);
	printf("\n");
	
}

//Função Principal

int main(void) 
{
	// Declaração e atribuição do valor do lado do quadrado
	
	//Chamada da Função AREA_QUADRADO
	AREA_QUADRADO(10);
	
	//Chamada da Função AREA_QUADRADO
	AREA_QUADRADO(5);
		
	system("pause"); /* Pause the Console */
    return 0;
   }

