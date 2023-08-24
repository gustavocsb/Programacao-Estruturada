// Gustavo Caldas Silveira Borges
// 21100557
// Engenharia de Software 3º Semestre

/* 4. Escreva um programa que receba uma string de caracteres minúsculos a partir do usuário e
conte o nümero de elementos dessa string; na sequência, o programa deve converter os
caracteres para maiusculos. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

//função booleana para checar se a string contém todos os caracteres minúsculos, retornando 'true', senão retornará 'false'

bool minusculo(const char *string) {
    for (int i = 0; string[i] != 0; i++) if (isupper(string[i])) return false;
    return true;   
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char string[20];
	int tamanhoString, i;
	
	/*
	Coletando uma string oom caracteres minúsculos, 
	com condição em loop caso falso, chamando a função 'minusculo'
	e coletando o tamanho dessa string
	*/
	
	do{
	printf("Digite uma string com caracteres minúsculos: \n");
	fgets (string,20,stdin);
	if (minusculo(string) == false){
		printf("Caracteres inválidos. Digite apenas caracteres minúsculos!\n\n");
		system("pause");
		system("cls");
	}
	}while (minusculo(string) == false);
	tamanhoString = strlen(string);
	
	//Bloco de repetição for para transformar todos os caracteres em maiúsculos
	
	for(i=0;i<tamanhoString;i++)
		string[i] = toupper(string[i]);
	
	system("cls");
	
	//Printando a quantidade de elementos da string e a string com caracteres maiúsculos
	
	printf("\n\nQuantidade de elementos: %d\n", tamanhoString-1);
	printf("String com caracteres maiúsculos: %s", string);
	
	return 0;
}
