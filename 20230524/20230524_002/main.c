/*2. Criar um TDA que representa um ALUNO com os seguintes dados: código do aluno como um valor inteiro, nome do aluno uma string, 
idade do aluno valor inteiro e o coeficiente do aluno com um valor float. Criar um segundo TDA que representa a TURMA que vai ter como valor uma lista de alunos e 
a quantidade de alunos na turma. Implemente para o TDA TURMA as seguintes operações:
//- Criar uma nova TURMA com uma quantidade de alunos definida.
//- Inserir alunos na TURMA.
//- Liberar o espaço na memória de uma TURMA.
//- Buscar um aluno pelo código do aluno usando uma busca sequencial. Imprimir os dados do aluno.
//- Buscar um aluno pelo código do aluno usando uma busca binaria recursiva. Imprimir os dados do aluno.
//- Imprimir o código e o nome dos alunos de uma TURMA.*/

#include <stdio.h>
#include <stdlib.h>
#include "escola.h"
#include <string.h>

int main(int argc, char *argv[]) {
	turma aln;
	int qtd, cdg;  
	printf("qual a quantidade de alunos que havera na sala?");
	scanf("%d", &qtd);
	aln.qtda = qtd;
	aln.alunos = (aluno*) malloc (qtd * sizeof(aluno));
	criar(&aln);
	printf("digite o codigo do aluno para seus dados: ");
	scanf("%d", &cdg);
	printf("\nBusca sequancial:");
	busca(&aln, cdg);
	printf("\nBusca Binaria:\n");
	buscabinaria(&aln, cdg, 0, qtd-1);
	geral(&aln);
	free(aln.alunos);
	return 0;
}