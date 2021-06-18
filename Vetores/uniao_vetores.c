#include<stdio.h>
#include<stdlib.h>

int main(){

	printf("* UNIAO DE VETORES *\n\n");

	int tam = 20, v1[tam], v2[tam], v3[tam+tam], iv = 0, i, x, y;

	printf("Digite dez valores para o vetor 1:\n");
	for(i = 0; i < 10; i++){
		printf("Digite o %d valor:", i);
		scanf("%d", &v1[i]);
		v3[i] = v1[i];
	}

	printf("Digite dez valores para o vetor 2:\n");
	for(i = 0; i < 10; i++){
		printf("Digite o %d valor:", i);
		scanf("%d", &v2[i]);
		v3[i+10] = v2[i];
	}

	for(x = 0; x < 20; x++){
		for(y = x + 1; y <= tam; y++){
			if(v3[x] == v3[y]){
				for(iv = y; iv <= tam - 1; iv++){
					v3[iv] = v3[iv+1];
				}
				tam--;
			}
		}
	}
	
	printf("Os valores da uniao dos vetores 1 e 2 sao: ");
	for(iv = 0; iv <= tam; iv++){
		printf("| %d ", v3[iv]);
	}
	printf("|");

return 0;
}

