#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
typedef struct lista{
    int *vetor;
    int vetor2[30];
}lista;
int criar();
void libera(lista* lista);
void alocar(lista* lst, int tamanho);
void coloca(lista* lst, int tamanho);
void coloca2(lista* lst);
void imprime_itr(lista* lst, int tamanho);
void imprime_recursivo(lista* lst, int fim, int inicio);
void imprime_itr2(lista* lst, int tamanho);
void acha(lista* lst, int tamanho);
void acha2porsequencialsimples(lista* lst);
void acha2porbuscasequencialordenada(lista* lst);
void acha2porbuscabinariainterativa(lista* lst);
void acha2porbuscabinariarecursiva(lista *lst, int valor, int inicio, int fim);
void maiormenorelementoiterativo(lista* lst, int tamanho);
void maiorelementorecursivo(lista* lst, int tamanho, int* maior);
void menorelementorecursivo(lista* lst, int tamanho, int* menor);
void mult_itr(lista* lst, int tamanho);
void multirecursiva(lista* lst, int tamanho, int mult);
void soma_itr(lista* lst, int tamanho);
void somarecursiva(lista* lst, int tamanho, int soma);
#endif // LISTA_H_INCLUDED