#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "deque.h"

void inicializar(DEQUE* dec) {
    dec->cabeca = (ELEMENTO*)malloc(sizeof(ELEMENTO));
    dec->cabeca->anterior = dec->cabeca;
    dec->cabeca->prox = dec->cabeca;
}
void mostrardeque(DEQUE* dec, int posicao, char como) {
    ELEMENTO* elem;
    int num = 0;

    if (como == 'd') {
        elem = dec->cabeca->prox;
        while (elem != dec->cabeca && num < posicao) {
            elem = elem->prox;
            num++;
        }
    } else if (como == 'i') {
        elem = dec->cabeca->anterior;
        while (elem != dec->cabeca && num < posicao) {
            elem = elem->anterior;
            num++;
        }
    }
    while (elem != dec->cabeca) {
        printf("%s\n", elem->vestibulando->nome);

        if (como == 'd') {
            elem = elem->prox;
        } else if (como == 'i') {
            elem = elem->anterior;
        }
        num+=1;
    }
}
void inserirnofinal(DEQUE* dec) {
    ELEMENTO* novoElemento = (ELEMENTO*)malloc(sizeof(ELEMENTO));
    PAC* novoPac = (PAC*)malloc(sizeof(PAC));

    char nome[20];
    printf("Quem deseja inserir? ");
    scanf(" %[^\n]", nome);

    novoPac->nome = (char*)malloc((strlen(nome)+1) * sizeof(char));
    strcpy(novoPac->nome, nome);

    novoElemento->vestibulando = novoPac;
    novoElemento->prox = dec->cabeca;
    novoElemento->anterior = dec->cabeca->anterior;

    dec->cabeca->anterior->prox = novoElemento;
    dec->cabeca->anterior = novoElemento;
}
