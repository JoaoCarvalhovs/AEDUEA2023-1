#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "comp.h"

void inicializar(TB_HASH tab) {
    int i;
    for (i = 0; i < M; i+=1) {
        tab[i] = NULL;
    }
}

int rach2(int codigo){
    return (codigo % 7);
}
int dispersa(int codigo) {
    switch(A){
        //Sondagem_linear
        case 1:
            //printf("Por Sondagem linear ");
            return ((codigo+I)% M);

        //Sondagem_quadratica1
        case 2:
            //printf("Por Sondagem quadratica 1");
            return ((codigo + (I*I)) % M);

        //Sondagem_quadratica2
        case 3:
            //printf("Por Sondagem quadratica 2");
            return ((codigo + (2*I) + (I*I)) % M);

        //Hash_duplo
        case 4:
            //printf("Por Hash duplo");
            return (codigo % M);

        default:
            return 0;
    }
}

int inserir(TB_HASH tab, NUM pac) {
    int cont = 0;
    int h = dispersa(pac.cod_pac);
    while (tab[h] != NULL) {
        if (tab[h]->cod_pac == pac.cod_pac)
            return 0;
        if((A+1)== 5){
            h = rach2(pac.cod_pac);
        }else{
            h = (h+1)%M;
        }
        cont+=1;
    }
    tab[h] = malloc(sizeof(NUM));
    *(tab[h]) = pac;
    return cont;
}

NUM* busca(TB_HASH tab, int cod) {
    int h = dispersa(cod);
    while (tab[h] != NULL) {
        if (tab[h]->cod_pac == cod)
            return tab[h];
        h = (h + 1) % M;
    }
    return NULL;
}

void mostrahash(TB_HASH tabela) {
    int i;
    for (i = 0; i < M; i++) {
        if (tabela[i] == NULL) {
            printf("Indice %d = NULL\n", i);
        }
        else {
            printf("Indice %d = [Codigo: %d]\n", i, tabela[i]->cod_pac);
        }
    }
}
