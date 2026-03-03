/*
	Name: 
	Copyright: 
	Author: 
	Date: 01/09/25 08:20
	Description: Programa para manipular strings
*/

#include <stdio.h>

main(){
	
	char nome[20];
	int tam = 0;
	
	printf("Nome: "); 
	gets(nome);
	
	tam = sizeof(nome);
	
	printf("\n\nSeu nome: %s!", nome);
	
	int i;
	puts("\nConteudo do vetor nome: ");
	for(i = 0; nome[i] != '\0'; i++){
		printf("%c | ", nome[i]);
	}
}//Fim
