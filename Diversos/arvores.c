/*
Arvore binaria: cada nó pai possui dois nós filhos;
- É uma forma especial de lista encadeada;
- Inserção, consulta e remoção em qualquer ordem;
- O processo de acesso a cada nó da arvore gera um algoritmo;

- Nó: Elemento que contem um valor
- Arco: Liga dois nós
- Pai: Nó que da origem a N nós filhos
- Filho: No originado de um nó
- Raiz: Nó que está no topo da arvore (Não tem nó pai)
- Folhas: Nós que estão nas extremidades inferiores (Não tem nó filhos)
- Grau: o número de filhos que um nó possui (Define o tipo da arvore)
- Nivel: Comprimento da Árvore (do topo até a extremidade)
- Altura/Profundidade: a maior distancia encontrada numa arvore (nivel+1)

*/

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void LerVetor(int Vetor[], int Tamanho);
void EscreverVetor(int Vetor[], int Tamanho);
void GerarArvore(int Vetor[], int Tamanho);
void EscreverNosFilhos(int Pai, int Esquerda, int Direita, int i, int Tamanho);

int main(){
	setlocale(LC_ALL, "Portuguese");

	int Tam = 10, Vet[Tam];
	LerVetor(Vet, Tam);
	printf("\nVetor = {");
	EscreverVetor(Vet, Tam);

	GerarArvore(Vet, Tam);

}

void LerVetor(int Vetor[], int Tamanho){
	int i;
	for(i = 1; i <= Tamanho; i++){
		printf("Vetor[%d] = ", i);
		scanf("%d", &Vetor[i]);
	}
}

void EscreverVetor(int Vetor[], int Tamanho){
	int i;
	for(i = 1; i <= Tamanho; i++){
		printf(" %d ", Vetor[i]);
	}
	printf("}");
}

void GerarArvore(int Vetor[], int Tamanho){
	int Raiz, Pai, FilhoEsquerda, FilhoDireita, i;
	Raiz = Vetor[1];
	printf("\nNó Raiz: %d ", Raiz);
	for(i = 1; i <= (Tamanho/2); i++){
		Pai = Vetor[i];
		if(Vetor[2*i] > Vetor[(2*i)+1]){
			FilhoEsquerda = Vetor[(2*i)];
			FilhoDireita = Vetor[(2*i)+1];
			EscreverNosFilhos(Vetor[i], FilhoEsquerda, FilhoDireita, i, Tamanho);
		}else if(Vetor[2*i] < Vetor[(2*i)+1]){
			FilhoEsquerda = Vetor[2*i];
			FilhoDireita = Vetor[(2*i)+1];
			EscreverNosFilhos(Vetor[i], FilhoEsquerda, FilhoDireita, i, Tamanho);	
		}else if(Vetor[2*i] == Vetor[(2*i)+1]){
			FilhoEsquerda = Vetor[2*i];
			FilhoDireita = FilhoEsquerda;
			EscreverNosFilhos(Vetor[i], FilhoEsquerda, FilhoDireita, i, Tamanho);
		}
	}	
}


void EscreverNosFilhos(int Pai, int Esquerda, int Direita, int i, int Tamanho){
	if((2*i)+1 > Tamanho){
		printf("\nFilhos do Nó %d são Esquerda: %d Direita: %d", Pai, Esquerda, NULL);		
	}else{
		printf("\nFilhos do Nó %d são Esquerda: %d Direita: %d", Pai, Esquerda, Direita);		
	}
	
	
	
}





