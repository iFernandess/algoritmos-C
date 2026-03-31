/*
	Name: selectionSort.cpp
	Author: Igor
	Date: 31/03/26 10:50
	Description: Programa de implementação do algoritmo/método de ordenação Selection Sort
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

//Prototipação de Funções
void selectionSort(int *, int);

//Variáveis Globais
int comp, trocas;


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10,};
	int tam = sizeof(vet)/sizeof(int);
	comp, trocas = 0;
	
	puts("Vetor Original:");
	for(int i = 0; i < tam; i++){
		printf(" %d |", vet[i]);
	}
	
	selectionSort(vet,tam);
	
	puts("\nVetor ordenado pelo Selection Sort");
	for(int i = 0; i < tam; i++){
		printf(" %d |", vet[i]);
	}
	
	printf("\n\nQuantidade de comparações: %d", comp);
	printf("\nQuantidade de trocas: %d", trocas);
	
}//Fim do programa

void selectionSort(int *S, int tam){
	int i, j, aux;
	int chave, menor;
	
	//Laço externo que itera do início ao fim do vetor
	for(i = 0; i < tam-1; i++){
		
		//Assume que o menor elemento está na primeira posição do vetor
		chave = i; 
		menor = i + 1;
		
		//Laço interno para localizar quem é o menor elemento do subconjunto
		for(j = i + 1; j < tam; j++){
			if(S[j] < S[menor]){
				menor = j; //Guarda o índice do menor elemento do subconjunto
			}
			comp++;
		}
		
		//Troca o menor elemento encontrado pelo elemento que está na chave (posição inicial)
		if(S[menor] < S[chave]){
			aux = S[chave];
			S[chave] = S[menor];
			S[menor] = aux;
			trocas++;
		}
		comp++;
	}
}
