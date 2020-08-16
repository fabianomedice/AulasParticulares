#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    float lado,
    	  perimetro;

    // Lê o valor do lado do quadrado
    printf("\nCálculo do perímetro de um quadrado");
    printf("\n\nDigite o valor do lado: ");
    scanf("%f", &lado);

    // Calcular e escrever o perímetro
    perimetro= lado * 4.0;
    printf("\nPerímetro= %f", perimetro);
    
    /*Inicio da Mudança*/
	printf("\n");
	system("pause"); /* Pause the Console */
    /*Fim da Mudança*/
    
    exit (0);
}

