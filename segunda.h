#ifndef TRIE_H_
#define TRIE_H_

typedef struct No{
	
	struct No *prox;	
	char verifica;

}no;

typedef struct Arvore{

	no *raiz;
	no *esq;
	no *dir;

}arvore;

#endif