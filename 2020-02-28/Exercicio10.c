#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Defini��o de Constantes
	const double pi = 3.14159265359;
	
    // Declara as vari�veis
    float raio, perimetro;

    printf("\nCalculo do perimetro de um circulo");
    printf("\n\nDigite o valor do raio: ");
    scanf("%f", &raio); //o simbolo & serve para atribuir o valor � variavel em sua frente
    
    
    // Calcular e escrever o per�metro
    perimetro = 2*raio*pi;
    printf("\nPerimetro= %f", perimetro);
    
	printf("\n");
	system("pause"); /* Pause the Console */

    
    return (0);
}

