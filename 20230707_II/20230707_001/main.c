/*Exercício: Acrescentar ao exercicio 1 da atividade anterior (Atividade 07/07/2023 Tabelas de dispersão/Hash
  I) operações para excluir elementos da tabela hash
  //Com lista ligada
  //Usar as operações de excluir um elemento da lista.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashI.h"

int main() {
    TB_HASH pacs;
    PACIENTE p;
    inicializar(pacs);

    p.cod_pac = 10101;
    strcpy(p.cpf, "00000000000");
    p.idade = 19;
    strcpy(p.nome, "jao carv");
    inserir(pacs, p);

    p.cod_pac = 10102;
    strcpy(p.cpf, "00000000001");
    p.idade = 20;
    strcpy(p.nome, "john frot");
    inserir(pacs, p);

    p.cod_pac = 10109;
    strcpy(p.cpf, "00000000002");
    p.idade = 19;
    strcpy(p.nome, "manu roc");
    inserir(pacs, p);

    p.cod_pac = 10104;
    strcpy(p.cpf, "00000000003");
    p.idade = 19;
    strcpy(p.nome, "bea gued");
    inserir(pacs, p);

    p.cod_pac = 10105;
    strcpy(p.cpf, "00000000004");
    p.idade = 19;
    strcpy(p.nome, "lil iaz");
    inserir(pacs, p);

    mostrahash(pacs);

    exclusao(pacs, 10104);
    printf("\nDDEEPPOOIISS\n");
    mostrahash(pacs);

    return 0;
}
