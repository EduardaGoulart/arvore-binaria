#include "segunda.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	arvore* tree = (arvore*)malloc(sizeof(arvore));
	cria(tree);

	char letra[256];
	int tamanho;
	
	FILE* input = fopen(argv[1], "r");

	if(!input){

		printf("Erro: nao foi possivel ler o arquivo \n");
		exit(404);

	}

	while(!feof(input)){

		fscanf(input, "%s", letra);
		tamanho++;
		

	}	

	fclose(input);
	ordena(letra,tamanho);
	
	return 0;
}