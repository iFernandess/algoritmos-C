/*
	Name: AreaRetangulo.cpp
	Author: Igor Fernandes
	Date: 11/03/25 11:29
	Description: Programa para calcular e exibir a área de um retângulo.
*/

# include <stdio.h>
main(){//Início de programa
	float base, altura, area;//Ponto flutuante (valor real)
	base = 0.0;
	altura = 0.0;
	area = 0.0;
	
	printf("Digite o valor da base do retangulo: ");
	scanf("%f",&base);
	printf("Digite o valor da altura do retangulo: ");
	scanf("%f",&altura);
	area = base * altura;
	printf("A area do retangulo resultou em: %.2f",area);
}//Fim do programa

