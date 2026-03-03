/*
	Name: Regressiva.cpp
	Author: Igor Fernandes
	Date: 01/04/25 11:56
	Description: Programa para mostrar a contagem regressiva até seu próprio número negativo.
*/

# include <stdio.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");

	int  n = 0;
	int i = 0;
	
	printf("Digite um número para iniciar a contagem: "); scanf("%d", &n);
	i = -n;
	
	while(n >= i){
		printf("\n%d",n);
		n--;
	}
}
