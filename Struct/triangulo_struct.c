#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

struct lados_triangulo{
	int lado1;
	int lado2;
	int lado3;
}triangulo;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe os lados de um tri�ngulo:\n");
	printf("Lado 1: ");
	scanf("%d", &triangulo.lado1);
	
	printf("Lado 2: ");
	scanf("%d", &triangulo.lado2);
	
	printf("Lado 3: ");
	scanf("%d", &triangulo.lado3);	
	
	if(triangulo.lado1 > (triangulo.lado2 + triangulo.lado3)){
		printf("O lado 1 � maior que a soma dos lados 2 e 3, sendo assim, n�o se forma um tri�ngulo!");
	}else if(triangulo.lado2 > (triangulo.lado1 + triangulo.lado3)){
		printf("O lado 2 � maior que a soma dos lados 1 e 3, sendo assim, n�o se forma um tri�ngulo!");
	}else if(triangulo.lado3 > (triangulo.lado1 + triangulo.lado2)){
		printf("O lado 3 � maior que a soma dos lados 1 e 2, sendo assim, n�o se forma um tri�ngulo!");
	}else{
		printf("Os lados informados, matem�ticamente falando, configuram um tri�ngulo: ");
		
		if(triangulo.lado1 == triangulo.lado2 && triangulo.lado1 == triangulo.lado3){
			printf("Equil�tero!");
		}else if(triangulo.lado1 == triangulo.lado2 && triangulo.lado1 != triangulo.lado3 || triangulo.lado1 == triangulo.lado3 && triangulo.lado1 != triangulo.lado2 || triangulo.lado2 == triangulo.lado3 && triangulo.lado2 != triangulo.lado1){
			printf("Is�sceles!");
		}else{
			printf("Escaleno!");
		}
	}	
	
	return 0;
}
