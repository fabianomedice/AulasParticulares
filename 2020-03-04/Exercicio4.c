#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    int ano, resto4, resto100, resto400;

    printf("\nCalculo de ano bissexto");
    printf("\n\nDigite o ano: ");
    scanf("%i", &ano); 
    
    resto4 = ano%4; //o simbolo % é o resto da divisão inteira
    resto100 = ano%100;
    resto400 = ano%400;
        
    if (resto400 == 0)
    {
    	printf("\n O ano digitado e' bissexto");
	}
	else
	{
		if(resto4 == 0)
    	{
    		if(resto100 != 0)
    		{
    			printf("\n O ano digitado e' bissexto.");
			}
			else
			{
				printf("\n O ano digitado nao e' bissexto.");
			}
		}
    	else
    	{
    		printf("\n O ano digitado nao e' bissexto.");
		}	
	}
    
	printf("\n");
	system("pause"); /* Pause the Console */

    
    return 0;
}

