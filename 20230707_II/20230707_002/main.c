/*Exercício: Acrescentar ao exercios2 da atividade anterior (Atividade 07/07/2023 Tabelas de dispersão/Hash I)
  operações para excluir elementos da tabela hash

  Com array de ponteiros
  Usar um flag indicador de status a cada registro.
  Por exemplo o campo "disponível" de paciente pode ter o valor 1 se o paciente foi apagado e posso inserir um novo paciente em essa posição . Ou 0 se já tem um paciente em essa posição.
  A função inserir deve ser atualizada:
  Se na posição tab[h] = NULL ou tab[h]->disponivel == 1 então inserir ou atualizar o paciente em essa posição.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashII.h"

int main()
{
    TB_HASH pacs;
    PACIENTE p;
    inicializar(pacs);

    p.codigo = 10101;
    strcpy(p.cpf, "00000000000");
    p.idade = 19;
    strcpy(p.nome, "jao carv");
    inserir(pacs, p);

    p.codigo = 10104;
    strcpy(p.cpf, "00000000001");
    p.idade = 20;
    strcpy(p.nome, "john frot");
    inserir(pacs, p);

    p.codigo = 30105;
    strcpy(p.cpf, "00000000002");
    p.idade = 19;
    strcpy(p.nome, "manu roc");
    inserir(pacs, p);

    p.codigo = 20105;
    strcpy(p.cpf, "00000000003");
    p.idade = 19;
    strcpy(p.nome, "bea gued");
    inserir(pacs, p);

    p.codigo = 10105;
    strcpy(p.cpf, "00000000004");
    p.idade = 19;
    strcpy(p.nome, "lil iaz");
    inserir(pacs, p);

    mostra(pacs);

    exclusao(pacs, 30105);
    printf("\n\nDDEEPPOOIISS\n\n\n");
    mostra(pacs);
}
