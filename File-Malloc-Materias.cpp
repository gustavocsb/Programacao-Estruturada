/*
Gustavo Caldas Silveira Borges
21100557
Engenharia de Software 3º Semestre

D - Escreva um programa que receba como entrada o numero de alunos de uma 
disciplina. O programa deve alocar dinamicamente em uma estrutura para 
armazenar as informações a respeito desses alunos: nome do aluno e sua nota 
final. Use nomes com no máximo 40 caracteres. Em seguida, salve os dados dos
alunos em um arquivo binário. Por fim, leia o arquivo e mostre o nome do aluno 
com a maior nota.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
    char nome[40];
    float nota;
    float maiorNota;
}Aluno;

void escrever(char arq[]){
    Aluno a;
    FILE *file = fopen(arq, "ab");

    if(file){
        printf("Digite o nome e a nota do aluno: ");
        scanf("%39[^\n]%f]", a.nome, &a.nota);
        fwrite(&a, sizeof(Aluno), 1, file);
        fclose(file);
    }
    else
        printf("\nErro ao abrir arquivo!\n");
}

void ler(char arq[]){
    Aluno a;
    FILE *file = fopen(arq, "rb");

    if(file){
        while(!feof(file)){
            if(fread(&a, sizeof(Aluno), 1, file))
                printf("\nNome: %s\nNota: %.2f\n", a.nome, a.nota);
                
        	if(a.nota > a.maiorNota)
        		a.maiorNota = a.nota;
        }
        
		printf("\n\nMaior nota: %.2f", a.maiorNota);
        
        fclose(file);
    }
    else
        printf("\nErro ao abrir arquivo!\n");
}

int main(){
    char arquivo[] = {"alunos.dat"};

    escrever(arquivo);
    ler(arquivo);

    return 0;
}
