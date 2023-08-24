// Gustavo Caldas Silveira Borges
// 21100557
// Engenharia de Software 3º Semestre

/* 1. Escreva um programa que receba do usuario (interativamente) trës notas para dado aluno,
armazenando-as em um vetor; em seguida, o programa deve imprimir na tela tais notas. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	float notas[3];
	int i;
	
	//bloco de repetição com condição da nota ter um valor entre 0 a 10, coletando as 3 notas do aluno
	
	for(i=0;i<3;i++){
		do{
		printf("Digite a %dº nota do aluno: ", i+1);
		scanf("%f", &notas[i]);
		if (notas[i]>10||notas[i]<0)
			printf("Nota inválida, digite uma nota entre 0 a 10.\n");
		}while (notas[i]>10||notas[i]<0);
	}
	
	system("cls");
	
	//bloco de repetição para printar as notas digitadas previamente
	
	printf("\nNotas:\n\n");
	for(i=0;i<3;i++){
	printf("%dº nota do aluno: %.1f \n", i+1, notas[i]);
	}
	
	return 0;
}

