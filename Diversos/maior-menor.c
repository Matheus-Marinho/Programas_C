#include<stdio.h>
#include<stdlib.h>

int main(){
	
Inicio:

	printf("		Identificador de maior e menor numero \n\n\n");
	
	int n1, n2, n3, retorno;
	
	printf("Digite o valor do primeiro numero:  ");
	scanf("%d", &n1);
	printf("\n1 Valor: %d |	2 Valor:  |	3 Valor:  \n", n1);
	
	printf("\nDigite o valor do segundo numero:  ");
	scanf("%d", &n2);
	printf("\n1 Valor: %d |	2 Valor: %d |	3 Valor:  \n", n1, n2);

	printf("\nDigite o valor do terceiro numero:  ");
	scanf("%d", &n3);
	printf("\n1 Valor: %d |	2 Valor: %d |	3 Valor: %d \n\n", n1, n2, n3);
	
	if(n1 == n2 || n1 == n3 || n2 == n3){														
		printf("Ha valores digitados iguais! Digite novamente!\n\n");
		goto Inicio;
	}
	
	if(n1 > n2 && n1 > n3){
		if(n2 < n1 && n2 < n3){
			printf("O menor numero eh '%d' e o maior numero eh '%d'!", n2, n1);
		}else{
			printf("O menor numero eh '%d' e o maior numero eh '%d'!", n3, n1);
		}
	}
	
	if(n2 > n1 && n2 > n3){
		if(n1 < n2 && n1 < n3){
			printf("O menor numero eh '%d' e o maior numero eh '%d'!", n1, n2);
		}else{
			printf("O menor numero eh '%d' e o maior numero eh '%d'!", n3, n2);
		}
	}
	
	if(n3 > n1 && n3 > n2){	
		if(n2 < n1 && n2 < n3){
			printf("O menor numero eh '%d' e o maior numero eh '%d'!", n2, n3);
		}else{
			printf("O menor numero eh '%d' e o maior numero eh '%d'!", n1, n3);
		}
	}
	
	printf("\n\nDeseja inserir novos numeros? Digite '1' para sim ou '0' para nao!\n");
	scanf("%d", &retorno);
	
	if(retorno == 1){
		system("cls");
		goto Inicio;
	}	
	
}

