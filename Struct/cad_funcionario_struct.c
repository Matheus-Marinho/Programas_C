#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

struct data_nascimento{
	int dia;
	int mes;
	int ano;
}nascimento;

struct cad_funcionario{
	char nome[50];
	int idade;
	char sexo;
	char cpf[10];
	struct data_nascimento nascimento;
	int setor;
	char cargo[30];
	float salario;
}funcionario;

int main(){
	setlocale(LC_ALL, "Portuguese");

	printf("Informe o nome do funcionário: ");
	fflush(stdin);
	gets(funcionario.nome);		
	
	printf("Informe a idade: ");
	scanf("%d", &funcionario.idade);
	
	printf("Informe o sexo (M - Masculino /F - Feminino): ");
	fflush(stdin);
	scanf("%c", &funcionario.sexo);

	printf("Informe o CPF: ");
	fflush(stdin);
	gets(funcionario.cpf);	
	
	printf("Informe a data de nascimento: \n");
	printf("Dia(dd): ");
	scanf("%d", &funcionario.nascimento.dia);	
	printf("Mês(mm): ");
	scanf("%d", &funcionario.nascimento.mes);	
	printf("Ano(aaaa): ");
	scanf("%d", &funcionario.nascimento.ano);

	Setor:
	printf("Informe o código do setor: ");
	scanf("%d", &funcionario.setor);
	if(funcionario.setor < 0 || funcionario.setor > 99){
		printf("Setor inválido!\n\n");
		goto Setor;
	}

	printf("Informe o cargo: ");
	fflush(stdin);
	gets(funcionario.cargo);	

	printf("Informe o salário: ");
	scanf("%f", &funcionario.salario);

	printf("\n");		

	printf("Nome: %s\n", funcionario.nome);
	printf("CPF: %s\n", funcionario.cpf);
	printf("Idade: %d\n", funcionario.idade);
	printf("Sexo: %c\n", funcionario.sexo);
	printf("Data de nascimento: %d/%d/%d\n", funcionario.nascimento.dia, funcionario.nascimento.mes, funcionario.nascimento.ano);
	printf("Setor: %d\n", funcionario.setor);
	printf("Cargo: %s\n", funcionario.cargo);
	printf("Salário: %.2f\n", funcionario.salario);
	
	return 0;
}
