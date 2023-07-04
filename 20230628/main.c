#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

int main() {
    DEQUE deque;
    inicializar(&deque);

    int opcao, posicao;
    char a;
    do {
        printf("\n");
        printf("Escolha uma opcao:\n");
        printf("1. Inserir no final\n");
        printf("2. Mostrar deque\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirnofinal(&deque);
                break;
            case 2:
                printf("A partir de qual psoicao?");
                scanf("%d", &posicao);
                printf("Direta(d) ou inversa(i)?");
                scanf(" %c",&a);
                printf("Deque:\n");
                mostrardeque(&deque, posicao, a);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida\nTente novamente");
        }
    } while (opcao != 0);

    return 0;
}
