#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

// Fila -> FIFO (First In First Out - Primeiro a entrar, primeiro a sair)


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Lista[100], Valor, Tamanho = 0, i, Op;
	
	Inicio:
	printf("Fila\n\n");
		
	printf("\nDigite: 1 - Inserir / 2 - Remover / 3 - Imprimir ");
	scanf("%d", &Op);

	switch(Op){
		case 1:	// Inserir na Fila	
			printf("\nInserir Valor: ");
			scanf("%d", &Valor);
			
			if(Tamanho == 0){
				Tamanho++;
				Lista[Tamanho] = Valor;
			}else if(Tamanho > 0){
				Tamanho++;		
				Lista[Tamanho] = Valor;
			}
			
			break;
		case 2:	//Remover na Fila
			if(Tamanho == 0){
				printf("\nLista zerada!");
			}else if(Tamanho > 0){
				for(i = 1;i <= Tamanho; i++){
					Lista[i] = Lista[i+1];
				}
				Tamanho--;
			}
					
			break;
		case 3:	// Imprimir Lista
			printf("\nA Lista = {");
			
			for(i = 1; i <= Tamanho; i++){
				printf(" %d ", Lista[i]);
			}
			printf("}\n");
			
			break;
		default:
			printf("Opção inválida!\n");
			break;
	}

	int Continuar;
	printf("\nDeseja executar novamente? 1 - Sim / 2 - Não  ");
	scanf("%d", &Continuar);
	
	if(Continuar == 1){
		goto Inicio;
	}
	
	return 0;
}



