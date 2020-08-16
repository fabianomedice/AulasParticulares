#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    float lado, area;

    printf("\nCalculo do area de um quadrado");
    printf("\n\nDigite o valor do lado: ");
    scanf("%f", &lado); //o simbolo & serve para atribuir o valor à variavel em sua frente
    
    
    // Calcular e escrever a area
    area = lado*lado;
    printf("\nArea= %f", area);
    
	printf("\n");
	system("pause"); /* Pause the Console */

    
    return (0);
}

