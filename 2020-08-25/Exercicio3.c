#include <stdio.h>
#include <stdlib.h>

void main(void) {
	// Declaração de variaveis
	int quant_inicial=0;
	float aluguel=0;
	float faturamento=0;
	float multas=0;
	int quant_final=0;
	// Entrada de valores de variaveis
	printf("Digite a quantidade de DVDs da locadora: ");
	scanf("%i", &quant_inicial); 
	printf("Digite o valor do aluguel da locadora: R$");
	scanf("%f", &aluguel); 
	// Processamento ou Cálculo
	faturamento = 1/3*quant_inicial*aluguel;
	multas = 10/100*aluguel*1/10*quant_inicial;
	quant_final = quant_inicial-2/100*quant_inicial+1/10*quant_inicial;
	// Escrita na tela (Saída)
	printf("\nO valor do faturamento foi de R$%f", faturamento);
	printf("\nO valor de multas foi de R$%f", multas);
	printf("\nA quantidade de novos DVDs sera %i", quant_final);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

