/*
Arvore binaria: cada n� pai possui dois n�s filhos;
- � uma forma especial de lista encadeada;
- Inser��o, consulta e remo��o em qualquer ordem;
- O processo de acesso a cada n� da arvore gera um algoritmo;

- N�: Elemento que contem um valor
- Arco: Liga dois n�s
- Pai: N� que da origem a N n�s filhos
- Filho: No originado de um n�
- Raiz: N� que est� no topo da arvore (N�o tem n� pai)
- Folhas: N�s que est�o nas extremidades inferiores (N�o tem n� filhos)
- Grau: o n�mero de filhos que um n� possui (Define o tipo da arvore)
- Nivel: Comprimento da �rvore (do topo at� a extremidade)
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
	printf("\nN� Raiz: %d ", Raiz);
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
		printf("\nFilhos do N� %d s�o Esquerda: %d Direita: %d", Pai, Esquerda, NULL);		
	}else{
		printf("\nFilhos do N� %d s�o Esquerda: %d Direita: %d", Pai, Esquerda, Direita);		
	}
	
	
	
}





