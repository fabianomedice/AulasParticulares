// Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //para poder usar a vari�vel bool

// Fun��es Customizadas

// bool � pq eu quero q a resposta seja verdadeira (true) ou falsa (false)
bool TestaSeEhPrimo (int numero)
{
	bool resposta = true; //de padr�o, todo n�mero chamado � primo
	
	//confiro se � primo
	
	int i = 2; //peguei o primeiro valor primo
	
	//Se ele for primo ou n�o, ele vai ser divisivel por 1 e ele mesmo, ent�o s� olho n�mero entre 1 e o n�mero
	//o && � de AND, ou seja, ele tem q ser menor que o n�mero e resposta n�o pode ser false (ela come�a com true)
	while (i<numero && resposta)
	{
		//confiro se o numero eh divisivel por i (resto = 0)
		if(numero%i == 0)
		{
			//ele n�o � primo
			resposta = false;
			
			//pela a resposta ser false, vai sair do while e n�o vai ficar repetindo um monte de n�mero atoa
			//Como o primeiro i=2, de cara, j� tira todos os n�meros pares na primeira linha
		}
		i = i+1; //acaba esse valor de i e vai para o pr�ximo
	}
	
	return resposta; //devolve se o n�mero � primo ou n�o
}


void primo (int m, int *p1, int *p2)
{
	int i;
	bool TestePrimo;
	
	//Achando o maior primo menor que m (p1)
	i= m -1; //pega o primeiro n�mero menor que m
	TestePrimo = false;
	
	//Procura todos os n�mero entre m e 1
	//o !TestePrimo significa NOT TestePrimo, ou seja, como ele come�a com false, ele l� NOT FALSE, ou seja TRUE
	while(i>1 && !TestePrimo)
	{
		TestePrimo = TestaSeEhPrimo(i); //procura para saber se o numero i � primo.
		//se ele for primo, ele fica TRUE e o NOT TestePrimo vira NOT True, ou seja, false, e sai do while
		
		//se eu n�o achar o n�mero primo (NOT FALSE = True), ele olha o proximo
		if(!TestePrimo)
		{
			i = i-1; //acaba esse valor de i e vai para o pr�ximo
		}
		// Se eu achar (NOT TRUE = False) eu n�o preciso mexer no i, pq ele � meu maior n�mero primo
	}
	//da o valor do i para o p1
	*p1=i;
	
	
	//Achando o menor primo maior que m (p2)
	
	//resesta os valores das vari�veis
	i= m +1; //pega o primeiro n�mero maior que m
	TestePrimo = false;
	
	//Procura cada hora um n�mero maior que m
	//o !TestePrimo significa NOT TestePrimo, ou seja, como ele come�a com false, ele l� NOT FALSE, ou seja TRUE
	while(!TestePrimo)
	{
		TestePrimo = TestaSeEhPrimo(i); //procura para saber se o numero i � primo.
		//se ele for primo, ele fica TRUE e o NOT TestePrimo vira NOT True, ou seja, false, e sai do while
		
		//se eu n�o achar o n�mero primo (NOT FALSE = True), ele olha o proximo
		if(!TestePrimo)
		{
			i = i+1; //acaba esse valor de i e vai para o pr�ximo
		}
		// Se eu achar (NOT TRUE = False) eu n�o preciso mexer no i, pq ele � meu maior n�mero primo
	}
	//da o valor do i para p2
	*p2=i;
}

//Fun��o Principal

void main(void) 
{
	// Declara��o de vari�veis
	int p1 = 0;
	int p2 = 0;
	int m = 0;
	
	// Atribui��o de Valores
	m = 9;
		
	// Calculo dos valores
	primo(m,&p1,&p2);
	
	// Mostra o Resultado na tela
	printf("Para numero %i, \no maior primo menor que ele e' %i \ne o menor primo maior que ele e' %i'\n",m,p1,p2);
			
	system("pause"); /* Pause the Console */
    //return 0;
}


