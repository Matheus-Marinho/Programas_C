#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

// Usando ponteiros

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Numero, Valor, *Ponteiro;
	
	Numero = 10;
	Ponteiro = &Numero;
	Valor = *Ponteiro;

	printf("Número: %d Posição: %x\n", Numero, Ponteiro); //%x traz resultado em hexadecimal
	printf("Número: %d Valor: %d Posição: %x\n", Numero, Valor, Ponteiro);

	(*Ponteiro)++;	
	Valor = *Ponteiro;
	printf("Número: %d Valor: %d Posição: %x\n", Numero, Valor, Ponteiro);

	int **Ponteiro_2;
	Ponteiro = &Numero; // Ponteiro recebendo a posição de Número
	Ponteiro_2 = &Ponteiro; // Ponteiro_2 recebendo a posição do Ponteiro
	
	printf("Endereço Hexa: %x Decimal: %d\n", Ponteiro, Ponteiro);
	printf("Endereço Hexa: %x Decimal: %d\n", Ponteiro_2, Ponteiro_2);

	(**Ponteiro_2)++;
	printf("Número: %d", Numero);	


	
		
	return 0;
}
