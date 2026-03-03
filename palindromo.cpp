/*
	Name: palindromo.cpp
	Author: 
	Date: 01/09/25 08:48
	Description: Programa que identifica se uma sequência de caracteres é ou não um palíndromo.
*/

#include <stdio.h>

main(){
	char palavra[20];
	int i, j, fim, flag;
	
	printf("Digite uma palavra: "); gets(palavra);
	
	for(i = 0; palavra[i] != '\0'; i++){
		fim++;
	}
	printf("\nTamanho da palavra: %d", fim);
	
	j = fim-1;
	flag = 1; //Inicia como verdadeiro
	
	for(i = 0; i < j; i++){
		if(palavra[i] != palavra[j]){
			flag = 0; //Recebe falso
			break; // Sair do laço
		}
		j--;
	}
	
	if(flag==1){
		printf("\nPalindromo");
	}else{
		printf("\nFalso palindromo");
	}
}//Fim

