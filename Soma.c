#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float x, y, soma;
	
	printf("           CALCULADORA DE SOMA \n\n");
Inicio:
	printf("\nDigite o primeiro valor: \n");
	scanf("%f", &x);
	
	printf("Digite o segundo valor: \n");
	scanf("%f", &y);
	
	soma = x + y;
	printf("O resultado da soma de x + y eh: %.2f \n\n", soma);
	
	int continua;
Meio:
	printf("Deseja calcular novamente? \nDigite '1' para nova soma ou '0' para encerrar!\n");
	scanf("%d", &continua);
	if(continua == 1){
		goto Inicio;
		}else if(continua == 0){
			printf("Encerrando...\n\n");
		}else{
			printf("Opcao invalida... Tente novamente...\n\n");
			goto Meio;
		}
	
	return 0;
}
