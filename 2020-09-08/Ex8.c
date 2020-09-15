#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    // Declara as variáveis de iniciação
    int numAlunoS=0, numProva=0;

    printf("\nDigite o numero de alunos da turma: ");
    scanf("%i", &numAlunoS); 
    printf("\nDigite o numero de provas dadas: ");
    scanf("%i", &numProva); 
    
    // Declara as variáveis
    float Dados[numAlunoS][numProva], MediasAlunos[numAlunoS],MediaTurma=0;
    int Aluno=0, Prova=0, N_Alunos80=0;
    
    // Entrada de valores de variaveis
	while(Aluno<numAlunoS)
	{
		Prova=0;
		while(Prova<numProva)
		{
			printf("\nDigite a nota da prova %i do aluno %i: ",Prova+1, Aluno+1);
    		scanf("%f", &Dados[Aluno][Prova]); 
			Prova++;
		}
		Aluno++;
	}
    // Cálculos ou Processamento
    Aluno=0;
    while(Aluno<numAlunoS)
	{
		Prova=0;
		MediasAlunos[Aluno]=0;
		while(Prova<numProva)
		{
			MediasAlunos[Aluno]= Dados[Aluno][Prova]+MediasAlunos[Aluno]; //Media de cada Aluno
			MediaTurma = Dados[Aluno][Prova]+MediaTurma; //Media da turma
			Prova++;
		}
		MediasAlunos[Aluno]=MediasAlunos[Aluno]/numProva; //Faz o calculo da média de cada aluno
		if(MediasAlunos[Aluno]>=8) //Confere se a média é maior ou igual a 8 (80%)
		{
			N_Alunos80++; //Adiciona +1 no numero de alunos
		}
		Aluno++;
		printf("\n");
	}
    MediaTurma=MediaTurma/(numAlunoS*numProva);//Faz o calculo da média da turma
    //Para vizualizar os dados
    printf("\nA Matriz e':\n");
    //Titulo
    printf("Aluno\t");
    Prova=0;
	while(Prova<numProva) //Mostrar o número de provas
	{
		printf("Prova %i\t\t",Prova+1);
		Prova++;
	}
	printf("Media\t\t"); //Inserir o titulo média
    printf("\n");
    //Fim Titulo
    //Matriz
    Aluno=0;
    while(Aluno<numAlunoS)
	{
		printf("%i\t",Aluno+1);//Mostrar o número do aluno
		Prova=0;
		while(Prova<numProva) //Mostrar a nota de cada prova
		{
			printf("%f\t",Dados[Aluno][Prova]); //Notas Provas
			Prova++;
		}
		printf("%f\t",MediasAlunos[Aluno]); //Mostra a média das provas
		Aluno++;
		printf("\n");
	}
	//Fim Matriz
	printf("A Media da turma foi %f\n",MediaTurma);
	printf("O numero de alunos com mais de 80%% foi %i\n",N_Alunos80);
    //Fim de Para vizualizar os dados
    
	printf("\n");
	system("pause"); /* Pause the Console */
}

