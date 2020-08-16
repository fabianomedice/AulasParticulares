// Bibliotecas

#include <stdio.h>
#include <stdlib.h>

// Funções Customizadas
void APRESENTACAO (void)
{
	printf("Esse programa recebe a base e a altura do usuario para calcular sua area \n");
}

float LER_BASE (void)
{
	// Declaração de variáveis
	int sair=0;
	float base;
	
	// Atribuição de Valores
	while(base<0)
	{
		printf("Digite o valor da Base\n");
		printf("Esse valor nao pode ser negativo\n");
		scanf("%f",&base);
		if (base<0)
		{
			printf("Valor de Base Negativo, favor digitar outro valor\n");
		}
		else
		{
			sair=1;
		}
	}
		
	return base;
}

float LER_ALTURA (void)
{
	// Declaração de variáveis
	int sair=0;
	float altura;
	
	// Atribuição de Valores
	while(sair==0)
	{
		printf("Digite o valor da Altura\n");
		printf("Esse valor nao pode ser negativo\n");
		scanf("%f",&altura);
		if (altura<0)
		{
			printf("Valor de Altura Negativo, favor digitar outro valor\n");
		}
		else
		{
			sair=1;
		}
	}
		
	return altura;
}

void CALCULAR_AREA(float base, float altura)
{
	// Declaração de variáveis
	float area;
	// Atribuição de Valores
	area = base*altura;
	printf("A area eh %f \n",area);
}

//Função Principal

void main(void) 
{
	// Declaração de variáveis
	float base;
	float altura;
	float area;
	
	//Apresentação do Programa
	APRESENTACAO();
	
	// Atribuição de Valores
	altura = LER_ALTURA();
	base = LER_BASE();
	
	// Calculo dos valores
	CALCULAR_AREA(base,altura);
				
	system("pause"); /* Pause the Console */
    //return 0;
   }
