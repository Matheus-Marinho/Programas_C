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

	printf("N�mero: %d Posi��o: %x\n", Numero, Ponteiro); //%x traz resultado em hexadecimal
	printf("N�mero: %d Valor: %d Posi��o: %x\n", Numero, Valor, Ponteiro);

	(*Ponteiro)++;	
	Valor = *Ponteiro;
	printf("N�mero: %d Valor: %d Posi��o: %x\n", Numero, Valor, Ponteiro);

	int **Ponteiro_2;
	Ponteiro = &Numero; // Ponteiro recebendo a posi��o de N�mero
	Ponteiro_2 = &Ponteiro; // Ponteiro_2 recebendo a posi��o do Ponteiro
	
	printf("Endere�o Hexa: %x Decimal: %d\n", Ponteiro, Ponteiro);
	printf("Endere�o Hexa: %x Decimal: %d\n", Ponteiro_2, Ponteiro_2);

	(**Ponteiro_2)++;
	printf("N�mero: %d", Numero);	


	
		
	return 0;
}
