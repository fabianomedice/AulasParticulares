#include <stdio.h>
#include <stdlib.h>
#include <string.h> //usado para comparar os chars - strncmp( ) - STRing N chars CoMPare - ou strcmp( ) - STRing CoMPare
#include <ctype.h> //usado para colocar o char em uppercase - toupper( ) - ou lower case - tolower()

int main()
{
    // Declara as variáveis
    char palavra1[11], palavra2[11], teste1[11]="", teste2[11]="";

	// Entrada de valores de variaveis
    printf("Digite a primeira palavra (max 10 letras): ");
    scanf("%s", &palavra1); 
    printf("Digite o segundo palavra (max 10 letras): ");
    scanf(" %s", &palavra2); 
    
    
    // Processamento ou Cálculo
    // Trabalhando com lower case
    int i;
    for(i = 0; palavra1[i]!='\0'; i++)
	{
		teste1[i] = tolower(palavra1[i]);
	}
	for(i = 0; palavra2[i]!='\0'; i++)
	{
		teste2[i] = tolower(palavra2[i]);
	}
    // Escrevendo em ordem alfabetica
	if(strcmp(teste1,teste2)<0)
	{
		// Escrita na tela (Saída)
    	printf("\nA palavra '%s' vem primeiro que a palavra '%s'",palavra1, palavra2);
	}
	else if (strcmp(teste1,teste2)==0)
	{
		// Escrita na tela (Saída)
		printf("\nA palavra '%s' e' a mesmo que a palavra '%s'",palavra1, palavra2);
	}
	else
	{
		// Escrita na tela (Saída)
		printf("\nA palavra '%s' vem primeiro que a palavra '%s'",palavra2, palavra1);
	}
	printf("\n");
	system("pause"); /* Pause the Console */   
    return 0;
}

