#include<stdio.h>
#include<stdlib.h>

int main(){
	
	printf("CONVERSOR DE NUMERO DECIMAL EM HEXADECIMAL E OCTAL\n\n");
	
	int num, num_o, cont, i = 0, restO, resultO[i];
	char restH[i];	
			
	printf("Digite o numero que deseja converter: ");
	scanf("%d", &num);
	
	num_o = num;
	
	printf("O numero em Octal eh: ");
	
	while(num_o > 0){
		restO = num_o % 8;
		num_o = num_o / 8;
		resultO[i] = restO;
		i++;
	}
	for(cont = i - 1; cont >= 0; cont--){
		printf("%d", resultO[cont]);
	}

	printf("\nO numero em Hexadecimal eh: ");
	
	i = 0;
	
	while(num > 0){
		restH[i] = num % 16;
		num = num / 16;
			
		switch(restH[i]){
			case 0:		restH[i] = '0';		break;	
			case 1:		restH[i] = '1';		break;
			case 2:		restH[i] = '2';		break;
			case 3:		restH[i] = '3';		break;
			case 4:		restH[i] = '4';		break;
			case 5:		restH[i] = '5';		break;
			case 6:		restH[i] = '6';		break;
			case 7:		restH[i] = '7';		break;
			case 8:		restH[i] = '8';		break;
			case 9:		restH[i] = '9';		break;
			case 10:	restH[i] = 'A';		break;
			case 11:	restH[i] = 'B';		break;		
			case 12:	restH[i] = 'C';		break;	
			case 13:	restH[i] = 'D';		break;	
			case 14:	restH[i] = 'E';		break;		
			case 15:	restH[i] = 'F';		break;		
			default:	break;
		}
		i++;
	}
	for(cont = i - 1; cont >= 0;cont--){
		printf("%c", restH[cont]);		
	}
}
