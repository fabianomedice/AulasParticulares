#include <stdio.h>
#include <stdlib.h>

int main ()
{
	//Declaração de variáveis
	int maior;
	
	//Atribuir valores de variáveis
	maior = 10;
	
	//Repetição
	do
	{
		//Escrever na tela
		printf ("O numero eh %i \n",maior);
		maior = maior -1;
	}
	while(maior>0);

	system("pause");
	return 0;
}

