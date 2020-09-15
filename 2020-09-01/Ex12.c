#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis
    char char1, char2;
    int ASCII_char1, ASCII_char2;
	
	// Entrada de valores de variaveis
    printf("Digite o primeiro char: ");
    scanf("%c", &char1); 
    printf("Digite o segundo char: ");
    scanf(" %c", &char2); 
        
    // Processamento ou Cálculo
    // Trabalhando com tabela ASCII
	ASCII_char1 = char1;
	ASCII_char2 = char2;
    // Trabalhando com lower case
    if(ASCII_char1>=65 && ASCII_char1<=90)
    {
    	ASCII_char1=ASCII_char1+32;
	}
	if(ASCII_char2>=65 && ASCII_char2<=90)
    {
    	ASCII_char2=ASCII_char2+32;
	}
	// Escrevendo em ordem alfabetica
	if(ASCII_char1<ASCII_char2)
	{
		// Escrita na tela (Saída)
    	printf("\nO char '%c' vem primeiro que o char '%c'",char1, char2);
	}
	else if (ASCII_char1==ASCII_char2)
	{
		// Escrita na tela (Saída)
		printf("\nO char '%c' e' o mesmo que o char '%c'",char2, char1);
	}
	else
	{
		// Escrita na tela (Saída)
		printf("\nO char '%c' vem primeiro que o char '%c'",char2, char1);
	}
    printf("\nO char '%i' e' que o char '%i'",ASCII_char1, ASCII_char2);
	printf("\n");
	system("pause"); /* Pause the Console */   
    return 0;
}

