// Bibliotecas

#include <stdio.h>
#include <stdlib.h>

// Fun��es Customizadas

double Fatorial (int n)
{
	// Declara��o de vari�veis
	double resposta=0;
		
	// Processamento ou C�lculo
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

//Fun��o Principal

void main(void) 
{
	// Declara��o de vari�veis
	int num=0;
	double num_fatorial=0;
	
	// Atribui��o de Valores (Entrada de valores de variaveis)
    printf("\nDigite o numero para o calculo de fatorial: ");
    scanf("%i", &num);

	// Processamento ou C�lculo
	num_fatorial = Fatorial(num);
	
	// Escrita na tela (Sa�da)
	printf("\n%i! = %lf\n", num, num_fatorial);
				
	system("pause"); /* Pause the Console */
    //return 0;
}

