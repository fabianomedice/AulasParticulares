#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{
    // Declara as vari�veis
    int n=0;
    float q=0, a1=0, an=0;
	
	// Entrada de valores de variaveis
    printf("\nDigite o primeiro termo da PG (a1): ");
    scanf("%f", &a1); 
    printf("\nDigite a raz�o da PG (q): ");
    scanf("%f", &q); 
    printf("\nDigite qual enesimo termo (an) precisa ser calculado: ");
    scanf("%i", &n); 
    
    // Processamento ou C�lculo
    an = a1 * pow(q,n-1);
    
    // Escrita na tela (Sa�da)
    printf("\nO enesimo termo (an) e' %f ",an);
    
	printf("\n");
	system("pause"); /* Pause the Console */
}

