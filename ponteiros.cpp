/*
	Name: ponteiros.cpp
	Author: Eu
	Date: 08/09/25 09:57
	Description: Programa para demonstrar o conceito e uso dos ponteiros
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int a, b, c; a = b = c = 5;
	char respS = 'S';
	char respN = 'N';
	int vet1[7]; int vet2[4];
	
	printf("\nConteúdo de A: %d", a);
	printf("\nConteúdo de A: %d", b);
	printf("\nConteúdo de A: %d", c);
	printf("\nConteúdo de respS: %d", respS);
	printf("\nConteúdo de RespN: %d", respN);
	
	printf("\nEndereço da variável A: %p", &a);
	printf("\nEndereço da variável A: %p", &b);
	printf("\nEndereço da variável A: %p", &c);
	printf("\nEndereço da variável respS: %p", &respS);
	printf("\nEndereço da variável respN: %p", &respN);
	printf("\nEndereço do vetor vet1: %d", &vet1);
	printf("\nEndereço do vetor vet2: %d", &vet2);
	
	printf("\nEndereço do ultimo endereço do vetor vet1: %d", &vet1[6]);
}//Fim
