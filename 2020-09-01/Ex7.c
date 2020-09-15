#include <stdio.h>
#include <stdlib.h>

void main (void)
{
	float num1, num2;
	//escreva
   	printf("escreva o primeiro numero");
   	scanf("%f",& num1);
   	printf("escreva o segundo numero");
   	scanf("%f",& num2);

   	//condicoes
  	if (num1>num2)
	{
		printf("num1 e' maior que num2");
	}
	else if (num1==num2)
	{
		printf("num1 e' igual a num2");
	}
	else if (num1< num2)
	{
		printf ("num2 e' maior que num1");
	}
	system ("pause");
}

