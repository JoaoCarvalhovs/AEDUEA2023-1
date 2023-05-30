#include <stdio.h>
#include <stdlib.h>
#include "escola.h"
#include <string.h>


void criar(turma *aln){
	int i ;
	for (i=0 ; i < aln->qtda ; i+=1){
		printf("qual o nome do %d aluno?", i+1);
		scanf(" %[^\n]", aln->alunos[i].nome);
		printf("qual o codigo do %d aluno?", i+1);
		scanf("%d", &aln->alunos[i].cda);
		printf("qual a idade do %d aluno?", i+1);
		scanf("%d", &aln->alunos[i].idade);
		printf("qual o coeficiente do %d aluno?", i+1);
		scanf("%f", &aln->alunos[i].coeficiente);
	}
}
void busca(turma *aln, int codigo){
	int i;
	//printf("CDG: %d", codigo);

	for (i=0 ; i < aln->qtda ; i+=1){
		//printf("CDGs: %d", aln->alunos[i].cda);
		if(codigo == aln->alunos[i].cda){
			printf("\nNome do aluno: %s\nIdade do aluno: %d\nCoeficiente do aluno: %.2f\n", aln->alunos[i].nome, aln->alunos[i].idade, aln->alunos[i].coeficiente);
			return;
		}
	}	
	printf("\nAluno não encontrado.");
}
void buscabinaria(turma *aln, int valor, int inicio, int fim){
	int meio = (inicio+fim)/2;
	if (inicio > fim){
		printf("Aluno encontrado");
    	printf("\n-------------------------------------------");
    	return;
	}
	if (inicio <= fim){
		if(aln->alunos[meio].cda == valor){
			printf("\nNome do aluno: %s\nIdade do aluno: %d\nCoeficiente do aluno: %.2f\n", aln->alunos[meio].nome, aln->alunos[meio].idade, aln->alunos[meio].coeficiente);
			return;
		}
		if(aln->alunos[meio].cda < valor){
			buscabinaria(aln, valor, inicio+1, fim);	
		}
		else{
			buscabinaria(aln, valor, inicio, fim-1);	
		}
	}
}
void geral(turma *aln){
	int i;
	for(i=0 ; i<aln->qtda ; i+=1){
		printf("%d - %s\n", aln->alunos[i].cda, aln->alunos[i].nome);
	}
}