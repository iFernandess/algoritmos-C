/*
	Name: NotasAlunos.cpp
	Author: Igor Fernandes
	Date: 08/04/25 11:20
	Description: Programa para calcular média de alunos e percentual de aprovação.
*/

# include <stdio.h>
# include <locale.h>

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float n1, n2, n3, n4;
	n1 = n2 = n3 = n4 = 0.0;
	
	float media, percAprov, percReprov, percExame, notaExame;
	media = percAprov = percReprov = percExame = notaExame = 0.0;
	
	int i, aprovados, reprovados, qtdExame;
	i = aprovados = reprovados = qtdExame = 0.0;
	
	while(i < 7){
		printf("%dº aluno: \n", i+1);
		printf("Digite a primeira nota: "); scanf("%f", &n1);
		printf("Digite a segunda nota: "); scanf("%f", &n2);
		printf("Digite a terceira nota: "); scanf("%f", &n3);
		printf("Digite a quarta nota: "); scanf("%f", &n4);
		
		media = (n1 + n2 + n3 + n4) / 4;
		
		if(media >= 6){
			puts("Aprovado!");
			printf("Sua média foi de: %.2f\n", media);
			aprovados++;
		}else if(media >= 4){
			puts("Vc esta de exame!");
			qtdExame++;
			notaExame = 12.0 - media;
			printf("Sua média foi de: %.2f\n", media);
			printf("Nota necessária no exame: %.1f\n", notaExame);
		}else{
			puts("Reprovado!");
			printf("Sua média foi de: %.2f\n", media);
			reprovados++;
		}
		i++;
	} //Fim while
	
	percAprov = aprovados * (100 / 7);
	percReprov = reprovados * (100 / 7);
	percExame = qtdExame * (100 / 7);
	printf("\nQuantidade de aprovados: %d - %.1f%%", aprovados, percAprov);
	printf("\nQuantidade de reprovados: %d - %.1f%%", reprovados, percReprov);
	printf("\nQuantidade de alunos que farão exame: %d - %.1f%%", qtdExame, percExame);
	
	
}// Fim do pregrama

