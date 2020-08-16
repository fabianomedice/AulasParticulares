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
	float base;
	// Atribuição de Valores
	do
	{
		printf("Digite o valor da Base\n");
		printf("Esse valor nao pode ser negativo\n");
		scanf("%f",&base);
		if(base<0)
		{
			printf("Valor de Base Negativo, favor digitar outro valor\n");
		}
	}
	while(base<0);
		
	return base;
}

float LER_ALTURA (void)
{
	// Declaração de variáveis
	float altura;
	// Atribuição de Valores
	altura=-1; //para entrar na repetição do while
	while(altura<0)
	{
		printf("Digite o valor da Altura\n");
		scanf("%f",&altura);
		if(altura<0)
		{
			printf("Valor de Altura Negativo, favor digitar outro valor\n");
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
	
	//Apresentação do Programa
	APRESENTACAO();
	
	// Atribuição de Valores
	altura = LER_ALTURA();
	base = LER_BASE();
	
	// Calculo dos valores
	CALCULAR_AREA(base,altura);
				
	system("pause"); /* Pause the Console */
}
