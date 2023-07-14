#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashI.h"

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
    printf("-------------------------Tabela-------------------------\n");
    for (i = 0; i < N; i++) {
        if (tabela[i] == NULL) {
            printf("Paciente %d = NULL\n", i);
        }
        else {
            printf("\nPaciente numero %d\nCodigo do paciente: %d\nNome do paciente: %s\nCPF do Paciente: %s\nIdade do Paciente: %d\n\n", i, tabela[i]->cod_pac, tabela[i]->nome, tabela[i]->cpf, tabela[i]->idade);
        }
    }
    printf("--------------------------------------------------------");
}
int exclusao(TB_HASH tabela, int codigo){
    int h = dispersa(codigo);
    int cont = h;
    while(tabela[h] != NULL && tabela[h]->cod_pac != codigo){
        h = (h+1)%N;
        /*if (cont == h)
            return 0;*/
    }
    free(tabela[h]);
    tabela[h] = NULL;
    return 1;
 }
