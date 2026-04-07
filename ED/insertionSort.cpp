/*
	Name: insertionSort.cpp
	Author: Igor
	Date: 07/04/26 10:57
	Description: Algoritmo de implementação do método de ordenação Insertin Sort
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

//Prototipação de Funções
void insertionSort(int *, int);

//Variáveis Globais
int comp, trocas;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	int tam = sizeof(vet)/sizeof(int);
	int i;
	comp = trocas = 0;
	
	puts("Vetor Original:");
	for(int i = 0; i < tam; i++){
		printf(" %d |", vet[i]);
	}
	
	insertionSort(vet,tam);
	
	puts("\n\nVetor ordenado pelo Insertion Sort:");
	for(int i = 0; i < tam; i++){
		printf(" %d |", vet[i]);
	}
	
	printf("\n\nQuantidade de comparações: %d", comp);
	printf("\nQuantidade de trocas: %d", trocas);
}

void insertionSort(int *V, int tam){
	int i, j, chave;
	
	for(int i = 1; i < tam; i++){
		chave = V[i];
		j = i - 1;
		
		while(j >= 0 && chave < V[j]){
			V[j+1] = V[j];
			j--;
			trocas++;
			comp++;
		}
		V[j+1] = chave;
		trocas++;
	}
}
