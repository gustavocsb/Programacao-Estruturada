/*
Gustavo Caldas Silveira Borges
21100557
Engenharia de Software 3º Semestre

8 - Quando passamos um vetor para uma função em C, esta alocará um ponteiro 
para o elemento zero do vetor. Por que a Linguagem C simplesmente não cria uma
nova cópia local do vetor, como faz com os números inteiros?
*/

#include<stdlib.h>
#include<stdio.h>

int main(){
	
	printf("Quando passamos um vetor para uma funcao em C, esta alocara um ponteiro para\n");
	printf("o elemento zero do vetor. Por que a Linguagem C simplesmente nao cria uma\n");
	printf("nova copia local do vetor, como faz com os numeros inteiros?\n\n");
	
	system("pause");
	
	printf("\n\nPor causa do tamanho, um ponteiro pode ter 2, 4 e 8 bytes em sistemas de 16,32 e 64 bits\n");
	printf("enquanto um vetor ou uma struct pode ter tamanhos distintos, dificultando assim a criacao \n");
	printf("de uma copia, pois envolveria o endereco base e saber o tamanho, gerando problemas.\n");
	 
	return 0;
}
