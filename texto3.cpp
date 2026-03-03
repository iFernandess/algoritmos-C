/*
	Name: texto3.cpp
	Author: Eu
	Date: 08/09/25 10:42
	Description: Programa para demonstrar o uso de ponteiros com tratamento de strings
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>


main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[20]; int tam = 0;
	printf("Nome: ");
	gets(nome);
	
	tam = sizeof(nome) / sizeof(char);
	printf("\nTamanho do vetor: %d", tam);
	
	printf("\nNome digitado: %s", nome);
}//Fim

//Função para imprimir o nome ao contrário
void reverso(char *nome){
	for(i = 0; nome[i]);
}
