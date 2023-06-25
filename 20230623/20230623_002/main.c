/*2. Usando Pilha
Escreva um programa que simule o controle de avi�es em um hangar do aeroporto, o hangar cont�m uma �nica alameda, pelo que os

avi�es ficam um detr�s de outro . O usu�rio deve ser capaz de realizar as seguintes tarefas:
a) Listar o n�mero de avi�es aguardando no hangar;
b) Tirar um  avi�o do hangar;
c) Adicionar um avi�o no hangar;
d) Listar todos os avi�es que est�o no hangar;
e) Listar as caracter�sticas do primeiro avi�o do hangar.
f) Tirar um avi�o do hangar pela posi��o (por exemplo, tem 9 avi�es no hangar e quero tirar o que est� na posi��o 3...
   para isso t�m que sair primeiro do hangar os avi�es nas posi��es 4 at� 9. tirar o avi�o 3 e depois por novamente os avi�es de 4 a 9 no hangar  )
Considere que os avi�es possuem um nome e um n�mero inteiro como identificador. Adicione outras caracter�sticas conforme achar necess�rio.*/
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
                printf("Op��o invalida. Por favor, tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
