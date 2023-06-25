/*2. Usando Pilha
Escreva um programa que simule o controle de aviões em um hangar do aeroporto, o hangar contém uma única alameda, pelo que os

aviões ficam um detrás de outro . O usuário deve ser capaz de realizar as seguintes tarefas:
a) Listar o número de aviões aguardando no hangar;
b) Tirar um  avião do hangar;
c) Adicionar um avião no hangar;
d) Listar todos os aviões que estão no hangar;
e) Listar as características do primeiro avião do hangar.
f) Tirar um avião do hangar pela posição (por exemplo, tem 9 aviões no hangar e quero tirar o que está na posição 3...
   para isso têm que sair primeiro do hangar os aviões nas posições 4 até 9. tirar o avião 3 e depois por novamente os aviões de 4 a 9 no hangar  )
Considere que os aviões possuem um nome e um número inteiro como identificador. Adicione outras características conforme achar necessário.*/
#include <stdio.h>
#include <stdlib.h>
#include "hangar.h"

int main() {
    outros hangar;
    PILHA tempPilha;
    int opcao, posicao;
    inicializar(&hangar, &tempPilha);

    do {
        printf("\nControle de Avioes no Hangar\n");
        printf("1. Listar o numero de avioes aguardando no hangar\n");
        printf("2. Tirar um aviao do hangar\n");
        printf("3. Adicionar um aviao no hangar\n");
        printf("4. Listar todos os avioes no hangar\n");
        printf("5. Listar as caracteristicas do primeiro aviao do hangar\n");
        printf("6. Tirar um aviao do hangar pela posicao\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Numero de avioes no hangar: %d\n", hangar.qtd);
                break;
            case 2:
                sai(&hangar);
                break;
            case 3:
                adicionar(&hangar);
                break;
            case 4:
                listar(&hangar);
                break;
            case 5:
                status(&hangar);
                break;
            case 6:
                printf("Digite a posicao do aviao que deseja remover: ");
                scanf("%d", &posicao);
                sai2(&hangar, &tempPilha, posicao);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção invalida. Por favor, tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
