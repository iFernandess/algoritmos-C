/*
	Name: QuickSort.cpp
	Author: Igor
	Date: 12/05/26 11:40
	Description: Implementação do método de ordenação Quick Sort 
*/

#include <stdio.h>
#include <stdlib.h>

//Sessão de prototipação
void swap(int *, int *); //Troca elementos
int partition(int *, int, int);
void quickSort(int *, int, int);
void imprimir(int *);
int tam;


main(){
	
	int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	tam = sizeof(vet)/sizeof(int);
	int i = 0;
	
	puts("Vetor Original:");
	for(int i = 0; i < tam; i++){
		printf("%d | ", vet[i]);
	}
	
	quickSort(vet, 0, tam-1);
	
	puts("\n\nVetor ordenado pelo Quick Sort:");
	for(int i = 0; i < tam; i++){
		printf("%d | ", vet[i]);
	}
}

//Realiza as partições do conjunto de dados
int partition(int *V, int inicio, int fim){
	int pivot = V[inicio]; //1º elemento como pivot
	int i = fim + 1;
	
	for(int j = fim; j >= inicio + 1; j--){
		if(V[j] >= pivot){
			i--;
			swap(&V[i],&V[j]);
		}
	}
	
	swap(&V[i-1],&V[inicio]);
	return (i-1);
}

//Função principal
void quickSort(int *V, int inicio, int fim){
	if(inicio < fim){
		int pivot = partition(V, inicio, fim);
		quickSort(V, inicio, pivot-1); //Partição do lado esquerdo
		quickSort(V, pivot+1, fim); //Partição lado direito
	}
}

//Função para fazer a troca de elementos entre si
void swap(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

//Função parea imprimir todo o conteúdo do vetor
void imprimir(int V[]){
	for(int i = 0; i < tam; i++){
		printf("%d | ", V[i]);
	}
}
