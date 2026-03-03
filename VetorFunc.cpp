/*
	Name: VetorFunc.cpp
	Author: Eu
	Date: 15/09/25 07:54
	Description: Programa para fazer a carga e operações em vetores por meio de função 
*/
//Sessão de importação de bibliotecas
#include <stdio.h>

//Sessão de prototipação
int lerNum();
int i;
void imprimirVet(int *, int);
void imprimirVetReverse(int *, int);

main(){
	
	int vet[5];
	
	//Calcula a quantidade de elementos do vetor
	int tam = sizeof(vet) / sizeof(int);
	
	//Carga do vetor
	for(i = 0; i < tam; i++){
		vet[i] = lerNum();
	}
	
	//Invoke da função para imprimir vetor
	puts("Conteudo do vetor: "); imprimirVet(vet, tam);
	puts("\nConteudo do vetor ao contrario: ");imprimirVetReverse(vet, tam);
	
}//Fim

void imprimirVet(int *V, int tam){
	for(i = 0; i < tam; i++){
		printf(" %d |", V[i]);
	}
}

void imprimirVetReverse(int *V, int tam){
	for(i = tam - 1; i >= 0; i--){
		printf(" %d |", V[i]);
	}
}
int lerNum(){
	int num;
	printf("Digite um numero: "); scanf("%d", &num);
	return num;
}
