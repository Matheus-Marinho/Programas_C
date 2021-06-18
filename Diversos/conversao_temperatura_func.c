#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

float Esc_Celsius(float temperatura);
float Esc_Fahrenheit(float temperatura);
float Esc_Kelvin(float temperatura);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float temperatura;
	int escala_atual;
	
	printf("Informe a temperatura: ");
	scanf("%f", &temperatura);
	
	printf("\n1 - Celsius | 2 - Fahrenheit | 3 - Kelvin\n");
	printf("Informe a escala da temperatura: ");
	fflush(stdin);
	scanf("%d", &escala_atual);
	
	
	switch(escala_atual){
		case 1: // Celsius
			Esc_Celsius(temperatura);
			break;
		case 2: // Fahrenheit
			Esc_Fahrenheit(temperatura);
			break;	
		case 3: // Kelvin
			Esc_Kelvin(temperatura);
			break;
		defaut:
			printf("Opção inválida!");
			break;
	}
	
	return 0;
}

float Esc_Celsius(float temperatura){
	
	int escala;
	printf("Informe a escala no qual deseja converter:\n");
	printf("1 - Fahrenheit \n2 - Kelvin\n");
	scanf("%d", &escala);
	
	if(escala == 1){
		float Fahrenheit = temperatura * (1.8) + 32;
		printf("%.2f em Celcius é %.2f em Fahrenheit", temperatura, Fahrenheit);
	}else if(escala == 2){
		float Kelvin = temperatura + 273.15;
		printf("%.2f em Celcius é %.2f em Kelvin", temperatura, Kelvin);				
	}else{
		printf("Opção inválida!");
	}	
}

float Esc_Fahrenheit(float temperatura){
	
	int escala;
	printf("Informe a escala no qual deseja converter:\n");
	printf("1 - Celsius \n2 - Kelvin\n");
	scanf("%d", &escala);
	
	if(escala == 1){
		float Celsius = (temperatura - 32) / 1.8;
		printf("%.2f em Fahrenheit é %.2f em Celsius", temperatura, Celsius);
	}else if(escala == 2){
		float Kelvin = (temperatura - 32) * 5/9 + 273.15;
		printf("%.2f em Fahrenheit é %.2f em Kelvin", temperatura, Kelvin);				
	}else{
		printf("Opção inválida!");
	}	
}

float Esc_Kelvin(float temperatura){

	int escala;
	printf("Informe a escala no qual deseja converter:\n");
	printf("1 - Fahrenheit \n2 - Celsius\n");
	scanf("%d", &escala);
	
	if(escala == 1){
		float Fahrenheit = 1.8 * (temperatura - 273.15) + 32;
		printf("%.2f em Kelvin é %.2f em Fahrenheit", temperatura, Fahrenheit);
	}else if(escala == 2){
		float Celsius = temperatura - 273.15;
		printf("%.2f em Kelvin é %.2f em Celsius", temperatura, Celsius);				
	}else{
		printf("Opção inválida!");
	}	
}

