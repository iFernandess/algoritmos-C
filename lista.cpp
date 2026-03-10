/*
	Name: lista.cpp
	Author: Igor
	Date: 10/03/26 11:16
	Description: Implementação de lista encadeada
*/

//Importação de bibliotecas
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <locale.h>

//Definição da estrutura de um Nó
typedef struct no{
	char nome[20];
	int idade;
	no *prox;
};

//Variável Global
int tamanho; //Tamanho da lista

//Seção de Prototipação
int vazia(no *);
no *alocaMemoria(); //Alocar memória para um nó
void insereFim(no *); //Insere um nó no fim da lista
no *retiraFim(no *); //Retira um nó do fim da lista
void insereInicio(no *); //Insere um nó no início da lista
no *retiraInicio(no *); //Retira um nó do início da lista
void exibirLista(no *);
void iniciarLista(no *);
int menu();
void tratarOpcao(no *, int); //Toma decisão a partir da escolha do usuário

//Função principal
main(){
	setlocale(LC_ALL, "Portuguese");
	
	no *lista = (no *) malloc(sizeof(no));
	if(!lista){
		puts("Sem memória para criar a lista!");
		exit(1);
	}else{
		insereFim(lista);
	}
}

//Função para apresentar um menu ao usuário
int menu(){
	
}

//Função para tratar a escolha da opção do menu
void tratarOpcao(no *lista, int opc){
	
}

//Função para iniciar a lista
void iniciarLista(no *lista){
	lista->prox = NULL;
	tamanho = 0;
}

//Função que testa se a lista está vazia
int vazia(no *lista){
	if(lista->prox == NULL){
		return 1; //Está vazia
	}else{
		return 0; //Não está vazia
	}
}

//Função para alocação de memória para um nó
no *alocaMemoria(){
	no *novo = (no *) malloc(sizeof(no)); //Malloc: Memory allocation
	if(!novo){
		puts("Sem memória disponível para criar um novo nó.");
		exit(1);
	}else{
		printf("Nome: ");
		scanf("%s", &novo->nome);
		printf("Idade: ");
		scanf("%d", &novo->idade);
		return novo;
	}
}

//Função para inserir um nó no fim a lista
void insereFim(no *lista){
	no *novo = alocaMemoria();
	novo->prox = NULL;
	if(vazia(lista)){
		lista->prox = novo;
	}else{
		no *tmp = lista->prox;
		while(tmp->prox != NULL){
			tmp = tmp->prox;
		}
		tmp->prox = novo;
	}
	tamanho++;
	puts("Novo elemento inserido com sucesso!");
}

//Função para exibir todo o conteúdo da Lista
void exibirLista(no *lista){
	if(vazia(lista)){
		puts("\n====> Lista vazia!");
	}else{
		no *tmp;
		tmp = lista->prox;
		printf("Lista: ");
		while(tmp != NULL){
			printf("%s", tmp->nome);
			printf(" | %d anos", tmp->idade);
			printf("====>");
			tmp = tmp->prox;
		}
	}
}
