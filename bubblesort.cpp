/*
	Name: bubblesort.cpp
	Author: Igor
	Date: 24/03/26 11:01
	Description: Programa para demonstrar o funcionamento do método de ordenação chamado Bubble Sort
*/
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

//Funções
void bubbleSort(int *, int);

//Variáveis globais
int comp, trocas;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	//int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10,};
	int vet[518092];
	int tam = sizeof(vet)/sizeof(int);
	comp, trocas = 0;
	
	srand(time(NULL));
	for(int i = 0; i < tam; i++){
		vet[i] = rand()%10000;
	}
	
	puts("Vetor Original:");
	for(int i = 0; i < tam; i++){
		printf(" %d |", vet[i]);
	}
	
	bubbleSort(vet,tam);
	
	puts("\nVetor ordenado pelo Bubble Sort");
	for(int i = 0; i < tam; i++){
		printf(" %d |", vet[i]);
	}
	
	printf("\n\nQuantidade de comparações: %d", comp);
	printf("\nQuantidade de trocas: %d", trocas);
}

//Função Bubble Sort
void bubbleSort(int *V, int tam){
	
	int i = 0;
	int aux = 0;
	
	//Método de ordenação (Bubble Sort)
	do{	
		i = 0;
		while(i < tam - 1){
			
			comp++;
		
			if(V[i] > V[i+1]){
			aux = V[i];
			V[i] = V[i+1];
			V[i+1] = aux;
			trocas++;
			}
		i++;
		}
	
		tam--;
	}while(tam > 0);
}
