// Bibliotecas

#include <stdio.h>
#include <stdlib.h>

// Funções Customizadas

void teste (int n, int *b, int *k)
{
	//Para b sempre ser o menor, ele tem que ser 1
	*b=1;
	*k = n / *b;
}

//Função Principal

void main(void) 
{
	// Declaração de variáveis
	int n = 0;
	int b = 0;
	int k = 0;
	
	// Atribuição de Valores
	n = 9;
		
	// Calculo dos valores
	teste(n,&b,&k);
	
	// Mostra o Resultado na tela
	printf("Para numero %i, \no maior multiplo e' k = %i \ne o menor multiplo e' b = %i'\n",n,k,b);
			
	system("pause"); /* Pause the Console */
    //return 0;
}


