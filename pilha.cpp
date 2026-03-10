/*
	Name: pilha.cpp
	Author: Igor
	Date: 03/03/26 10:56
	Description: Implementação do conceito de pilha (LIFO - Last In First Out)
*/

//Sessão de Importação
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Prototipação
void push(int); //Função para inserir na pilha
int pop(); //Função para retirar da pilha
int isFull(); //Testa se a pilha está cheia
int isEmpty(); //Testa se a pilha está vazia
void exibirPilha(); //Mostra todo o conteúdo da pilha
void menu();

//Variáveis globais
int pilha[5];
int topo = -1;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	while(1){
		menu();
	}
}//Fim

//Função para apresentar o menu de opções
void menu(){
	
	system("cls");
	int option = 0;
	printf("Escolha uma opção:       |\n_________________________|\n==> 1 - Inserir elemento |\n==> 2 - Remover elemento |\n==> 3 - Exibir a Pilha   |\n==> 4 - Sair             |\n_________________________|\n");
	scanf("%d", &option);
	int elem;
	
	switch(option){
		case 1: printf("Digite um elemento para inserir na pilha: ");
				scanf("%d", &elem);
				push(elem);
				break;
				
		case 2: pop();
				break;
			
		case 3: exibirPilha();
				break;
				
		case 4: exit(0);
		
		default: puts("Opção inválida.");
	}
	
	system("pause");
}

void push(int elem){
	if(isFull() == 1){
		puts("\nStack Overflow");
	}else{
		topo++;
		pilha[topo] = elem;
		printf("\nelemento [%d]: %d\n", topo, elem);
	}
}

int pop(){
	if(isEmpty() == 1){
		puts("\nPilha vazia");
	}else{
		int elemento;
		elemento = pilha[topo];
		topo--;
		printf("\nO elemento '%d' foi retirado da pilha", elemento);
		return elemento;
	}
}

int isFull(){
	if(topo == 4){
		return 1;
	}else{
		return 0;
	}
}

int isEmpty(){
	if(topo == -1){
		return 1;
	}else{
		return 0;
	}
}

void exibirPilha(){
	if(isEmpty() == 1){
		puts("\nPilha vazia");
	}else{
		puts("\n\n==> Conteudo da pilha:");
		for(int i = topo; i >= 0; i--){
			printf("elemento [%d]: %d\n", i, pilha[i]);
		}
	}
}
