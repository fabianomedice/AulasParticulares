#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as vari�veis
    float lado,
    	  perimetro;

    // L� o valor do lado do quadrado
    printf("\nC�lculo do per�metro de um quadrado");
    printf("\n\nDigite o valor do lado: ");
    scanf("%f", &lado);

    // Calcular e escrever o per�metro
    perimetro= lado * 4.0;
    printf("\nPer�metro= %f", perimetro);
    
    /*Inicio da Mudan�a*/
	printf("\n");
	system("pause"); /* Pause the Console */
    /*Fim da Mudan�a*/
    
    exit (0);
}

