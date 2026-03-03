/*
	Name: vetor1.cpp
	Author: Igor Fernandes
	Date: 06/05/25 09:42
	Description: programa para fazer um vetor unidimensional e imprimir em ordem crescente e decrescente.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int vet[10]; //variável multivalorada homogênea (só pode ter um tipo) 10 = n de posições
	int i = 0;
	int aux = 0;
	float aux2 = 0;
	int tam = 0;
	tam = sizeof(vet)/sizeof(int);
	printf("O tamanho do vetor é: %i \n",tam);
	
	
	while(i < tam){
		printf("Digite o %dº número: ", i+1);
		scanf("%i", &vet[i]);
		i++;
	}
	
	//Ordem Crescente
	
	printf("Ordem crescente dos elementos: \n");
	for(i = 0; i < tam; i++){
		printf("%i | ",vet[i]);
	}
	printf("\n");
	
	//Ordem decrescente
	printf("Ordem decrescente dos elementos: \n");
	
	for(i = tam; i > 0; i--){ //O i começa no valor do último índice
		printf("%i | ",vet[i]);
	}
	
	//i = tam;
	//do{
	//	printf("%i | ",vet[i]);
	//	i--;
	//}while(i > 0);
	
	
	//Números pares e ímpares
	printf("\nNúmeros pares: \n");
	i = 0;
	while(i < tam){
		if(vet[i] % 2 == 0){
			printf("%i | ",vet[i]);
		}
		i++;
	}
	
	printf("\nNúmeros ímpares: \n");
	
	for(i = 0;i < tam; i++){
		if(vet[i] % 2 == 1){
			printf("%i | ",vet[i]);
			aux = aux + vet[i];
			aux2++;
		}
	}
	printf("\nA média aritmética dos números ímpares é: %.1f \n", (aux / aux2));
	
	//soma do conteúdo do vetor
	printf("\nSoma dos elementos do vetor: \n");
	i = 0; aux = 0;
	do{
		aux = aux + vet[i];
		i++;
	}while(i < tam);
	printf("%i",aux);
	
}
