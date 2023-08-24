// Gustavo Caldas Silveira Borges
// 21100557
// Engenharia de Software 3º Semestre

/*
7. Dada uma string digitada pelo usuário, determine o número de vezes que determinada letra de
sua escolha ocorre na mesma.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char string[25], letra;
	int letraRepete=0, tamanhoString;
	
	//Recebendo o valor da string junto com seu tamanho
	
	printf("Digite uma string: ");
	fgets(string,25,stdin);
	tamanhoString = strlen(string);
	fflush(stdin);
	
	//Recebendo a letra para checagem de quantas vezes repetirá na string
	
	printf("\n\nEscolha uma letra para ser determinada quantas vezes ela aparece na string.\n");
	scanf("%c", &letra);
	
	//Bloco de repetição para checar quantas vezes a letra escolhida repete na string e informando o número de vezes que ela foi repetida
	
	for(int i=0;i<tamanhoString;i++){
		if(string[i]==letra)
		letraRepete+=1;
	}
	
	printf("\nA quantidade de vezes que '%c' repete é: %d \n", letra, letraRepete);
	
	return 0;
}
