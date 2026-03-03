/*
	Name: crypto2.cpp
	Copyright: 
	Author: 
	Date: 08/09/25 08:01
	Description: Programa para cifrar uma mensagem realizando um "merge" entre 2 vetores de caracteres
*/

#include <stdio.h>

//Sessão de pototipação

void merge (char[], char[]);
int i, j;
char crypto[40]; //Junção dos vetores

main(){
	i = j = 0;
	char nome[20]; //Nome completo
	char docs[20]; //cpf e rg
	
	printf("Digite seu nome completo: ");
	gets(nome);
	printf("\nInforme seu cpf e rg: ");
	gets(docs);
	
	merge(nome, docs);
	
	puts("\n\nTexto cifrado: ");
	
	for(j = 0; crypto[j] != '\0'; j++){
		printf("%c | ", crypto[j]);
	}
}//Fim

//Função para realizar a mistura (merge) entre os dois vetores
void merge(char nome[], char docs[]){
	for(i = 0; nome[i] !='\0'; i++){
		crypto[j] = nome[i];
		crypto[j+1] = docs[i];
		j = j +2;
	}
}
