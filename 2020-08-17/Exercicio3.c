#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	// Declaração de variaveis
	float base=0;
	float altura=0;
	float perimetro=0;
	float area=0;
	float diagonal=0;
	// Entrada de valores de variaveis
	printf("Digite o valor da base do retangulo ");
	scanf("%f", &base); 
	printf("Digite o valor da altura do retangulo ");
	scanf("%f", &altura); 
	// Processamento ou Cálculo
	perimetro = (base+altura)*2;
	area = base*altura;
	diagonal = sqrt(pow(base,2)+pow(altura,2));
	//diagonal = sqrt(base*base+altura*altura);
	// Escrita na tela (Saída)
	printf("\nPara a base de %f e altura de %f de um retangulo", base,altura);
	printf("\ntem-se o perimetro de %f ,", perimetro);
	printf("\na area de %f ", area);
	printf("\ne a diagonal de %f ", diagonal);
	printf("\n");
	system("pause"); /* Pause the Console */
   }

