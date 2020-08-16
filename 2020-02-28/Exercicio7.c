#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    float base, altura, perimetro;

    printf("\nCalculo do perimetro de um retangulo");
    printf("\n\nDigite o valor da base: ");
    scanf("%f", &base); //o simbolo & serve para atribuir o valor à variavel em sua frente
    
    printf("\n\nDigite o valor da altura: ");
    scanf("%f", &altura); //o simbolo & serve para atribuir o valor à variavel em sua frente
    
    // Calcular e escrever o perímetro
    perimetro= base *2 + altura *2;
    printf("\nPerimetro= %f", perimetro);
    
	printf("\n");
	system("pause"); /* Pause the Console */

    
    exit (0);
}

