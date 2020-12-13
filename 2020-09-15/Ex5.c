// Bibliotecas

#include <stdio.h>
#include <stdlib.h>

// Funções Customizadas
int somatorio (int numero)
{
	// Processamento ou Cálculo
	if(numero==0)
	{
		return 0;
	}
	else
	{
		return numero+somatorio(numero-1);
	}
}

// Função Principal

void main (void)
{
	// Declaração de variáveis
	int n=0, resposta=0;
	
	// Atribuição de Valores (Entrada de valores de variaveis)
    printf("\nDigite o numero para fazer o somatorio: ");
    scanf("%i", &n);
	
	// Processamento ou Cálculo
	resposta = somatorio(n);
	
	// Escrita na tela
	printf("\nO somatorio para n=%i e' %i\n",n,resposta);
				
	system("pause"); 
    //return 0;
}

	
	
