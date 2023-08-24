// Gustavo Caldas Silveira Borges
// 21100557
// Engenharia de Software 3º Semestre

/*
8. Em dada turma há dez alunos, e cada um realizou três provas. Calcule a média de cada aluno e a
média da turma.
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float notas[10][3], mediaAlunos[10], mediaTurma=0;
	int i, j;
	
	//bloco de repetição com for duplo e condição para nota ter valor entre 0 a 10, matriz, para coletar as 3 notas dos 10 alunos
	
	printf ("Informe as notas:\n");
	
	for(i=0;i<10;i++){
		for(j=0;j<3;j++){
			do{
			printf("Aluno %d, Nota %dª prova: ", i+1, j+1);
			scanf("%f", &notas[i][j]);
			if (notas[i][j]>10||notas[i][j]<0)
			printf("Nota inválida, digite uma nota entre 0 a 10.\n");
		}while (notas[i][j]>10||notas[i][j]<0);
		}
	}
	
	//bloco de repetição for para fazer a média das 3 notas de cada aluno
	
	for(i=0;i<10;i++){
		mediaAlunos[i] = (notas[i][0]+notas[i][1]+notas[i][2])/3;
	}
	
	//bloco de repetição for para fazer a média da turma usando a média dos 10 alunos calculada anteriormente
	
	for(i=0;i<10;i++){
		mediaTurma+=mediaAlunos[i];
	}
	mediaTurma=mediaTurma/10;
	
	system("pause");
	system("cls");
	
	//bloco de repetição for para printar todas as notas e média por aluno e média da turma
	
	printf("Notas:\n\n");
	
	for(i=0;i<10;i++){
			printf("Aluno %d:   1ª Prova: %.1f | 2ª Prova: %.1f | 3ª Prova: %.1f \n", i+1, notas[i][0], notas[i][1], notas[i][2]);
			printf("Média do aluno: %.1f \n\n", mediaAlunos[i]);
		}
	
	printf("\n Média da Turma: %.1f", mediaTurma);
	
	return 0;
}
