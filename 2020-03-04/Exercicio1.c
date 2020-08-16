#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1); 
    
    printf("\nDigite o segundo numero: ");
    scanf("%f", &num2); 
        
    if (num1 > num2)
    {
    	printf("\n\nO primeiro numero %f e' maior que o segundo numero %f.",num1,num2);
	}
    else
	{
		printf("\n\nO segundo numero %f e' maior que o primeiro numero %f.",num2,num1);
	}
    
	printf("\n");
	system("pause"); /* Pause the Console */

    
    return 0;
}

