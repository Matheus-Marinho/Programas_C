#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int matriz[3][3], matriz_mult[3][3];
	int mult_linha[3];
	int i, j;
	
	for(i = 0; i < 3; i++){				
		for(j = 0; j < 3; j++){	
			printf("Digite o valor da Matriz[%d][%d] = ",i ,j);			
			scanf("%d", &matriz[i][j]);			
		}		
	}
	
	for(i = 0; i < 3; i++){				
		printf("Digite o valor do Vetor[%d] = ",i);
		scanf("%d", &mult_linha[i]);					
	}
	
	printf("\n\nMatriz Inicial:\n");
	for(i = 0; i < 3; i++){				// escreve matriz
		for(j = 0; j < 3; j++){				
			printf("[%d]", matriz[i][j]);			
		}		
		printf("\n");
	}
	
	printf("\n\nVetor:\n");
	for(i = 0; i < 3; i++){				
			printf("[%d]", mult_linha[i]);			
	}
	
	for(i = 0; i < 3; i++){				// mult linhas
		for(j = 0; j < 3; j++){	
			matriz_mult[i][j] = matriz[i][j] * mult_linha[i];			
		}		
	}
	
	printf("\n\nMatriz LinhaxVetor:\n");
	for(i = 0; i < 3; i++){				// escreve matriz mult
		for(j = 0; j < 3; j++){				
			printf("[%d]", matriz_mult[i][j]);			
		}		
		printf("\n");
	}
	
}
