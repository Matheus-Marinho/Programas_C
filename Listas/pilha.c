#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

// Pilha -> LIFO (Last In First Out - Ultimo a entrar, primeiro a sair)


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Lista[100], Valor, Tamanho = 0, i, Op;
	
	Inicio:

	printf("Pilha\n\n");
	

	printf("\nDigite: 1 - Push(Inserir) / 2 - Pop(Remover) / 3 - Imprimir ");
	scanf("%d", &Op);

	switch(Op){
		case 1: // Push (Incluir em pilha - no inicio)
			printf("\nInserir Valor: ");
			scanf("%d", &Valor);
			
			if(Tamanho == 0){
				Tamanho++;
				Lista[Tamanho] = Valor;
			}else if(Tamanho > 0){
				Tamanho++;
				for(i = Tamanho-1; i >= 1; i--){
					Lista[i+1] = Lista[i];
				}
				Lista[1] = Valor;		
			}
			
			break;
		case 2:	// Pop (Remover em pilha - do inicio)		
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



