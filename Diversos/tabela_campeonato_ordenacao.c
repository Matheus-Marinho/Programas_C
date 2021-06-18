#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void BubbleSort(int tabela[8][4], char Times[8][10]);
void ImprimirTabela(int tabela[8][4], char Times[8][10]);
void SelectSort(int tabela[8][4], char Times[8][10]);
int IndiceMenorValor(int tabela[8][4], char Times[8][10], int IndiceInicial);
void InsertSort(int tabela[8][4], char Times[8][10]);
void Op_Ordem(int tabela[8][4], char Times[8][10]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, tabela[8][4] = {3, 3, 1, 12,		
						1, 3, 3, 6,		
						4, 2, 1, 14,		
						2, 1, 4, 7,		
						2, 2, 3, 8,		
						3, 1, 3, 10,		
						0, 3, 4, 3,
						5, 1, 1, 16};

	
	char Times[8][10] = {"MIL",
						"BOL",
						"JUV",
						"NAP",
						"LAZ",
						"ROM",
						"TOR",
						"INT "};
			
	printf("\t== Campeonato Italiano ==\n");
	ImprimirTabela(tabela, Times);

	Op_Ordem(tabela, Times);
	
	printf("\tTabela de Classificação:\n");
	ImprimirTabela(tabela, Times);
		
	return 0;
}


void ImprimirTabela(int tabela[8][4], char Times[8][10]){
	int i, j;
	printf("| TIME  |   V   |   E   |   D   |  PNT  |\n");
	for(i = 0; i < 8; i++){
		printf("| %s\t|", Times[i]);
		for(j = 0; j < 4; j++){
			printf("   %d\t|", tabela[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
}

void BubbleSort(int tabela[8][4], char Times[8][10]){
	int aux, Tamanho = 8, cont = Tamanho - 1, i, j, auxt;
	while(cont > 0){
		for(i = 0; i < Tamanho - 1; i++){
			for(j = 0; j < 4; j++){			
				if(tabela[i][3] < tabela[i+1][3]){
					aux = tabela[i][j];
					auxt = Times[i][j];
					tabela[i][j] = tabela[i+1][j];
					Times[i][j] = Times[i+1][j];
					tabela[i+1][j] = aux;
					Times[i+1][j] = auxt;
				}
			}
		}
		Tamanho--;
		cont--;
	}
}

void SelectSort(int tabela[8][4], char Times[8][10]){
	int i, j, aux, Indice, Tamanho = 8, auxt;
	for(i = 0; i < Tamanho; i++){
		for(j = 0; j < 4; j++){
			Indice = IndiceMenorValor(tabela, Times, i);
			aux = tabela[i][j];
			auxt = Times[i][j];
			tabela[i][j] = tabela[Indice][j];
			Times[i][j] = Times[Indice][j];
			tabela[Indice][j] = aux;
			Times[Indice][j] = auxt;
		}
	}
}

int IndiceMenorValor(int tabela[8][4], char Times[8][10], int IndiceInicial){
	int Indice = IndiceInicial, i, Tamanho = 8, j;
	for(i = IndiceInicial + 1; i <= Tamanho; i++){
		for(j = 0; j < 4; j++){
			if(tabela[Indice][3] < tabela[i][3]){
				Indice = i;
			}
		}
	}
	return Indice;
}

void InsertSort(int tabela[8][4], char Times[8][10]){
	int i, aux, j, x, auxt, Tamanho = 8, col;
	for(i = 1; i < Tamanho; i++){
		for(j = 0; j < 4; j++){
			col = tabela[i][3];
			aux = tabela[i][j];
			auxt = Times[i][j];
			x = i - 1;
			while((x >= 0)&&(col > tabela[x][3])){
				tabela[x + 1][j] = tabela[x][j];
				Times[x + 1][j] = Times[x][j];
				x--;
			}
			tabela[x + 1][j] = aux;
			Times[x + 1][j] = auxt;
		}
	}
}

void Op_Ordem(int tabela[8][4], char Times[8][10]){
	int op;
	
	Selecao:
	printf("Informe qual método de ordenação deseja utilizar:");
	printf("\n(1 - Método Bubble Sort | 2 - Método Select Sort | 3 - Método Insert Sort)\n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			printf("\nMétodo Bubble Sort!\n\n");
			BubbleSort(tabela, Times);	
			break;
		case 2:
			printf("\nMétodo Select Sort!\n\n");
			SelectSort(tabela, Times);
			break;
		case 3:
			printf("\nMétodo Insert Sort!\n\n");
			InsertSort(tabela, Times);
			break;
		default:
			printf("\nOpção inválida!\n");	
			goto Selecao;
			break;
	}
}

// Matheus da Silva Marinho - Matricula: 202001310291
