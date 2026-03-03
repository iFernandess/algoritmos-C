/*
	Name: recursividade1.cpp
	Author: Eu
	Date: 20/10/25 09:24
	Description: Programa para demonstrar a utilização das funções recursivas 
*/

#include <stdio.h>
void fx(int);
void fy(char);

main(){
	puts("Inicio das chamadas recursivas");
	fx(5);
	puts("Fim da fx");
	fy('a');
	puts("Fim da fy");
}

void fx(int a){
	if(a > 17){
		return;
	}
	a = a + 2;
	printf("a: %d \n", a);
	fx(a); //Invoke/chamada recursiva
}

void fy(char c){
	if(c == 'h'){
		return;
	}
	printf("%c\n", c);
	c++;
	fy(c);
}
