#ifndef COMMANDS_H_INCLUDED
#define COMMANDS_H_INCLUDED

typedef struct{
    int ident;
    char nome[20];
    struct AVIOES* proximo;
}AVIOES;

typedef struct{
    AVIOES* prim_aviao;
    int qtd;
}GERAL;

#endif // COMMANDS_H_INCLUDED

void inicializar(GERAL* avioes);
void qtdav(GERAL* pqtd);
void voamlk(GERAL* aviao);
void adicionar(GERAL *primeiro);
void quem_eh_proximo(GERAL *dados);
