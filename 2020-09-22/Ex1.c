// Bibliotecas

#include <stdio.h>
#include <stdlib.h>

// Fun��es Customizadas

int div(int m, int n)
{
	// Processamento ou C�lculo
	if(m-n<0)
	{
		return 0;
	}
	else
	{
		return 1 + div(m-n,n);
	}
}

// Fun��o Principal

void main(void) 
{
	// Declara��o de vari�veis
	int n=0, m=0, resultado=0;
	
	// Atribui��o de Valores (Entrada de valores de variaveis)
	printf("\nDigite o valor de n :");
	scanf("%i", &n);
	printf("\nDigite o valor de m :");
	scanf("%i", &m);

	// Processamento ou C�lculo
	resultado = div(m,n);
	
	// Escrita na tela (Sa�da)
	printf("A divisao entre m=i% e n=%i e': i%\n",m,n,resultado);
	system("pause"); /* Pause the Console */
}

