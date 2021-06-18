#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int tamanho = 30, v_n[tamanho], i, v_par[tamanho], n_par = 0; 				
	
	printf("Digite 30 numeros!\n");
	for(i = 1; i <= tamanho; i++){
		printf("Digite o %d numero: ", i);
		scanf("%d", &v_n[i]);
	}
	
	for(i = 1; i <= tamanho; i++){
		if((v_n[i] % 2) == 0){
			v_par[n_par] = v_n[i];
			n_par++;
		}
	}
	
	printf("Dos numeros digitado, sao pares: ");
	for(i = 0; i < n_par; i++){
		printf("[%d]", v_par[i]);
	}
	return 0;
	system("pause");	
}
