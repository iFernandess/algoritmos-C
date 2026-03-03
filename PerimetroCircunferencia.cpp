/*
	Name: PerimetroCircunferencia.cpp
	Author: Igor Fernandes
	Date: 11/03/25 12:15
	Description: Programa para calcular e exibir o perímetro de uma circunferência.
*/

# include <stdio.h>

main(){
	float pi, raio, prmt;
	pi = 3.1416;
	raio = 0.0;
	prmt = 0.0;
	
	printf("Digite o valor do raio da circunferencia:");
	scanf("%f",&raio);
	prmt = 2 * pi * raio;
	printf("O valor da circunferencia resultou em: %.2f", prmt);
	
}

