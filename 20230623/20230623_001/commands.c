#include <stdio.h>
#include <stdlib.h>
#include "commands.h"


void inicializar(GERAL* avioes){
    avioes->prim_aviao = NULL;
    avioes->qtd = 0;
}

/*a) Listar o n�mero de avi�es aguardando na fila de decolagem;*/
/*d) Listar todos os avi�es na fila de espera;*/
void qtdav(GERAL* pqtd){
    printf("os avioes em espera sao:\n");
    AVIOES *da_vez = pqtd->prim_aviao;
    if(da_vez == NULL)
        printf("Nenhum aviao na fila");
    while(da_vez != NULL){
        printf("%s - %d;", da_vez->nome, da_vez->ident);
        da_vez = da_vez->proximo;
    }
}

/*b) Autorizar a decolagem do primeiro avi�o da fila;*/
void voamlk(GERAL* aviao){
    AVIOES *tchau = aviao->prim_aviao;
    if(tchau == NULL){
        printf("sem avioes na fila.\n");
        return;
    }
    printf("Tchau tchau %s-%d", tchau->nome,tchau->ident);
    aviao->prim_aviao = tchau->proximo;
    aviao->qtd -= 1;
    free(tchau);
}

/*c) Adicionar um avi�o � fila de espera; */
void adicionar(GERAL *primeiro){

    AVIOES *da_vez = primeiro->prim_aviao;
    AVIOES *novo_aviao = (AVIOES*) malloc (sizeof(AVIOES));

    printf("Qual o nome desse aviao? ");
    scanf(" %[^\n]", novo_aviao->nome);
    printf("Qual o numero identificador desse aviao? ");
    scanf("%d", &novo_aviao->ident);

    novo_aviao->proximo = NULL;

    if (da_vez == NULL) {
        primeiro->prim_aviao = novo_aviao;
    } else {
        while (da_vez != NULL) {
            if (da_vez->proximo == NULL) {
                da_vez->proximo = novo_aviao;
                break;
            }
            da_vez = da_vez->proximo;
        }
    }

    primeiro->qtd += 1;

}
 /*e) Listar as caracter�sticas do primeiro avi�o da fila*/
void quem_eh_proximo(GERAL *dados){
    printf("o proximo da lista eh:\n%s-%d", dados->prim_aviao->nome, dados->prim_aviao->ident);
}
