/*
	Name: recursividadeFatorial.cpp
	Author: Eu
	Date: 20/10/25 09:24
	Description: Programa para exibir o fatorial de um nº poe meio de uma função recursiva DIRETA 
*/

#include <stdio.h>
int fatorial(int);

main(){
	
	int num, fat; num = fat = 0;
	
	printf("Digite um numero para calcular seu fatorial: "); scanf("%d", &num);
	
	printf("Fatorial de %d! = ", num);
	fat = fatorial(num);
	printf("= %d", fat);
	
}//Fim

//Função para calcular o fatorial de um número
int fatorial(int num){
	if(num > 1){
		printf("%d x ", num);
	}
	
	if(num == 1){
		printf("%d ", num);
		return num;
	}

	return num * fatorial(num-1);
}
