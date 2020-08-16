#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    float num1,num2,resp;
    char operacao;

    printf("\nCalculadora");
    printf("\n\nDigite o primeiro numero: ");
    scanf("%f", &num1); 
    printf("\n\nDigite a operacao: + (adicao), - (subtracao), * (multiplicacao), ou / (divisao) ");
    scanf(" %c", &operacao); //Se não colocar o espaço antes do %c, ele pega o enter (\n) do scanf anterior
    printf("\n\nDigite o segundo numero: ");
    scanf("%f", &num2); 
    
    switch (operacao)
	{
		case '+':
			resp = num1+num2;
			printf("\nO calculo e': %f %c %f = %f",num1,operacao,num2,resp);
		break;
		
		case '-':
			resp = num1-num2;
			printf("\nO calculo e': %f %c %f = %f",num1,operacao,num2,resp);
		break;
		
		case '*':	
			resp = num1*num2;
			printf("\nO calculo e': %f %c %f = %f",num1,operacao,num2,resp);
		break;
		
		case '/':
			resp = num1/num2;
			printf("\nO calculo e': %f %c %f = %f",num1,operacao,num2,resp);
		break;
		
		default:
			printf("\n\nOperacao Invalida ");
	} 

	printf("\n");
	system("pause"); /* Pause the Console */

    
    return 0;
}

