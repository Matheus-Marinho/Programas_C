#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int l = 3, c = 3, sim = 0;				
	int matriz[l][c]; 				
	
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			printf("Digite o valor para a posicao [%d,%d]: ", l, c);
			scanf("%d", &matriz[l][c]);
		}		
	}
	
	printf("\nMatriz Informada:\n");
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			printf("[%d]", matriz[l][c]);
			if(matriz[l][c] != matriz[c][l]){
					sim++;
			}
		}		
		printf("\n");
	}
	
	if(sim > 0){
		printf("\nA matriz informada nao eh simetrica!");
	}else{
		printf("\nA matriz informada eh simetrica!");
	}
	return 0;
	system("pause");
}
