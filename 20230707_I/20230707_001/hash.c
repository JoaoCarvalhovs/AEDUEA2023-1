#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash1.h"

void inicializar(TB_HASH tab) {
    int i;
    for (i = 0; i < N; i++) {
        tab[i] = NULL;
    }
}

int dispersa(int codigo) {
    return (codigo % N);
}

int inserir(TB_HASH tab, PACIENTE pac) {
    int h = dispersa(pac.cod_pac);
    while (tab[h] != NULL) {
        if (tab[h]->cod_pac == pac.cod_pac)
            return 0;
        h = (h + 1) % N;
    }
    tab[h] = malloc(sizeof(PACIENTE));
    *(tab[h]) = pac;
    return 1;
}

PACIENTE* busca(TB_HASH tab, int cod) {
    int h = dispersa(cod);
    while (tab[h] != NULL) {
        if (tab[h]->cod_pac == cod)
            return tab[h];
        h = (h + 1) % N;
    }
    return NULL;
}

void mostrahash(TB_HASH tabela) {
    int i;
    for (i = 0; i < N; i++) {
        if (tabela[i] == NULL) {
            printf("Paciente %d = NULL\n", i);
        }
        else {
            printf("\nPaciente numero %d\nCodigo do paciente: %d\nNome do paciente: %s\nCPF do Paciente: %s\nIdade do Paciente: %d\n\n", i, tabela[i]->cod_pac, tabela[i]->nome, tabela[i]->cpf, tabela[i]->idade);
        }
    }
}
