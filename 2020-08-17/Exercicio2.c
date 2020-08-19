#include <stdio.h>
#include <stdlib.h>

int main() {
	// Declaração de variaveis
	float salario_minimo=0;
	float kw_gasto=0;
	float valor_kw=0;
	float valor_kw_gasto=0;
	float valor_kw_gasto_desconto=0;
	// Entrada de valores de variaveis
	printf("Digite o valor do salario minimo atual ");
	scanf("%f", &salario_minimo); 
	printf("Digite a quantidade de kW de energia gasto ");
	scanf("%f", &kw_gasto); 
	// Processamento ou Cálculo
	valor_kw = salario_minimo/700;
	valor_kw_gasto = valor_kw*kw_gasto;
	valor_kw_gasto_desconto = 0.9*valor_kw_gasto;
	// Escrita na tela (Saída)
	printf("\nPara o salario minimo de %f", salario_minimo);
	printf("\ntem-se %f R$/kw", valor_kw);
	printf("\ne, para %f kw gastos", kw_gasto);
	printf("\ntem-se a conta de R$%f ", valor_kw_gasto);
	printf("\nou de R$%f com 10 de desconto a vista", valor_kw_gasto_desconto);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

