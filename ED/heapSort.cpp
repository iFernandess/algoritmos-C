/*
	Name: heapSort.cpp
	Author: Igor
	Date: 05/05/26 11:28
	Description: Código de implementação do Método de Ordenação Heap Sort
*/

#include <stdio.h>
#include <stdlib.h>

//Prototipação de funções e variáveis
void heapfy(int *, int, int);
void heapSort(int *, int);
void swap(int *, int *);
void imprimir(int *);
int tam;

main(){
	int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	tam = sizeof(vet)/sizeof(int);
	int i = 0;
	
	puts("Vetor Original:");
	imprimir(vet);
	
	heapSort(vet,tam);
	
	puts("\n\nVetor ordenado pelo Heap Sort:");
	imprimir(vet);
}

//Função para troca de posições (swap)
void swap(int *a,int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

//Função que faz heapfy, ou seja, teste se o pai é maior (max heap) ou menor (min heap) que os filhos e invoca o "swap" para fazzer a troca
void heapfy(int V[], int n, int i){
	int maior = i; //inicializa o maior como raiz
	int esq = 2 * i + 1; //Índice de filho da esquerda
	int dir = 2 * i + 2; //Índice de filho da direita
	
	//Se o filho da esquerda é maior que o pai
	if(esq < n && V[esq] > V[maior]){
		maior = esq;
	}
	
	//Se o filho da direita é maior que o pai
	if(dir < n && V[dir] > V[maior]){
		maior = dir;
	}
	
	if(maior != i){
		swap(&V[i], &V[maior]); 
		
		//Invoca recursivamente heapfy na sub-árvore afetada
		heapfy(V, n, maior);
	}
}

//Função principal que monta a árvore e submete à função recursiva heapfypara verificar as regras de MaxHeap ou MinHeap
void heapSort(int *V, int n){
	//1. Constrói um Max Heap
	for(int i = n/2-1; i >= 0; i--){
		heapfy(V, n, i);
	}
	
	//2. Troca a raiz com o último elemento e reduz a árvore (heap)
	for(int i = n-1; i > 0; i--){
		//Move o elemento atual (raiz) para o fim do array
		swap(&V[0], &V[i]);
		
		//Invoca a função heapfy na raiz para restaurar a propriedade do heap
		heapfy(V, i, 0);
	}
}

//Função parea imprimir todo o conteúdo do vetor
void imprimir(int V[]){
	for(int i = 0; i < tam; i++){
		printf("%d | ", V[i]);
	}
}
