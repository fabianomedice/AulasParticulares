#include <stdio.h>
#include <stdlib.h>

int main ()
{
	//Declaração de variáveis
	float H;
	float numero_de_termos;
	float PG;
	float novo_valor_da_repeticao;
	int cont;

	//Atribuir valores de variáveis
	H = 1/1; //valor do primeiro termo
	PG = 3;
	numero_de_termos=10;
	
	for (cont  = 1; cont < numero_de_termos; cont++)
	{
		novo_valor_da_repeticao = 1/PG;
		H = H + novo_valor_da_repeticao;
	}
	printf("O valor do termo 10 da PG eh %f\n",H);

	system("pause");
	return 0;
}

