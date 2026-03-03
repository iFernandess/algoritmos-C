/*
	Name: AreaTriangulo.cpp
	Author: Igor Fernandes
	Date: 11/03/25 12:120
	Description: Programa para calcular e exibira área de um triângulo.
*/

# include <stdio.h>

main(){
	float base, altura, area;
	base = 0.0;
	altura = 0.0;
	area = 0.0;
	
	printf("Digite o valor da base do triangulo: ");
	scanf("%f",&base);
	printf("Digite o valor da altura do triangulo: ");
	scanf("%f",&altura);
	area = (base * altura) / 2;
	printf("O calculo da area do triangulo resultou em: %.2f", area);
}
