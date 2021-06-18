#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float n, n_soma = 0, i, media;
	
	printf("Digite dez numeros para calcular a media!\n");
	
	for(i = 0; i < 10; i++){
		
		scanf("%f", &n);
		
		n = n + n_soma;
		n_soma = n;
	}
	
	media = n_soma/10;
		
	printf("A media dos valores eh: %.2f", media);
	
	system("break");
}
