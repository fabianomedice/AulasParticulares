// Bibliotecas

#include <stdio.h>
#include <stdlib.h>

// Funções Customizadas

double Fatorial (int n)
{
	// Declaração de variáveis
	double resposta=0;
		
	// Processamento ou Cálculo
	if(n==1)
	{
		resposta = 1;
	}
	else
	{
		resposta = n*Fatorial(n-1);
	}
	return resposta;
}

//Função Principal

void main(void) 
{
	// Declaração de variáveis
	int num=0;
	double num_fatorial=0;
	
	// Atribuição de Valores (Entrada de valores de variaveis)
    printf("\nDigite o numero para o calculo de fatorial: ");
    scanf("%i", &num);

	// Processamento ou Cálculo
	num_fatorial = Fatorial(num);
	
	// Escrita na tela (Saída)
	printf("\n%i! = %lf\n", num, num_fatorial);
				
	system("pause"); /* Pause the Console */
    //return 0;
}

