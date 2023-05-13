/*3. Para o exercício anterior crie um TDA para a data.
-Crie uma função que receba um ponteiro para o TDA e preencha os dados da estrutura.
-Crie outra função que receba um ponteiro para o TDA e imprima os dados da estrutura.
-Crie um ponteiro para o TDA (no programa principal) e utilize as funções criadas.*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int dia;
	int mes;
	int ano
} data;

typedef struct {
	char nome[100];
	data datadenascimento;
	char CPF[100];
} pessoa;

void dataa(data* datadenascimento){
	printf("Dia:");
	scanf("%d", &datadenascimento -> dia);
	printf("Mes:");
	scanf("%d", &datadenascimento -> mes);
	printf("Ano:");
	scanf("%d", &datadenascimento -> ano);
}

void receba(pessoa *eoe) {
	printf("qual o seu nome?\n");
	scanf(" %[^\n]", eoe->nome);
	printf("Defina sua data de nascimento (DD/MM/AAAA):\n");
	dataa(&eoe->datadenascimento);
	printf("qual seu CPF?\n");
	scanf(" %[^\n]", eoe->CPF);
}

void imprime(pessoa *eoe) {
	printf("Nome: %s\n", eoe->nome);
	printf("Data de Nascimento: %d/%d/%d\n", eoe -> datadenascimento.dia, eoe -> datadenascimento.mes, eoe-> datadenascimento.ano);
	printf("CPF: %s", eoe->CPF);
}
int main() {
	pessoa *eoe;
	eoe = (pessoa*) malloc (sizeof(pessoa));
	receba(eoe);
	imprime(eoe);
	free(eoe);
	return 0;
}
