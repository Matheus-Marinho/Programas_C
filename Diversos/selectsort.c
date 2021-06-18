#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void LerVetor(int Vetor[], int Tamanho);
void EscreverVetor(int Vetor[], int Tamanho);
void SelectSort(int Vetor[], int Tamanho);
int IndiceMenorValor(int Vetor[], int Tamanho, int IndiceInicial);

int main(){
	setlocale(LC_ALL, "Portuguese");

	int Tam = 10, Vet[Tam];
	LerVetor(Vet, Tam);
	printf("\nVetor = {");
	EscreverVetor(Vet, Tam);

	SelectSort(Vet, Tam);
	
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

void SelectSort(int Vetor[], int Tamanho){
	int i, aux, Indice;
	for(i = 1; i <= Tamanho; i++){
		Indice = IndiceMenorValor(Vetor, Tamanho, i);
		aux = Vetor[i];
		Vetor[i] = Vetor[Indice];
		Vetor[Indice] = aux;
	}
}

int IndiceMenorValor(int Vetor[], int Tamanho, int IndiceInicial){
	int Indice = IndiceInicial, i;
	for(i = IndiceInicial + 1; i <= Tamanho; i++){
		if(Vetor[Indice] > Vetor[i]){
			Indice = i;
		}
	}
	return Indice;
}
