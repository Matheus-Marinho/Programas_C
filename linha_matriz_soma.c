#include<stdio.h>
#include<stdlib.h>

// Somar Linhas da Matriz

int main(){
	
	int matriz[3][3];
	int soma_linha[3];
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
	
	for(i = 0; i < 3; i++){				// soma linhas
		soma_linha[i] = 0;
		for(j = 0; j < 3; j++){				
			soma_linha[i] += matriz[i][j];			
		}		
	}
	
	for(i = 0; i < 3; i++){				// escreve soma das linhas				
		printf("Soma das linhas[%d] = [%d]", i, soma_linha[i]);			
		printf("\n");
	}
	
}
