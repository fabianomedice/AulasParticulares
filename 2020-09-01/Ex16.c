#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Declara as vari�veis
    int num=0, resposta=0;

	// Entrada de valores de variaveis
    printf("Digite um numero: ");
    scanf("%i", &num); 
    
    // Processamento ou C�lculo
    if(num%2==0)
    {
    	//numero par
    	resposta = pow(num,2);
    	// Escrita na tela (Sa�da)
    	printf("\n Por o numero ser par, seu quadrado e' %i",resposta);
	}
	else
	{
		//numero impar
		resposta = pow(num,3);
		// Escrita na tela (Sa�da)
		printf("\n Por o numero ser impar, seu cubo e' %i",resposta);
	}
	printf("\n");
	system("pause"); /* Pause the Console */   
    return 0;
}

