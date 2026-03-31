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
		int opc = 0;
		do{
			opc = menu();
			tratarOpcao(lista, opc);
			system("pause");
			system("cls");
		}while(opc);
	}

}

//Função para apresentar um menu ao usuário
int menu(){
	int opc;
	puts("Escolha sua opção: ");
	puts("_________________________________________");
	printf("1 - Iniciar a lista                      |\n");
	printf("2 - Exibir a lista                       |\n");
	printf("3 - Inserir um elemento no fim da lista  |\n");
	printf("4 - Inserir elemento no início da lista  |\n");
	printf("5 - Excluir um elemento do fim da lista  |\n");
	printf("6 - Excluir elemento do início da lista  |\n");
	printf("7 - Sair                                 |\n");
	puts("_________________________________________");
	
	printf("Opção: ");scanf("%d", &opc);
	return opc;
}

//Função para tratar a escolha da opção do menu
void tratarOpcao(no *lista, int opc){
	
	no *tmp;
	
	switch(opc){
		case 1:
			iniciarLista(lista);
			break;
		case 2:
			exibirLista(lista);
			break;
		case 3:
			insereFim(lista);
			break;
		case 4:
			insereInicio(lista);
			break;
		case 5:
			retiraFim(lista);
			break;
		case 6:
			retiraInicio(lista);
			break;
		case 7:
			exit (0);
		default:
			puts("Opção Inválida");
			break;
	}
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

//Função para inserir um nó no início da lista
void insereInicio(no *lista){
	
	no *novo = alocaMemoria();
	no *head = lista->prox;
	lista->prox = novo;
	novo->prox = head;
	puts("Nó inserido no início da lista!");
	tamanho++;
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

//Função para excluir um elemento do início da lista
no *retiraInicio(no *lista){
	
	if(lista->prox == NULL){
		puts("\nA lista está vazia!");
		return NULL;
	}else{
		no *temp = lista->prox;
		lista->prox = temp->prox;
		tamanho--;
		return temp;
	}
}

//Função para excluir um elemento do fim da lista
no *retiraFim(no *lista){
	if(lista->prox == NULL){
		puts("\nA lista está vazia!");
		return NULL;
	}else{
		no *ultimo = lista->prox;
		no *penultimo = lista;
		while(ultimo->prox != NULL){
			penultimo = ultimo;
			ultimo = ultimo->prox;
		}
		penultimo->prox = NULL;
		puts("Nó excluído com sucesso!");
		tamanho--;
		return ultimo;
	}
}

//Função para exibir todo o conteúdo da Lista
void exibirLista(no *lista){
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //Cor original
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attribute;
	
	//Salvar os atributos de cores
	GetConsoleScreenBufferInfo(hConsole,&consoleInfo);
	saved_attribute = consoleInfo.wAttributes; //Salva a cor original
	
	if(vazia(lista)){
		puts("\n====> Lista vazia!");
	}else{
		no *tmp;
		tmp = lista->prox;
		system("cls");
		printf("Lista: ");
		while(tmp != NULL){
			printf("%s", tmp->nome);
			printf("| %d anos", tmp->idade);
			SetConsoleTextAttribute(hConsole,FOREGROUND_RED); //Define a cor do texto
			printf(" ==> ");
			SetConsoleTextAttribute(hConsole,saved_attribute); //Volta a cor original
			tmp = tmp->prox;
		}
		printf("NULL");
	}
}


