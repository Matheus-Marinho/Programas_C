#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n_inicio, n_final, n_inter;
	
	printf("IDENTIFICAR SE UM NUMERO ESTA NUM DETERMINADO INTERVALO\n\n");
	
	Inicio:
	
	printf("Didite o valor inicial do intervalo: ");
	scanf("%d", &n_inicio);
	printf("Digite o valor final do intervalo: ");
	scanf("%d", &n_final);
		
	if(n_inicio < n_final){
		printf("Digite o valor que deseja consultar: ");
		scanf("%d", &n_inter);
		if(n_inter >= n_inicio && n_inter <= n_final){
			printf("O numero %d esta dentro do intervalo indicado(%d a %d).", n_inter, n_inicio, n_final);
		}else{
			printf("O numero %d nao esta dentro do intervalo indicado(%d a %d).", n_inter, n_inicio, n_final);
		}
	}else{
			printf("O valor inicial eh maior ou igual ao valor final, gentileza informar novos numeros para intervalo.\n\n");
			goto Inicio;
	}
}
