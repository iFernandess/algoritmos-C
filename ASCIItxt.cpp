/*
	Name: ASCIItxt.cpp
	Author: Eu
	Date: 22/09/25 10:17
	Description: Programa para passar a tabela ASC para um arquivo txt
*/

#include <stdio.h>

main(){

	int caractere, i, x;
	caractere = x = 0;
	FILE *fp;

	fp = fopen("TabelaASCII.txt", "w");
	if (fp == NULL) { //Verifica se deu erro ao abrir o arquivo
		printf("Erro ao abrir o arquivo para escrita!");
		return 1;
	}

	for(i= 0; i < 256; i++) {
		fprintf(fp, "%d - %c\n", i, i);
	}
 
	puts("Arquivo texto gerado com sucesso!!!");
	fclose(fp); 

}//Fim do programa

