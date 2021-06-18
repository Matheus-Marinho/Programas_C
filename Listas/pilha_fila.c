#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

// Pilha -> LIFO (Last In First Out - Ultimo a entrar, primeiro a sair)
// Fila -> FIFO (First In First Out - Primeiro a entrar, primeiro a sair)


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Lista[100], Valor, Tamanho = 0, i, Op;
	
	Inicio:
	printf("\nDigite: 1 - Inserir(Fila) / 2 - Remover(Fila) / 3 - Push(Incluir - pilha) / 4 - Pop (Remover - pilha) / 5 - Imprimir ");
	scanf("%d", &Op);

	switch(Op){
		case 1:	// Inserir em fila	
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
		case 2:	//Remover em fila (primeiro valor da fila - FIFO)
			if(Tamanho == 0){
				printf("\nLista zerada!");
			}else if(Tamanho > 0){
				for(i = 1;i <= Tamanho; i++){
					Lista[i] = Lista[i+1];
				}
				Tamanho--;
			}
					
			break;
		case 3: // Push (Incluir em pilha - no inicio)
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
		case 4:	// Pop (Remover em cima do Push - LIFO)		
			if(Tamanho == 0){
				printf("\nLista zerada!");
			}else if(Tamanho > 0){
				for(i = 1;i <= Tamanho; i++){
					Lista[i] = Lista[i+1];
				}
				Tamanho--;
			}
			
			break;
		case 5:	// Imprimir Lista
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



