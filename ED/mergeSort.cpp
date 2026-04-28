/*
	Name: mergeSort.cpp
	Author: Igor
	Date: 28/04/26 11:16
	Description: Implementação do método de ordenação Merge Sort
*/

#include <stdio.h>
#include <stdlib.h>

//Seção de prototipação
void mergeSort(int *, int, int); //Quebra tudo em uma única unidade
void merge(int *, int, int, int); //Mescla todos os sub-vetores

main(){
	int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	int tam = sizeof(vet)/sizeof(int);
	int i = 0;
	
	puts("Vetor Original:");
	for(i = 0; i < tam; i++){
		printf(" %d |", vet[i]);
	}
	
	mergeSort(vet,0,tam-1);
	
	puts("\n\nVetor ordenado pelo Merge Sort:");
	for(i = 0; i < tam; i++){
		printf(" %d |", vet[i]);
	}
}

//Função recursiva para quebrar todo o conjunto de dados em diversos vetores de um único elemento
void mergeSort(int *V, int inicio, int fim){
	if(inicio < fim){
		int meio = (inicio + fim) / 2; //Calcula o meio
		mergeSort(V, inicio, meio); //Divide do lado esquerdo (meio = fim)
		mergeSort(V, meio+1, fim); //Divide do lado direito (meio + 1 = inicio do Lado direito)
		merge(V, inicio, meio, fim); //Começa a juntar os sub-conjuntos
	}
}//Fim da função mergeSort

//Função para juntar os sub-conjuntos
void merge(int *V, int inicio, int meio, int fim){
	int i, j, k;
	int tamesq, tamdir; //Tamanho para os vetores temporários
	
	tamesq = meio - inicio + 1;
	tamdir = fim - meio;
	
	//Cria os vetores auxiliares/temporários
	int esquerda[tamesq], direita[tamdir];
	
	//Copia os dados do vetor original para os arrays temporários esquerda[] e direita[]
	for(i = 0; i < tamesq; i++){
		esquerda[i] = V[inicio+i];
	}
	for(j = 0; j < tamdir; j++){
		direita[j] = V[meio + 1 + j];
	}
	
	//Mescla os arrays temporários de volta para o vetor original (V)
	i = 0; //Índice inicial do primeiro sub array (esquerdo)
	j = 0; //Índice inicial do primeiro sub array (direito)
	k = inicio; //Índice inicial do sub array mesclado
	
	while(i < tamesq && j < tamdir){
		if(esquerda[i] < direita[j]){
			V[k] = esquerda[i];
			i++;
		}else{
			V[k] = direita[j];
			j++;
		}
		k++;
	}
	
	//Copia os elementos restantes da esquerda[] se houver
	while(i < tamesq){
		V[k] = esquerda[i];
		i++;
		k++;
	}
	
	//Copia os elementos restantes da direita[] se houver
	while(j < tamdir){
		V[k] = direita[j];
		j++;
		k++;
	}
}
