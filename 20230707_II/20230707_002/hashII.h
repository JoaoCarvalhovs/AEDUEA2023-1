#ifndef HASHII_H_INCLUDED
#define HASHII_H_INCLUDED
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
int exclusao(TB_HASH tab, int cod);

#endif // HASHII_H_INCLUDED
