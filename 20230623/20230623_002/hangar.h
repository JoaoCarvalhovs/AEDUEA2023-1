#ifndef HANGAR_H_INCLUDED
#define HANGAR_H_INCLUDED

typedef struct{
    char nome[20];
    int ident;
    struct AVIAO* proximo;
}AVIAO;

typedef struct {
    AVIAO* topo;
    int tamanho;
}PILHA;

typedef struct{
    AVIAO * primeiro;
    int qtd;
}outros;

void inicializar(outros* inicio, PILHA* ppilha);
void listar(outros* quantos);
void sai(outros* prim);
void adicionar(outros * prim);
void status(outros *prim);
void sai2(outros* prim, PILHA* ppilha, int posicao);
#endif // HANGAR_H_INCLUDED

