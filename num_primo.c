#include<stdio.h>
#include<stdlib.h>
 
int main(){
	
	int n, cont, res = 0;
 
	printf("           IDENTIFICADOR DE NUMEROS PRIMOS \n\n");
	
	printf("Digite um numero: ");
	scanf("%d", &n);
 
	for (cont = 2; cont <= n / 2; cont++) { 
    	if (n % cont == 0) { 
       		res++; 
       }
 	}
 
 	if (res == 0){
    printf("\nO numero %d eh um numero primo\n", n);
 		}else{
    printf("\nO numero %d nao eh um numero primo\n", n);
	}
	
}
