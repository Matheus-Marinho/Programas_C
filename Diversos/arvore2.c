#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

typedef struct Arvore{
	int Valor;
	struct Arvore *Esquerda;	
	struct Arvore *Direita;	
}No;

No *InserirNo(int Valor, No *Esquerda, No *Direita);
void ArvoreOrdenada(No *n);
void ArvorePosOrdem(No *n);
void ArvorePreOrdem(No *n);

int main(){
	setlocale(LC_ALL, "Portuguese");

	No *n = InserirNo(20, InserirNo(46, NULL, NULL), InserirNo(21, NULL, NULL));
	
	printf("Arvore Ordenada: ");
	ArvoreOrdenada(n);

	return 0;
	system("pause");
}


No *InserirNo(int Valor, No *Esquerda, No *Direita){
	
	No *n = (No*) malloc(sizeof(n));
	
	if(n == NULL){
		exit(1);
	}else{
		(*n).Valor = Valor;
		(*n).Esquerda = Esquerda;
		(*n).Direita = Direita;
	}
	
	return n;
}

void ArvoreOrdenada(No *n){
	if(n != NULL){
		ArvoreOrdenada((*n).Esquerda);
		printf("\t%d", (*n).Valor);
		ArvoreOrdenada((*n).Direita);
	}	
}


void ArvorePosOrdem(No *n){
	if(n != NULL){
		ArvoreOrdenada((*n).Esquerda);
		ArvoreOrdenada((*n).Direita);
		printf("\t%d", (*n).Valor);
	}	
}


void ArvorePreOrdem(No *n){
	if(n != NULL){
		printf("\t%d", (*n).Valor);
		ArvoreOrdenada((*n).Esquerda);
		ArvoreOrdenada((*n).Direita);
	}	
}


