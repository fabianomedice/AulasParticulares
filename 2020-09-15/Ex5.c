// Bibliotecas

#include <stdio.h>
#include <stdlib.h>

// Fun��es Customizadas
int somatorio (int numero)
{
	// Processamento ou C�lculo
	if(numero==0)
	{
		return 0;
	}
	else
	{
		return numero+somatorio(numero-1);
	}
}

// Fun��o Principal

void main (void)
{
	// Declara��o de vari�veis
	int n=0, resposta=0;
	
	// Atribui��o de Valores (Entrada de valores de variaveis)
    printf("\nDigite o numero para fazer o somatorio: ");
    scanf("%i", &n);
	
	// Processamento ou C�lculo
	resposta = somatorio(n);
	
	// Escrita na tela
	printf("\nO somatorio para n=%i e' %i\n",n,resposta);
				
	system("pause"); 
    //return 0;
}

	
	
