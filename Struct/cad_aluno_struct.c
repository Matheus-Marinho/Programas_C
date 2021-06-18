#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

struct cad_aluno{
	char nome[50];
	int matricula;
	char curso[50];
}aluno[5];

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Informe o nome do aluno %d: ", (i+1));
		fflush(stdin);
		gets(aluno[i].nome);		
		
		printf("Informe a matrícula do aluno %d: ", (i+1));
		scanf("%d", &aluno[i].matricula);
		
		printf("Informe o curso do aluno %d: ", (i+1));
		fflush(stdin);
		gets(aluno[i].curso);	
		
		printf("\n");		
	}	
	
	for(i = 0; i < 5; i++){
		printf("Dados aluno %d\n", (i+1));
		printf("Nome: %s \n", aluno[i].nome);
		printf("Matrícula: %d \n", aluno[i].matricula);
		printf("Curso: %s \n\n", aluno[i].curso);
	}
	return 0;
}



