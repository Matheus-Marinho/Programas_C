#include<stdio.h>
#include<stdlib.h>

//q5 aula

int main(){
	
	int matriz[3][3], matriz_mult[3][3];
	int i, j, a = 0;
	
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
	
	printf("\n\nMatriz Mult:\n");
	for(i = 0; i < 3; i++){				// escreve matriz
		for(j = 0; j < 3; j++){
			matriz_mult[i][j] = matriz[j][i] * matriz[i][j];
			printf("[%d]", matriz_mult[i][j]);
			a++;			
		}		
		printf("\n");
	}
	
}
