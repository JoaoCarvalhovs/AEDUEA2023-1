// hash.h
#ifndef HASH2_H_INCLUDED
#define HASH2_H_INCLUDED

#define N 10

typedef struct {
    char nome[50];
    char cpf[20];
    int codigo;
    int idade;
} PACIENTE;

typedef struct aux {
    PACIENTE paciente;
    struct aux *prox;
} ELEMENTO;

typedef ELEMENTO *TB_HASH[N];

void inicializar(TB_HASH TABELA);
int m_hash(int codigo);
int inserir(TB_HASH tab, PACIENTE pac);
PACIENTE *buscar(TB_HASH tabela, int codigo);
void mostra(TB_HASH tabela);

#endif // HASH2_H_INCLUDED
