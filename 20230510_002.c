/*2. Criar um tipo abstrato de dados que represente uma pessoa, contendo: nome, data de nascimento e CPF.
-Crie uma função que receba um ponteiro para o TDA e preencha os dados da estrutura.
-Crie outra função que receba um ponteiro para o TDA e imprima os dados da estrutura.
-Crie um ponteiro para o TDA (no programa principal) e utilize as funções criadas.*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[100];
	char datadenascimento[100];
	char CPF[100];
} pessoa;


void receba(pessoa *eoe) {
	printf("qual o seu nome?\n");
	scanf(" %[^\n]", eoe->nome);
	printf("qual sua data de nascimento?\n");
	scanf(" %[^\n]", eoe->datadenascimento);
	printf("qual seu CPF?\n");
	scanf(" %[^\n]", eoe->CPF);
}
void imprime(pessoa *eoe) {
	printf("Nome: %s\n", eoe->nome);
	printf("Data de Nascimento: %s\n", eoe->datadenascimento);
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
