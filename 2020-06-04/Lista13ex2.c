// Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //para poder usar a variável bool

// Funções Customizadas

// bool é pq eu quero q a resposta seja verdadeira (true) ou falsa (false)
bool TestaSeEhPrimo (int numero)
{
	bool resposta = true; //de padrão, todo número chamado é primo
	
	//confiro se é primo
	
	int i = 2; //peguei o primeiro valor primo
	
	//Se ele for primo ou não, ele vai ser divisivel por 1 e ele mesmo, então só olho número entre 1 e o número
	//o && é de AND, ou seja, ele tem q ser menor que o número e resposta não pode ser false (ela começa com true)
	while (i<numero && resposta)
	{
		//confiro se o numero eh divisivel por i (resto = 0)
		if(numero%i == 0)
		{
			//ele não é primo
			resposta = false;
			
			//pela a resposta ser false, vai sair do while e não vai ficar repetindo um monte de número atoa
			//Como o primeiro i=2, de cara, já tira todos os números pares na primeira linha
		}
		i = i+1; //acaba esse valor de i e vai para o próximo
	}
	
	return resposta; //devolve se o número é primo ou não
}


void primo (int m, int *p1, int *p2)
{
	int i;
	bool TestePrimo;
	
	//Achando o maior primo menor que m (p1)
	i= m -1; //pega o primeiro número menor que m
	TestePrimo = false;
	
	//Procura todos os número entre m e 1
	//o !TestePrimo significa NOT TestePrimo, ou seja, como ele começa com false, ele lê NOT FALSE, ou seja TRUE
	while(i>1 && !TestePrimo)
	{
		TestePrimo = TestaSeEhPrimo(i); //procura para saber se o numero i é primo.
		//se ele for primo, ele fica TRUE e o NOT TestePrimo vira NOT True, ou seja, false, e sai do while
		
		//se eu não achar o número primo (NOT FALSE = True), ele olha o proximo
		if(!TestePrimo)
		{
			i = i-1; //acaba esse valor de i e vai para o próximo
		}
		// Se eu achar (NOT TRUE = False) eu não preciso mexer no i, pq ele é meu maior número primo
	}
	//da o valor do i para o p1
	*p1=i;
	
	
	//Achando o menor primo maior que m (p2)
	
	//resesta os valores das variáveis
	i= m +1; //pega o primeiro número maior que m
	TestePrimo = false;
	
	//Procura cada hora um número maior que m
	//o !TestePrimo significa NOT TestePrimo, ou seja, como ele começa com false, ele lê NOT FALSE, ou seja TRUE
	while(!TestePrimo)
	{
		TestePrimo = TestaSeEhPrimo(i); //procura para saber se o numero i é primo.
		//se ele for primo, ele fica TRUE e o NOT TestePrimo vira NOT True, ou seja, false, e sai do while
		
		//se eu não achar o número primo (NOT FALSE = True), ele olha o proximo
		if(!TestePrimo)
		{
			i = i+1; //acaba esse valor de i e vai para o próximo
		}
		// Se eu achar (NOT TRUE = False) eu não preciso mexer no i, pq ele é meu maior número primo
	}
	//da o valor do i para p2
	*p2=i;
}

//Função Principal

void main(void) 
{
	// Declaração de variáveis
	int p1 = 0;
	int p2 = 0;
	int m = 0;
	
	// Atribuição de Valores
	m = 9;
		
	// Calculo dos valores
	primo(m,&p1,&p2);
	
	// Mostra o Resultado na tela
	printf("Para numero %i, \no maior primo menor que ele e' %i \ne o menor primo maior que ele e' %i'\n",m,p1,p2);
			
	system("pause"); /* Pause the Console */
    //return 0;
}


