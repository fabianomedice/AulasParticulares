#include <stdio.h>
#include <stdlib.h>

int main ()
{
	//Declara��o de vari�veis
	int maior;
	
	//Atribuir valores de vari�veis
	maior = 10;
	
	//Repeti��o
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

