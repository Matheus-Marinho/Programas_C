#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num, fat;
	
	printf("           CALCULADOR DE FATORIAL \n\n");

	printf("\nDigite o valor desejado: ");
	scanf("%d", &num);
	
	for(fat = 1; num > 0; num--){
		fat = fat * num;
	}
	
	printf("\nO valor fatorial solicitado eh: %d \n\n", fat);
	
}
