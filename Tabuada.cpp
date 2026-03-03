/*
	Name: Tabuada.cpp
	Author: Igor Fernandes
	Date: 01/04/25 11:21
	Description: Programa para exibir a tabuada de multiplicação do número digitado pelo usuário.
*/

# include <stdio.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int resp, i, n = 0;

	printf("Digite um número positivo:"); scanf("%i", &n);
	
	i = 1;
	if(n < 0){
		puts("Escolha um número positivo!");
	}else{
		
		do{
			printf("\n%i x %i = %i", n, i, n*i);	
			i++;
		}while(i <= 10);
	}
}
