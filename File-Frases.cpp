/*
Gustavo Caldas Silveira Borges
21100557
Engenharia de Software 3º Semestre

B - Escreva um programa em C que lê 5 frases de, no máximo, 50 caracteres cada 
uma e armazene-as em um arquivo. 
Antes de gravar cada frase no arquivo, é necessário converter todas as suas 
letras para maiúsculas. O nome do arquivo deve ser arq02.txt. 
O programa deve fechar o arquivo e reabri-lo para, a seguir, exibir todas as 
frases já convertidas e gravadas.
*/

#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>

int main(){
	
	char frase1[50], frase2[50], frase3[50], frase4[50], frase5[50];
	int i;
	FILE *arq;
	
	arq = fopen("arq02.txt", "ab");
	
	if(arq == NULL){
		printf("Erro! Impossivel abrir o arquivo.\n");
		exit(1);
	}
	
	
    printf("Digite 5 frases:\nAPERTE ENTER PARA CONFIRMAR A FRASE\n");
	scanf(" %49[^\n] %49[^\n] %49[^\n] %49[^\n] %49[^\n]", frase1, frase2, frase3, frase4, frase5);
	
	i=0;
	while(frase1[i] != '\0'){
		frase1[i] = toupper(frase1[i]);
		i++;
	}
	i=0;
	while(frase2[i] != '\0'){
		frase2[i] = toupper(frase2[i]);
		i++;
	}
	i=0;
	while(frase3[i] != '\0'){
		frase3[i] = toupper(frase3[i]);
		i++;
	}
	i=0;
	while(frase4[i] != '\0'){
		frase4[i] = toupper(frase4[i]);
		i++;
	}
	i=0;
	while(frase5[i] != '\0'){
		frase5[i] = toupper(frase5[i]);
		i++;
	}
	
    fputs(frase1, arq);
    fputs("\n", arq);
    fputs(frase2, arq);
    fputs("\n", arq);
    fputs(frase3, arq);
    fputs("\n", arq);
    fputs(frase4, arq);
    fputs("\n", arq);
    fputs(frase5, arq);
    fputs("\n", arq);
    
    fclose(arq);
    
	char frases[100];
    arq = fopen("arq02.txt", "rb");
    
    if(arq == NULL){
    	printf("Erro! Impossivel abrir o arquivo.\n");
    	exit(1);
	}
	
	printf("\nLeitura do Arquivo: \n\n");
	
	while(fgets(frases, 100, arq) != NULL){
		printf("%s", frases);
	}
	
	fclose(arq);
	
	return 0;
}
