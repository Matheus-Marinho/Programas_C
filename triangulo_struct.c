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
	
	printf("Informe os lados de um triângulo:\n");
	printf("Lado 1: ");
	scanf("%d", &triangulo.lado1);
	
	printf("Lado 2: ");
	scanf("%d", &triangulo.lado2);
	
	printf("Lado 3: ");
	scanf("%d", &triangulo.lado3);	
	
	if(triangulo.lado1 > (triangulo.lado2 + triangulo.lado3)){
		printf("O lado 1 é maior que a soma dos lados 2 e 3, sendo assim, não se forma um triângulo!");
	}else if(triangulo.lado2 > (triangulo.lado1 + triangulo.lado3)){
		printf("O lado 2 é maior que a soma dos lados 1 e 3, sendo assim, não se forma um triângulo!");
	}else if(triangulo.lado3 > (triangulo.lado1 + triangulo.lado2)){
		printf("O lado 3 é maior que a soma dos lados 1 e 2, sendo assim, não se forma um triângulo!");
	}else{
		printf("Os lados informados, matemáticamente falando, configuram um triângulo: ");
		
		if(triangulo.lado1 == triangulo.lado2 && triangulo.lado1 == triangulo.lado3){
			printf("Equilátero!");
		}else if(triangulo.lado1 == triangulo.lado2 && triangulo.lado1 != triangulo.lado3 || triangulo.lado1 == triangulo.lado3 && triangulo.lado1 != triangulo.lado2 || triangulo.lado2 == triangulo.lado3 && triangulo.lado2 != triangulo.lado1){
			printf("Isósceles!");
		}else{
			printf("Escaleno!");
		}
	}	
	
	return 0;
}
