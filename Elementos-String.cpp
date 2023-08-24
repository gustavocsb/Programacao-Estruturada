// Gustavo Caldas Silveira Borges
// 21100557
// Engenharia de Software 3� Semestre

/* 4. Escreva um programa que receba uma string de caracteres min�sculos a partir do usu�rio e
conte o n�mero de elementos dessa string; na sequ�ncia, o programa deve converter os
caracteres para maiusculos. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

//fun��o booleana para checar se a string cont�m todos os caracteres min�sculos, retornando 'true', sen�o retornar� 'false'

bool minusculo(const char *string) {
    for (int i = 0; string[i] != 0; i++) if (isupper(string[i])) return false;
    return true;   
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char string[20];
	int tamanhoString, i;
	
	/*
	Coletando uma string oom caracteres min�sculos, 
	com condi��o em loop caso falso, chamando a fun��o 'minusculo'
	e coletando o tamanho dessa string
	*/
	
	do{
	printf("Digite uma string com caracteres min�sculos: \n");
	fgets (string,20,stdin);
	if (minusculo(string) == false){
		printf("Caracteres inv�lidos. Digite apenas caracteres min�sculos!\n\n");
		system("pause");
		system("cls");
	}
	}while (minusculo(string) == false);
	tamanhoString = strlen(string);
	
	//Bloco de repeti��o for para transformar todos os caracteres em mai�sculos
	
	for(i=0;i<tamanhoString;i++)
		string[i] = toupper(string[i]);
	
	system("cls");
	
	//Printando a quantidade de elementos da string e a string com caracteres mai�sculos
	
	printf("\n\nQuantidade de elementos: %d\n", tamanhoString-1);
	printf("String com caracteres mai�sculos: %s", string);
	
	return 0;
}
