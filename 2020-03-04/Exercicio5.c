#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    float a,b,c,x;

    printf("\nCalculo de uma equacao de segundo grau do tipo y=ax^2+bx+c");
    printf("\n\nDigite o parametro a: ");
    scanf("%f", &a); 
    printf("\n\nDigite o parametro b: ");
    scanf("%f", &b); 
    printf("\n\nDigite o parametro c: ");
    scanf("%f", &c); 
    
    printf("\nA equacao de segundo grau e' y= %fx^2+%fx+%f",a,b,c);
    
	printf("\n");
	system("pause"); /* Pause the Console */

    
    return 0;
}

