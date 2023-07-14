#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash2.h"

void inicializar(TB_HASH TABELA){
    int i;
    for(i =0; i < N ; i+=1)
        TABELA[i] = NULL;
}

int m_hash(int codigo){
    return(codigo%N);
}

int inserir(TB_HASH tab, PACIENTE pac){
    int h = m_hash(pac.codigo);
    ELEMENTO *anterior = NULL;
    ELEMENTO *agr = tab[h];
    while (agr != NULL){
        if (agr->paciente.codigo == pac.codigo){
            printf("\nCodigo invalido\n");
            return 0;
        }
        anterior = agr;
        agr = agr->prox;
    }
    agr = malloc(sizeof(ELEMENTO));
    agr->paciente = pac;
    agr->prox = NULL;
    if(anterior == NULL){
        tab[h] = agr;
    }else{
    anterior->prox = agr;
    }
    return 1;
}
PACIENTE * buscar(TB_HASH tabela, int codigo){
    int h = m_hash(codigo);
    ELEMENTO* achar = tabela[h];
    while(achar != NULL){
        if(achar->paciente.codigo == codigo)
            return &achar->paciente;
        achar = achar->prox;
    }
    return NULL;
}

void mostra(TB_HASH tabela){
    ELEMENTO* corre;
    int i;
    for (i = 0 ; i<N ; i+=1){
        if(tabela[i] != NULL){
            corre = tabela[i];
            printf("Pacientes em t_hash %d:\n", i);
            while (corre != NULL){
                printf("\nDados de Paciente:\n");
                printf("Nome: %s\nCodigo do Paciente: %d\nIdade: %d\nCPF: %s\n", corre->paciente.nome, corre->paciente.codigo, corre->paciente.idade, corre->paciente.cpf);
                corre= corre->prox;
            }
            printf("----------------------\n");
        }else{
            printf("Pacientes em t_hash %d: NULL", i);
            printf("\n----------------------\n");
        }
    }
}
