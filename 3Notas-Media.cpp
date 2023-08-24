// Gustavo Caldas Silveira Borges
// 21100557
// Engenharia de Software 3º Semestre

/* 2. Refaça o exercicio anterior, agora calculando a média aritmética das notas recebidas pelo
aluno. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	float notas[3], media;
	int i;
	
	//bloco de repetição for com condição da nota ter valor entre 0 a 10, coleta as 3 notas do aluno
	
	for(i=0;i<3;i++){
		do{
		printf("Digite a %dº nota do aluno: ", i+1);
		scanf("%f", &notas[i]);
		if (notas[i]>10||notas[i]<0)
			printf("Nota inválida, digite uma nota entre 0 a 10.\n");
		}while (notas[i]>10||notas[i]<0);
	}
	
	//cálculo da média
	media=(notas[0]+notas[1]+notas[2])/3;
	
	system("cls");
	
	//bloco de repetição for para printar a média e as notas do aluno
	
	printf("\nNotas:\n\n");
	for(i=0;i<3;i++){
	printf("%dº nota do aluno: %.1f \n", i+1, notas[i]);
	}
	printf("\nMédia do aluno: %.1f \n", media);
	
	return 0;
}


