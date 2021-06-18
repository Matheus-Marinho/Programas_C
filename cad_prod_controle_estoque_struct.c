#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

struct dados_produtos{
	int cod;
	char nome[50];
	float preco;
	int qtd_estoque;
}produtos[5];

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, qtde, prod, op;
	
	for(i = 0; i < 5; i++){
		printf("Informe o código do produto: ");
		scanf("%d", &produtos[i].cod);		
		
		printf("Informe o nome do produto: ");
		fflush(stdin);
		gets(produtos[i].nome);	

		printf("Informe o preço do produto: ");
		scanf("%f", &produtos[i].preco);		

		printf("Informe o estoque do produto: ");
		scanf("%d", &produtos[i].qtd_estoque);		
		
		printf("\n");		
	}	

	Pedido:
	system("cls");
	printf("Produtos:\n\n");
	for(i = 0; i < 5; i++){
		printf("Cód.: %d\n", produtos[i].cod);
		printf("Nome: %s \n", produtos[i].nome);
		printf("Preço: %.2f \n", produtos[i].preco);
		printf("Estoque: %d \n\n", produtos[i].qtd_estoque);
	}
	

	printf("\n\nPedido\n");
	printf("Informe o código produto desejado: ");
	scanf("%d", &prod);
	
	for(i = 0; i < 5; i++){
		if(prod == produtos[i].cod){
			printf("Informe a quantidade que deseja comprar: ");
			scanf("%d", &qtde);
			
			if(qtde <= produtos[i].qtd_estoque){
				produtos[i].qtd_estoque = produtos[i].qtd_estoque - qtde;
				printf("\n\nPedido realizado!\n");
				printf("Produto: %s - Qtde: %d\n", produtos[i].nome, qtde);
				printf("Estoque restante: %d\n\n", produtos[i].qtd_estoque);
			}else{
				printf("Estoque insuficiente!\n\n");
			}
		}
	}
	
	printf("Deseja realizar novo pedido? (1 = Sim | 2 - Não) - ");
	scanf("%d", &op);
	
	if(op == 1){
		goto Pedido;
	}else{
		printf("Pedido finalizado!\n\n");
	}
	
	return 0;
}
