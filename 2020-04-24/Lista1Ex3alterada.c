// Bibliotecas

#include <stdio.h>
#include <stdlib.h>

// Fun��es Customizadas
void AREA_QUADRADO(float lado)
{
	float area = lado*lado;
	
	// Escrita na tela da �rea do quadrado
	printf("Um quadrado de lado %f tem uma area igual a %f", lado, area);
	printf("\n");
	
}

//Fun��o Principal

int main(void) 
{
	// Declara��o e atribui��o do valor do lado do quadrado
	
	//Chamada da Fun��o AREA_QUADRADO
	AREA_QUADRADO(10);
	
	//Chamada da Fun��o AREA_QUADRADO
	AREA_QUADRADO(5);
		
	system("pause"); /* Pause the Console */
    return 0;
   }

