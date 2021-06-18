#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void LerVetor(int Vetor[], int Tamanho);
void EscreverVetor(int Vetor[], int Tamanho);
void InsertSort(int Vetor[], int Tamanho);

int main(){
	setlocale(LC_ALL, "Portuguese");

	int Tam = 10, Vet[Tam];
	LerVetor(Vet, Tam);
	printf("\nVetor = {");
	EscreverVetor(Vet, Tam);

	InsertSort(Vet, Tam);
	
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

void InsertSort(int Vetor[], int Tamanho){
	int i, aux, j;
	for(i = 2; i <= Tamanho; i++){
		aux = Vetor[i];
		j = i - 1;
		while((j >= 1)&&(aux < Vetor[j])){
			Vetor[j + 1] = Vetor[j];
			j--;
		}
		Vetor[j + 1] = aux;
	}
	
}


