#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int v1[10], i, v_maior, v_menor;

	printf("Digite dez valores para o vetor:\n");
	for(i = 1; i < 11; i++){
		printf("%d valor: ", i);
		scanf("%d", &v1[i]);
	}
	
	v_maior = v1[1];
	v_menor = v1[1];
	
	for(i = 1; i < 11; i++){
		if(v1[i] > v_maior){
			v_maior = v1[i];
		}else if(v1[i] < v_menor){
			v_menor = v1[i];
		}
	}
	
	printf("O menor valor digitado foi: %d\n", v_menor);
	printf("O maior valor digitado foi: %d\n", v_maior);
	
	return 0;

}
