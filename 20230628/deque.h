#ifndef DEQUE_H_INCLUDED
#define DEQUE_H_INCLUDED

typedef struct {
    char* nome;
} PAC;

typedef struct aux {
    PAC* vestibulando;
    struct aux* prox;
    struct aux* anterior;
} ELEMENTO;

typedef struct {
    ELEMENTO* cabeca;
} DEQUE;

void inicializar(DEQUE* dec);
void mostrardeque(DEQUE* dec, int posicao, char como);
void inserirnofinal(DEQUE* dec);

#endif // DEQUE_H_INCLUDED
