/*  Usando as estrutura de dados Fila e Pilha estudas na sala de ala fa�a:
    1.Usando Fila
    Escreva um programa que simule o controle de uma pista de decolagem de avi�es em um aeroporto. Neste programa,
    o usu�rio deve ser capaz de realizar as seguintes tarefas:
 ---->  a) Listar o n�mero de avi�es aguardando na fila de decolagem;
   =    b) Autorizar a decolagem do primeiro avi�o da fila;
   =    c) Adicionar um avi�o � fila de espera;
 ---->  d) Listar todos os avi�es na fila de espera;
        e) Listar as caracter�sticas do primeiro avi�o da fila.
    Considere que os avi�es possuem um nome e um n�mero inteiro como identificador.
    Adicione outras caracter�sticas conforme achar necess�rio.*/
#include <stdio.h>
#include <stdlib.h>
#include "commands.h"

int main() {

    GERAL avioes;
    inicializar(&avioes);
    int opcao;

    do {
        printf("\nMenu:\n1. Adicionar aviao a fila de espera\n2. Listar numero de avioes aguardando na fila de decolagem\n3. Autorizar a decolagem do primeiro aviao da fila\n4. Listar todos os avioes na fila de espera\n5. Listar as caracteristicas do primeiro avi�o da fila\n6. Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");
        switch (opcao) {
            case 1:
                adicionar(&avioes);
                break;
            case 2:
                printf("numero de avioes na fila: %d/n", avioes.qtd);
                break;
            case 3:
                voamlk(&avioes);
                break;
            case 4:
                qtdav(&avioes);
                break;
            case 5:
                quem_eh_proximo(&avioes);
                break;
            case 6:
                break;
            default:
                printf("Op��o inv�lida.\nTente novamente.\n");
                break;
        }
    } while (opcao != 6);

    return 0;
}
