#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
struct ficha_cadastro
{
	char nome[30], cpf[30], tipo_vacina[30];
	char data[15], numero_lote[20];
	int codigo;
};

int main (){
	int codigo, opcao, i, j, achou = 0;
	struct ficha_cadastro cadastro[10];
	char busca[30];
	setlocale(LC_ALL, "Portuguese");
	
while (opcao != 4){
	system("cls");
	fflush(stdin);
	printf("\n------- MENU DE OPCOES ------- \n\n\n");
	printf("Digite um numero de acordo com a opção desejada ...\n");
	printf("[1]CADASTRAR VACINA\n[2]LISTAR APLICAÇÕES\n[3]CONSULTAR POR CPF\n[4]SAIR\n");
	scanf("%d" , &opcao);
	fflush(stdin);

switch (opcao)
	{
case 1 :
	fflush(stdin);
	printf("\n ------- Cadastro Vacina ------- \n\n\n");
	cadastro[i].codigo = i;
	printf(" Nome completo .... \n");
	fflush(stdin);
	fgets(cadastro[i].nome, 30, stdin);
	printf("Informe o CPF : \n ");
	fflush(stdin);
	fgets(cadastro[i].cpf, 30, stdin);
	fflush(stdin);
	printf("Informe o tipo da Vacina aplicada : \n ");
	fflush(stdin);
	fgets(cadastro[i].tipo_vacina, 30, stdin);
	printf("Data de aplicação da Vacina :  \n ");
	fflush(stdin);
	fgets(cadastro[i].data, 15, stdin);
	printf("Informe o Número do Lote da Vacina : \n");
	scanf("%s", cadastro[i].numero_lote);
	i++;
	fflush(stdin);
	break;
	
case 2 :
	for(j = 0; j < i; j++) {
		printf("========================================\n");
		printf("Código: %d\n", cadastro[j].codigo);
		printf("Nome: %s \n", cadastro[j].nome);
		printf("CPF: %s \n", cadastro[j].cpf);
		printf("Vacina: %s \n", cadastro[j].tipo_vacina);
		printf("Data: %s \n", cadastro[j].data);
		printf("Número do lote: %s \n", cadastro[j].numero_lote);

		
	}
	system("pause");
	break;
	
case 3 :
	fflush(stdin);
	printf("Digite o CPF para busca : \n");
	fgets(busca, 30, stdin);
	achou = 0;
	for(j = 0; j < i; j++) {
		if (strcmp(busca, cadastro[j].cpf) == 0) {
			achou = 1;
			printf("========================================\n");
			printf("Código: %d\n", cadastro[j].codigo);
			printf("Nome: %s \n", cadastro[j].nome);
			printf("CPF: %s \n", cadastro[j].cpf);
			printf("Vacina: %s \n", cadastro[j].tipo_vacina);
			printf("Data: %s \n", cadastro[j].data);
			printf("Número do lote: %s \n", cadastro[j].numero_lote);
			printf("========================================\n");	
		}
	}
	
	if (achou == 0) {
		printf("CPF não encontrado.\n");
	} 
	system("pause");
	fflush(stdin);
	break;
	
case 4 :
	break;	
	}
}
return (0);

};







