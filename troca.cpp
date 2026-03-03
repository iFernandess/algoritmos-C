/*
	Name: troca.cpp
	Author: Eu
	Date: 08/09/25 08:35
	Description: Programa para realizr a troca de valores entre duas variáveis
*/

#include <stdio.h>
#include <locale.h>

//Sessão de Prototipação
void trocar(int *, int *);

main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b; a = b = 0;

	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("\nDigite o valor de B: ");
	scanf("%i", &b);
	
	printf("\nValores: \nA: %i \nB: %i", a, b);
	
	trocar(&a, &b);
		
	printf("\n\nValores trocados: ");
	printf("\nA: %i ", a);
	printf("\nB: %i ", b);
	
}//Fim

//Função para trocar os valores entre duas variáveis com passagem de parâmetro por referência
void trocar(int *a, int *b){
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
}
