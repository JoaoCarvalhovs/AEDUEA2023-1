/*Implementar uma tabela hash de tamanho M=11 com endereçamento aberto (todos os elementos são armazenados na própria tabela e sem o uso de listas encadeadas) para armazenar chaves no intervalo [1, 999]. Insira as seguintes chaves nessa tabela:
  365, 112, 180, 213, 13, 27 nessa ordem, considerando diferentes métodos de resolução de colisões*:
  * esses métodos de resolução de colisões são a função hash que inclui em ela a resolução de colisões
  i = [0, M]
  a) Sondagem linear, função hash:  h(k)= (k+i) % M
  b) Sondagem quadrática, função hash:  h(k)= (k+i²) % M
  c) Sondagem quadrática, função hash: h(k)= (k+2i+i²) % M
  d) Hash duplo, função hash: h1(k) = k%M, função hash 2:  h2(k) = 7 − (k % 7)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "comp.h"

int main() {
    int colisoes=0;
    TB_HASH pacs;
    NUM p;
    inicializar(pacs);

    p.cod_pac = 365;
    colisoes += inserir(pacs, p);

    p.cod_pac = 112;
    colisoes += inserir(pacs, p);

    p.cod_pac = 180;
    colisoes += inserir(pacs, p);

    p.cod_pac = 213;
    colisoes += inserir(pacs, p);

    p.cod_pac = 13;
    colisoes += inserir(pacs, p);

    p.cod_pac = 27;
    colisoes += inserir(pacs, p);

    mostrahash(pacs);
    printf("\n\n\nPor Hash duplo\n");
    printf("TOTAL DE COLISOES: %d\n\n\n", colisoes);

    return 0;
}
