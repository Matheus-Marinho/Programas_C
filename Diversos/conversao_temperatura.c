#include<stdio.h>
#include<stdlib.h>

int main(){
	
	printf("Conversao de temperaturas!\n\n");

	float temperatura, C, K, F;
	int escala;
	
	Inicio:
	
	printf("Informe a temperatura: ");
	scanf("%f", &temperatura);
	
	printf("\nEm qual escala a temperatura informada se encontra?\n");
	printf("| 1 - Celsius | 2 - Kelvin | 3 - Fahrenheit |\n");
	scanf("%d", &escala);
		
	switch(escala){
		case 1://Celsius
			printf("A temperatura informada eh: %.2f Celcius!", temperatura);
			K = temperatura + 273.15;
			F = temperatura * (1.8) + 32;
			printf("\nA temperatura informada em Kelvin eh: %.2f K\n", K);
			printf("A temperatura informada em Fahrenheit eh: %.2f F\n", F);
			break;
		case 2://Kelvin
			printf("A temperatura informada eh: %.2f Kelvin!", temperatura);
			C = temperatura - 273.15;
			F = 1.8 * (temperatura - 273.15) + 32;
			printf("\nA temperatura informada em Fahrenheit eh: %.2f F\n", F);
			printf("A temperatura informada em Celsius eh: %.2f C\n", C);
			break;
		case 3://Fahrenheit
			printf("A temperatura informada eh: %.2f Fahrenheit!", temperatura);
			C = (temperatura - 32) / 1.8;
			K = (temperatura - 32) / 1.8 + 273.15;
			printf("\nA temperatura informada em Celsius eh: %.2f C\n", C);
			printf("A temperatura informada em Kelvin eh: %.2f K\n", K);
			break;
		default:
			printf("\nValor inexistente! Digite novamente!\n\n");
			goto Inicio;
		break;	
	}
}
