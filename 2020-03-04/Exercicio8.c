#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    float num1,num2,num3;

    printf("\nCalculo do maior entre tres valores lidos");
    printf("\n\nDigite o primeiro numero: ");
    scanf("%f", &num1); 
    printf("\n\nDigite o segundo numero: ");
    scanf("%f", &num2); 
    printf("\n\nDigite o terceiro numero: ");
    scanf("%f", &num3); 
    
    if(num1>num2)
    {
    	//num1 > num2, falta num3
    	if(num2>num3)
    	{
    		//num1 > num2 > num3
    		printf("O numero %f e' o segundo maior entre os numeros %f,%f,%f",num2,num1,num2,num3);
		}
		else
		{
			if (num1>num3)
			{
				//num1 > num3 > num2
				printf("O numero %f e' o segundo maior entre os numeros %f,%f,%f",num3,num1,num2,num3);
			}
			else
			{
				//num3> num1 > num2
				printf("O numero %f e' o segundo maior entre os numeros %f,%f,%f",num1,num1,num2,num3);
			}
			
		}
	}
	else
	{
		//num2 > num1, falta num3
		if(num1>num3)
    	{
    		//num2 > num1 > num3
    		printf("O numero %f e' o segundo maior entre os numeros %f,%f,%f",num1,num1,num2,num3);
		}
		else
		{
			if(num2>num3)
			{
				//num2 > num3 > num1 
				printf("O numero %f e' o segundo maior entre os numeros %f,%f,%f",num3,num1,num2,num3);
			}
			else
			{
				//num3 > num2 > num1 
				printf("O numero %f e' o segundo maior entre os numeros %f,%f,%f",num2,num1,num2,num3);
			}
		}
	}

	printf("\n");
	system("pause"); /* Pause the Console */

    
    return 0;
}

