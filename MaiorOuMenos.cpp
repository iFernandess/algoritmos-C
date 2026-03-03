/*
	Name: MaiorOuMenor.cpp
	Author: Igor Fernandes
	Date: 18/03/25 11:25
	Description: Algoritmo para reconhecer 2 numeros inteiros e exibir o maior dentre eles.
*/

# include <stdio.h>

main(){
	int n1, n2; 
	n1 = n2 = 0;
	
	puts("Programa prara identificar 2 numeros inteiros e declarar o maior entre eles.\n");
	
	printf("Digite o valor do primeiro numero: "); scanf("%d", &n1);
	printf("Digite o valor do segundo numero: "); scanf("%i", &n2);
	if(n1 == n2){
		printf("Os numeros digitados tem o mesmo valor, digite numeros com valores diferentes.");
	}else{
		if(n1 > n2){
			printf("O maior numero e: %d",n1);
		}else{
			printf("O maior numero e: %i",n2);

		}
	}
}
