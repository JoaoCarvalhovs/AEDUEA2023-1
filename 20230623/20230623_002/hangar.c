#include <stdio.h>
#include <stdlib.h>
#include "hangar.h"
#include <string.h>

void inicializar(outros* inicio, PILHA* ppilha) {
    inicio->primeiro = NULL;
    inicio->qtd = 0;
    ppilha->topo = NULL;
    ppilha->tamanho = 0;
}

/*a) Listar o número de aviões aguardando no hangar;*/
/*d) Listar todos os aviões que estão no hangar;*/
void listar(outros* quantos){
    AVIAO* next = quantos->primeiro;
    if (next == NULL){
        printf("Nenhum aviao no hangar.\n");
        return;
    }
    printf("Os avioes no hangar sao:\n");
    while (next != NULL){
        printf("%s-%d;\n", next->nome, next->ident);
        next = next->proximo;
    }
}

/*b) Tirar um avião do hangar;*/
void sai(outros* prim) {
    AVIAO* aviao = prim->primeiro;
    if (aviao == NULL) {
        printf("Nenhum aviao no hangar.\n");
        return;
    }
    if (aviao->proximo == NULL) {
        printf("Aviao %s-%d saiu do hangar.\n", aviao->nome, aviao->ident);
        free(aviao);
        prim->primeiro = NULL;
        prim->qtd--;
        return;
    }
    AVIAO* anterior = NULL;
    while (aviao->proximo != NULL) {
        anterior = aviao;
        aviao = aviao->proximo;
    }
    printf("Aviao %s-%d saiu do hangar.\n", aviao->nome, aviao->ident);
    free(aviao);
    anterior->proximo = NULL;
    prim->qtd--;
}


/*c) Adicionar um avião no hangar;*/
void adicionar(outros* prim){
    AVIAO* de_agr = prim->primeiro;
    AVIAO* novo_aviao = (AVIAO*) malloc(sizeof(AVIAO));
    novo_aviao->proximo = NULL;

    printf("Qual o nome do novo aviao no hangar? ");
    scanf(" %[^\n]", novo_aviao->nome);
    printf("Qual o numero de identificacao desse aviao? ");
    scanf("%d", &novo_aviao->ident);

    if (de_agr == NULL){
        prim->primeiro = novo_aviao;

    } else {
        while (de_agr->proximo != NULL){
            de_agr = de_agr->proximo;
        }
        de_agr->proximo = novo_aviao;
    }
    prim->qtd += 1;
}

/*e) Listar as características do primeiro avião do hangar.*/
void status(outros* prim){
    AVIAO* primeiro = prim->primeiro;
    if (primeiro == NULL){
        printf("Nenhum aviao no hangar.\n");
        return;
    }
    printf("Nome e codigo do primeiro aviao a entrar no hangar: %s-%d\n", primeiro->nome, primeiro->ident);
}

/*f) Tirar um avião do hangar pela posição (por exemplo, tem 9 aviões no hangar e quero tirar o que está na posição 3...
   para isso têm que sair primeiro do hangar os aviões nas posições 4 até 9. tirar o avião 3 e depois por novamente os aviões de 4 a 9 no hangar  )*/

void sai2(outros* prim, PILHA* ppilha, int posicao){
    AVIAO* aviao = prim->primeiro;
    AVIAO* anterior = NULL;
    PILHA temporaria;
    temporaria.topo = NULL;
    temporaria.tamanho = 0;

    if (aviao == NULL){
        printf("Nenhum aviao no hangar.\n");
        return;
    }

    int i = 1;
    while (aviao != NULL && i < posicao){
        anterior = aviao;
        aviao = aviao->proximo;
        i += 1;
    }

    if (aviao == NULL){
        printf("Nao existe aviao nessa posicao.\n");
        return;
    }

    printf("Aviao %s-%d saiu do hangar.\n", aviao->nome, aviao->ident);

    if (anterior == NULL){
        prim->primeiro = aviao->proximo;
    } else {
        anterior->proximo = aviao->proximo;
    }


    prim->qtd -= 1;
}
