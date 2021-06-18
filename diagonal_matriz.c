#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int matriz[3][3], matriz_diag[3][3];
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
	
	printf("\n\nMatriz Diagonal:\n");
	for(i = 0; i < 3; i++){				// escreve matriz
		for(j = 0; j < 3; j++){		
			if(i > j){
				matriz_diag[i][j] = 0;
			}else{
				matriz_diag[i][j] = matriz[i][j];	
			}
			printf("[%d]", matriz_diag[i][j]);			
		}		
		printf("\n");
	}
	
}
