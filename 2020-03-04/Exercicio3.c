#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    float altura, IMC;
    char sexo;

    printf("\nCalculo do IMC");
    printf("\n\nDigite o sexo: F (para Feminino) e M (para Masculino) : ");
    scanf("%c", &sexo); 
        
    if (sexo == 'M')
    {
    	printf("\n\nDigite o valor da sua altura ");
    	scanf("%f", &altura); 
    
    	IMC = (72.7*altura)-58;
    	printf("\nIMC do genero masculino = %f", IMC);
	}
    else if (sexo == 'F')
    {
    	printf("\n\nDigite o valor da sua altura ");
    	scanf("%f", &altura); 
    	IMC = (62.1*altura)-44.7;
    	printf("\nIMC do genero feminino = %f", IMC);
	}
	else
	{
		printf("\nSexo digitado errado");
	}
    
	printf("\n");
	system("pause"); /* Pause the Console */

    
    return 0;
}

