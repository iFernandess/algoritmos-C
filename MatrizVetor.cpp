/*
	Name: MatrizVetor.cpp
	Author: Igor Fernandes
	Date: 27/05/25 09:52
	Description: Programa para fazer a carga em uma matriz com ordem definida pelo usuário, após a carga, passar todos os elementos para o vetor (array).
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");

	int line, col, x, ordem, aux;
	line = col = x = ordem = aux = 0;
	
	printf("Escolha a ordem da matriz quadrada: ");
	scanf("%i", &ordem);
	
	int mat[ordem][ordem];
	int vet[ordem * ordem];
	
	//Carga da matriz
	printf("Digite %d elementos inteiros: \n\n", ordem*ordem);
	
	while(line < ordem){
		while(col < ordem){
			printf("[%i][%i]:", line, col, mat[line][col]);
			scanf("%i", &mat[line][col]);
			vet[x] = mat[line][col];
			col++;
			x++;
		}
		col = 0;
		line++;
	}
	puts("\n==========Exibição da Matriz==========>");
	//Exibição da matriz
	line = 0;
	do{
		for(col = 0; col < ordem; col ++){
			printf("\nO elemento de linha [%d] e coluna [%d] é: %d", line, col, mat[line][col]);
		}
		line++;
	}while(line < ordem);
	
	puts("\n\n==========Exibição do Vetor===========>");
	
	//Exibição do Vetor
	aux = 1; x = 0;
	while(x < (ordem*ordem)){
		printf("\nO %iº elemento do vetor é: %i", aux, vet[x]);
		aux++;
		x++;
	}
}//Fim do programa
