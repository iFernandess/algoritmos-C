/*
	Name: fila.cpp
	Author: Igor
	Date: 24/02/26 10:58
	Description: Programa para implementar uma fila do tipo FIFO (First In First Out)
*/

#include <stdio.h>

//Variáveis Globais
int itens[5];
int inicio = -1, fim = -1;
int total = 5;

//Prototipação das funções
void Enqueue(int); //Inserir elemento;
int Dequeue(); //Retira elemento da fila;
int isFull(); //Testa se a fila está cheia (retorna 1)
int isEmpty(); //Testa se a fila está vazia (retorna 0)
void imprimirFila();

main(){
	Enqueue(100);
	Enqueue(101);
	Enqueue(102);
	Enqueue(103);
	Enqueue(104);
	Enqueue(500);
	Dequeue();
	Enqueue(500);
	imprimirFila();
	Dequeue();
	imprimirFila();
	Enqueue(10);
	Enqueue(11);
	imprimirFila();
	
}//fim

//Função para inserir um elemento na fila
	void Enqueue(int elem){
		if(isFull() == 1){
			puts("\nA fila ta cheia!");
		}else{
			if(inicio == -1){
				inicio = 0;
			}
			fim = ((fim + 1) % total);
				itens[fim] = elem;
				printf("\nElemento %d inserido na fila", elem);
		}
	}
	
	//Função para retirar um elemento da fila
	int Dequeue(){
		int elem;
		if(isEmpty() == 1){
			puts("\nA fila ta vazia!");
			return -1;
		}else{
			elem = itens[inicio];
			if(inicio == fim){
				inicio = -1;
				fim = -1;
			}else{
				inicio = ((inicio + 1) % total);
			}
			printf("\nElemento %d foi excluido da fila", elem);
		}
	}
	
	//Função que testa se a fila está cheia
	int isFull(){
		if(inicio == ((fim + 1) % total) || (inicio == 0) && fim == total-1){
			return 1;
		}else{
			return 0;
		}
	}
	
	//Função que testa se a fila está vazia
	int isEmpty(){
		if(inicio == -1){
			return 1;
		}else{
			return 0;
		}
	}
	
	//Função que exibe todos os elementos da fila
	void imprimirFila(){
		if(isEmpty() == 1){
			puts("A fila ta vazia!");
		}else{
			puts("\nConteudo da fila:");
			for(int i = inicio; i != fim; i = ((i+1)%total)){
			printf(" %d |", itens[i]);
		}
		}
		
	}
