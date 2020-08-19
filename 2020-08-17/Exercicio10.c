#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declaração de variaveis
	float A=0;
	float B=0;
	float apoio=0;
	// Entrada de valores de variaveis
	printf("Digite o valor do A ");
	scanf("%f", &A); 
	printf("Digite o valor do B ");
	scanf("%f", &B); 
	// Escrita na tela (Saída) antes da mudança
	printf("\nPara o valor A=%f e B=%f digitados",A,B);
	// Processamento ou Cálculo
	apoio = A;
	A = B;
	B = apoio;
	// Escrita na tela (Saída)
	printf("\ntem-se que o valor trocado e' A=%f e B=%f ",A,B);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

