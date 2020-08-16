#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    float lado1, lado2, lado3;

    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1); 
    
    printf("\nDigite o segundo lado: ");
    scanf("%f", &lado2); 
    
    printf("\nDigite o terceiro lado: ");
    scanf("%f", &lado3); 
	
	/*para um triangulo existir, é necessário que a medida de qualquer um dos lados 
	seja menor que a soma das medidas dos outros dois e maior que o valor absoluto 
	da diferença entre essas medidas.*/
    if (lado1 > abs(lado2-lado3))
    {
    	if (lado1<lado2+lado3)
    	{
    		//lado 1 forma um triangulo
    		if (lado2 > abs(lado1-lado3))
    		{
    			if (lado2 < lado1+lado3)
    			{
    				//lado 2 forma um triangulo
    				if (lado3 > abs(lado1-lado2))
    				{
    					if (lado3 < lado1+lado2)
    					{
    						//printf("\n\nOs lados %f, %f e %f formam um triangulo",lado1,lado2,lado3);
    						//triangulo equilatero = Todos os lado iguais
							if (lado1 == lado2 && lado2 == lado3)
							{
								printf("\n\nOs lados %f, %f e %f formam um triangulo equilatero",lado1,lado2,lado3);
							}
							//triangulo isosceles = dois lados iguais
							else if (lado1 == lado2 || lado2 == lado3 || lado1==lado3)
							{
								printf("\n\nOs lados %f, %f e %f formam um triangulo isosceles",lado1,lado2,lado3);
							}
							//triangulo escaleno = todos os lados diferentes
							else
							{
								printf("\n\nOs lados %f, %f e %f formam um triangulo escaleno",lado1,lado2,lado3);
							}
						}
						else
						{
							printf("\n\nOs lados nao formam um triangulo");
						}
					}
					else
					{
						printf("\n\nOs lados nao formam um triangulo");
					}
				}
				else
				{
					printf("\n\nOs lados nao formam um triangulo");
				}
			}
			else
			{
				printf("\n\nOs lados nao formam um triangulo");
			}
		}
		else
		{
			printf("\n\nOs lados nao formam um triangulo");
		}
	}
    else
	{
		printf("\n\nOs lados nao formam um triangulo");
	}
    
	printf("\n");
	system("pause"); /* Pause the Console */

    
    return 0;
}

