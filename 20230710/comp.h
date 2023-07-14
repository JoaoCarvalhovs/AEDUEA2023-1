#ifndef COMP_H_INCLUDED
#define COMP_H_INCLUDED
#define M 11
#define I 2
#define A 4
typedef struct {
    int cod_pac;
} NUM;


typedef NUM* TB_HASH[M];

void inicializar(TB_HASH tab);
int rach1(int codigo);
int rach2(int codigo);
int dispersa(int codigo);
int inserir(TB_HASH tab, NUM pac);
NUM* busca(TB_HASH tab, int cod);
void mostrahash(TB_HASH tabela);


#endif // COMP_H_INCLUDED
