#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    float altura, IMC;

    printf("\nCalculo do IMC de genero masculino");
    printf("\n\nDigite o valor da sua altura ");
    scanf("%f", &altura); //o simbolo & serve para atribuir o valor à variavel em sua frente
    
    // Calcular e escrever o IMC
    IMC = (72.7*altura)-58;
    printf("\nIMC do genero masculino = %f", IMC);
    
	printf("\n");
	system("pause"); /* Pause the Console */

    
    exit (0);
}

