#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Defini��o de Constantes
	const double pi = 3.14159265359;
	
    // Declara as vari�veis
    float raio, area;

    printf("\nCalculo do area de um circulo");
    printf("\n\nDigite o valor do raio: ");
    scanf("%f", &raio); //o simbolo & serve para atribuir o valor � variavel em sua frente
    
    
    // Calcular e escrever a area
    area = raio*raio*pi;
    printf("\nArea= %f", area);
    
	printf("\n");
	system("pause"); /* Pause the Console */

    
    return (0);
}

