#include "LISTA_H_INCLUDED"
#include <stdio.h>

int criar(int tamanho){
    printf("Qual o tamanho dessa lista?\n");
    scanf("%d", &tamanho);
    return tamanho;
}

void libera(lista* lista){
    free(lista);
}

int alocar(lista* lst, int tamanho){
    lst = (lista*) malloc (tamanho * sizeof(lista));
    return lsd;
}


int coloca(lista* lst, int tamanho){
    int i;
    for(i=0 ; i < tamanho; i+=1){
        printf("Qual o %d valor da sua lista?\n");
        scanf("%d", &(lst+i));
    }
    return lst;
}

void imprime_itr(lista* lst, int tamanho){
    int i;
    printf("A lista de forma iterativa: ");
    for(i=0;i<tamanho-1;i+=1){
        printf("%d, ", *(lst+i));
    }
    printf("%d, ", *(lst+tamanho));
}

void acha(lista* lst, int tamanho){
    int valor;
    printf("defina um valor para se achar na lista: ");
    scanf("%d", &valor);
    for(int i = 0 ;  i < tamanho ; i += 1){
        if(*(lst+i) == valor){
            printf("O valor %d esta na posicao: %d", valor, i);
        }
    }
}

void maiorelemento
