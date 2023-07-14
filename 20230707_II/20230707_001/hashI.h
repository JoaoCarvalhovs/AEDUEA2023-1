#ifndef HASHI_H_INCLUDED
#define HASHI_H_INCLUDED
#define N 10

typedef struct {
    int cod_pac;
    char nome[40];
    char cpf[15];
    int idade;
} PACIENTE;

typedef PACIENTE* TB_HASH[N];

void inicializar(TB_HASH tab);
int dispersa(int codigo);
int inserir(TB_HASH tab, PACIENTE pac);
PACIENTE* busca(TB_HASH tab, int cod);
void mostrahash(TB_HASH tabela);
int exclusao(TB_HASH tabela, int codigo);


#endif // HASHI_H_INCLUDED
