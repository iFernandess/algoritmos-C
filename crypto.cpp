/*
	Name: crypto.cpp
	Author: Igor Fernandes
	Date: 03/06/25 09:54
	Description: Programa que simula uma criptografia utilizando vetores.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	char nome[40]; //Vetor para nome comleto
	char cpf[11];
	char rg[10];
	char docs[24];
	char crypto[65]; //Vetor para encriptar os dados
	
	puts("Programa para criptografar dados pessoais");
	puts("================================================================");
	printf("Nome completo: "); gets(nome);
	printf("CPF: "); gets(cpf);
	printf("RG: "); gets(rg);
	
	puts("Conteúdo dos vetores: ");
	printf("Nome: %s", nome);
	printf("\nCPF: %s", cpf);
	printf("\nRG: %s", rg);
	
	puts("\n================================================================");
	
	
	//Imprimindo os vetores caracter por caracter
	
	puts("Nome dentro do vetor: ");
	for(int i = 0; nome[i] != '\0' ; i++){
		printf("%c | ", nome[i]);
			
	}
	
	puts("\nCPF dentro do vetor: ");
	for(int i = 0; cpf[i] != '\0' ; i++){
		printf("%c | ", cpf[i]);
			
	}
	
	puts("\nRG dentro do vetor: ");
	for(int i = 0; rg[i] != '\0' ; i++){
		printf("%c | ", rg[i]);
			
	}
	
	// Marshalling RG com CPF
	int d = 0;
	for(int i = 0; cpf[i] != '\0'; i++){
		docs[d] = cpf[i];
		docs[d+1] = rg[i];
		d = d +2;
	}
	
	puts("\nVetor Docs: ");
	for(int i = 0; i < 24; i++){
		printf("%c | ", docs[i]);
	}
	
	puts("\n================================================================");
	
	//Marshalling / criptografia / Embaralhamento com vetores: nome, cpf e rg
	
	int c = 0;
	for(int i = 0; i < 61; i++){
		crypto[c] = nome[i];
		crypto[c+1] = docs[i];
		c = c + 2;
	}
	
	puts("\nConteudo do vetor crypto: ");
	for(int i = 0; crypto[i] < 65; i++){
		printf("%c | ", crypto[i]);
	}
}//Fim.
