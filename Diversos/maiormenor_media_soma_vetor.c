#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int maior_menor(int *vetor, int i); // Questão 8
int soma(int *vetor, int i); // Questão 9
float media(int *vetor, int i); // Questão 10

int main(){
	setlocale(LC_ALL, "Portuguese");

	int vetor[10], i, maiormenor, somavet;
	float mediavet;
	
	printf("Informe 10 valore abaixo:\n");
	for(i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}

	maiormenor = maior_menor(vetor, i);
	
	somavet = soma(vetor, i);
	
	mediavet = media(vetor, i);
	
	return 0;	
}


int maior_menor(int *vetor, int i){
				
	int n_maior = *vetor;
	int n_menor = *vetor;
	
	for(i = 0; i < 10; i++){
		if(vetor[i] > n_maior){
			n_maior = vetor[i];
		}else if(vetor[i] < n_menor){
			n_menor = vetor[i];
		}
	}
	
	printf("O menor valor dentre os informados é: %d. E o maior é: %d.\n", n_menor, n_maior);
}

int soma(int *vetor, int i){
				
	int somavet = 0;
	
	for(i = 0; i < 10; i++){
		somavet = somavet + vetor[i];
	}
	
	printf("A soma dos valores informados é: %d.\n", somavet);
}

float media(int *vetor, int i){
				
	int somavet = 0;
	float mediavet;
	
	for(i = 0; i < 10; i++){
		somavet = somavet + vetor[i];
	}
	
	mediavet = (float)somavet / i;
	
	printf("A média dos valores informados é: %.2f.", mediavet);
}

