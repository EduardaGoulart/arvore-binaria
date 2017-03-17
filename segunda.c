#include "segunda.h"
#include <stdio.h>
#include <stdlib.h>


void ordena(char* palavra, int tam){

	int i, j, min, aux;

	for (i = 0; i < (tam - 1); i++) {
	/* O minimo é o primeiro número não ordenado ainda */
		min = i;

		for (j = i+1; j < tam; j++) {
		
			/* Caso tenha algum numero menor ele faz a troca do minimo*/
			if (palavra[j] < palavra[min]) {

				min = j;

			}
		}
		/* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/

		if (i != min) {

			aux = palavra[i];
			palavra[i] = palavra[min];
			palavra[min] = aux;

		}

	}

}

void cria(arvore *arv){

	arv->raiz = (no*)calloc(1,sizeof(no));

}

void inserir(arvore *arv, char *palavra){

	no *aux;
	aux = arv->raiz;
	int i;
	
	for(i=0; palavra[i] != ','; i++){

		if(aux->prox == NULL){

			aux->prox = (no *) malloc(sizeof(no));
			(aux)->esq = NULL;
			(aux)->dir = NULL;
			(aux)->prox = palavra[i];

		}
		
		else{

			if(palavra < (arv)->prox){
			
				inserir(&(arv)->esq, palavra);

			}

			else
			inserir(&(arv->dir, palavra));

	}

}








