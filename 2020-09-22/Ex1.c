// Bibliotecas

#include <stdio.h>
#include <stdlib.h>

// Funções Customizadas

int div(int m, int n)
{
	// Processamento ou Cálculo
	if(m-n<0)
	{
		return 0;
	}
	else
	{
		return 1 + div(m-n,n);
	}
}

// Função Principal

void main(void) 
{
	// Declaração de variáveis
	int n=0, m=0, resultado=0;
	
	// Atribuição de Valores (Entrada de valores de variaveis)
	printf("\nDigite o valor de n :");
	scanf("%i", &n);
	printf("\nDigite o valor de m :");
	scanf("%i", &m);

	// Processamento ou Cálculo
	resultado = div(m,n);
	
	// Escrita na tela (Saída)
	printf("A divisao entre m=i% e n=%i e': i%\n",m,n,resultado);
	system("pause"); /* Pause the Console */
}

