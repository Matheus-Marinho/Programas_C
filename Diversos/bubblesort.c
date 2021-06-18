#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void LerVetor(int Vetor[], int Tamanho);
void EscreverVetor(int Vetor[], int Tamanho);
void BubbleSort(int Vetor[], int Tamanho);

int main(){
	setlocale(LC_ALL, "Portuguese");

	int Tam = 10, Vet[Tam];
	LerVetor(Vet, Tam);
	printf("\nVetor = {");
	EscreverVetor(Vet, Tam);

	BubbleSort(Vet, Tam);
	
	printf("\nVetor Ordenado = {");
	EscreverVetor(Vet, Tam);

	return 0;
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

void BubbleSort(int Vetor[], int Tamanho){
	int aux, cont = Tamanho - 1, i;
	while(cont > 0){
		for(i = 1; i <= Tamanho - 1; i++){
			if(Vetor[i] > Vetor[i+1]){
				aux = Vetor[i];
				Vetor[i] = Vetor[i+1];
				Vetor[i+1] = aux;
				printf("\nPasso: {"); // Conferindo as mudanças
				EscreverVetor(Vetor, Tamanho); // Conferindo as mudanças

			}
		}
		Tamanho--;
		cont--;
	}
}


