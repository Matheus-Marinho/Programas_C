#include<stdio.h>
#include<stdlib.h>

// Somar Colunas da Matriz

int main(){
	
	int matriz[3][3];
	int soma_coluna[3];
	int i, j;
	
	for(i = 0; i < 3; i++){				// preenche matriz
		for(j = 0; j < 3; j++){	
			printf("Digite o valor da Matriz[%d][%d] = ",i ,j);			
			scanf("%d", &matriz[i][j]);			
		}		
	}
	
	printf("\n\n");
	
	for(i = 0; i < 3; i++){				// escreve matriz
		for(j = 0; j < 3; j++){				
			printf("[%d]", matriz[i][j]);			
		}		
		printf("\n");
	}
	
	printf("\n\n");
	
	for(j = 0; j < 3; j++){				// soma colunas
		soma_coluna[j] = 0;
		for(i = 0; i < 3; i++){				
			soma_coluna[j] += matriz[i][j];			
		}		
	}
	
	for(j = 0; j < 3; j++){				// escreve soma das colunas			
		printf("Soma das colunas[%d] = [%d]", j, soma_coluna[j]);			
		printf("\n");
	}
	
}
