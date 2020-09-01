#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declaração de variaveis
	int num=0;
	// Entrada de valores de variaveis
	printf("Digite um numero inteiro entre 0 e 60: ");
	scanf("%i", &num); 
	
	// Processamento ou Cálculo
	if(num>=0 && num<=60)
	{
		//Valido
		if (num==60)
		{
			//é 60
			// Escrita na tela (Saída)
			printf("\nNumero digitado %i, seu sucessor eh 0", num);
		}
		else
		{
			//não é 60
			// Escrita na tela (Saída)
			printf("\nNumero digitado %i, seu sucessor eh %i", num, num+1);
		}
	}
	else
	{
		//Invalido
		// Escrita na tela (Saída)
		printf("\nNumero digitado invalido");
	}
	printf("\n");
	system("pause"); /* Pause the Console */
	return 0;
   }

