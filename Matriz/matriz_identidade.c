#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int linha = 3, coluna = 3;				
	int matriz[linha][coluna]; 				
	
	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			printf("Digite o valor para a posicao [%d , %d]: ", linha, coluna);
			scanf("%d", &matriz[linha][coluna]);
		}		
	}
	
	printf("\nMatriz Informada:\n");
	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			printf("[%d]", matriz[linha][coluna]);
		}		
		printf("\n");
	}
	
	printf("\nMatriz Identidade:\n");
	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			if(linha == coluna){
				matriz[linha][coluna] = 1;			
				printf("[%d]", matriz[linha][coluna]);
			}else{
				matriz[linha][coluna] = 0;
				printf("[%d]", matriz[linha][coluna]);
			}
		}		
		printf("\n");
	}
	
	
}
