/*
	Name: ConversorBinario.cpp
	Author: Igor Fernandes
	Date: 27/05/25 11:38
	Description: Programa para fazer a carga em uma matriz com ordem definida pelo usuário, após a carga, passar todos os elementos para o vetor (array).
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");

	int vet[30]; 
	int i  = 0; //Índice
	int num, resto, quoc; 
	num = resto = quoc = 0;
	
	printf("Digite um número para converter para binário: ");
	scanf("%d", &num);
	
	do{
		printf("%d, ", num);
		quoc = num/2;
		resto = num - (quoc * 2);
		vet[i] = resto;
		num = quoc;
		i++;
	}while(num >= 2);
	vet[i] = num;
	
	//Exibição do vetor em ordem original
	puts("\nVetor original: ");
	for(i = 0; vet[i] == 0 or vet[i] == 1; i++){
		printf("%d | ", vet[i]);
	}
	
	//Exibição do vetor com o código binário
	puts("\nVetor em ordem binária: ");
	for(i = i - 1; i > 0; i--){
		printf("%d | ", vet[i]);
	}
	
}
