/*
	Name: MascOuFem.cpp
	Author: Igor Fernandes
	Date: 11/03/25 11:55
	Description: Programa para descobrir o gênero do usuário.
*/

# include <stdio.h>
# include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	char sexo;
	sexo = ' ';
	
	puts("Programa para identificar o sexo do usuário.");
	
	printf("Digite o seu sexo (M/F): ");
	scanf("%c",&sexo);
	
	if(sexo == 'M' || sexo == 'm'){
		printf("Você é do sexo masculino");
		}else if(sexo == 'F' || sexo == 'f'){
				printf("Você é do sexo feminino");
			}else{
				printf("Você é uma geladeira Electrolux 4 portas.");
		}
	}

