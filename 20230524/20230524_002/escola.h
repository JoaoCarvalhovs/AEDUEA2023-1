#ifndef ESCOLA_H_INCLUDED
#define ESCOLA_H_INCLUDED

typedef struct{
	int cda;
	char nome[20];
	int idade;
	float coeficiente;
}aluno;

typedef struct{
	aluno *alunos;
	int qtda;
}turma;

void criar(turma *aln);
void busca(turma *aln, int codigo);
void buscabinaria(turma *aln, int valor, int inicio, int fim);
void geral(turma *aln);
#endif // ESCOLA_H_INCLUDED