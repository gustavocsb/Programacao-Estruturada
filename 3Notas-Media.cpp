// Gustavo Caldas Silveira Borges
// 21100557
// Engenharia de Software 3� Semestre

/* 2. Refa�a o exercicio anterior, agora calculando a m�dia aritm�tica das notas recebidas pelo
aluno. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	float notas[3], media;
	int i;
	
	//bloco de repeti��o for com condi��o da nota ter valor entre 0 a 10, coleta as 3 notas do aluno
	
	for(i=0;i<3;i++){
		do{
		printf("Digite a %d� nota do aluno: ", i+1);
		scanf("%f", &notas[i]);
		if (notas[i]>10||notas[i]<0)
			printf("Nota inv�lida, digite uma nota entre 0 a 10.\n");
		}while (notas[i]>10||notas[i]<0);
	}
	
	//c�lculo da m�dia
	media=(notas[0]+notas[1]+notas[2])/3;
	
	system("cls");
	
	//bloco de repeti��o for para printar a m�dia e as notas do aluno
	
	printf("\nNotas:\n\n");
	for(i=0;i<3;i++){
	printf("%d� nota do aluno: %.1f \n", i+1, notas[i]);
	}
	printf("\nM�dia do aluno: %.1f \n", media);
	
	return 0;
}


