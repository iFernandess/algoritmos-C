/*
	Name: LacosDeRepeticao.cpp
	Author: Igor Fernandes
	Date: 01/04/25 09:55
	Description: Programa para demonstrar a utilização dos três tipos de laços de repetição.
*/

# include <stdio.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont, num = 0;
	
	printf("Digite um valor: "); scanf("%d", &num);
	
	//Repita...até
	cont = 0;
	do{
		if(num < 1){
			printf("Digite um número maior.");
		}else{
			puts("Fatec FDP");
			cont = cont + 1;}
	}while(cont < num); 
	
	printf("\n");
	
	//Enquanto...faça
	cont = 0;
	while(cont < num){
		if(num < 1){
			printf("Digite um número maior.");
		}else{
			puts("Fazendinha");
			cont++;
		}
	};

	printf("\n");
	
	//Para...faça
	for(cont = 0; cont < num; cont++){
		if(num < 1){
			printf("Digite um número maior");
		}else{
			puts("Give me cold air");
	}
	};
}//Fim do programa.
