#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    float temp_F, temp_C;

    printf("\nCalculo do grau Farenheit para Celsius");
    printf("\n\nDigite o valor do grau Farenheit ");
    scanf("%f", &temp_F); //o simbolo & serve para atribuir o valor à variavel em sua frente
    
    // Calcular e escrever o celsius
    temp_C = 5.0/9.0*(temp_F-32);
    printf("\nTemperatura em Celsius e' = %f", temp_C);
    
	printf("\n");
	system("pause"); /* Pause the Console */

    
    exit (0);
}

