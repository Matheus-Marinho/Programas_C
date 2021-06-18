#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int matriz[3][3];
	int i, j;
	
	for(i = 0; i < 3; i++){				
		for(j = 0; j < 3; j++){	
			printf("Digite o valor da Matriz[%d][%d] = ",i ,j);			
			scanf("%d", &matriz[i][j]);			
		}		
	}
	
	printf("\n\nMatriz Inicial:\n");
	for(i = 0; i < 3; i++){				// escreve matriz
		for(j = 0; j < 3; j++){				
			printf("[%d]", matriz[i][j]);			
		}		
		printf("\n");
	}
	
	printf("\n\nMatriz inversa:\n");
	for(i = 0; i < 3; i++){				// escreve matriz
		for(j = 0; j < 3; j++){
			printf("[%d]", matriz[j][i]);			
		}		
		printf("\n");
	}
	
}
