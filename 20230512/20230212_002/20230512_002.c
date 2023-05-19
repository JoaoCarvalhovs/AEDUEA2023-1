#include <stdio.h>
#include <stdlib.h>
#include "complexo.h"

Complexo* cria() {
    Complexo* num = (Complexo*) malloc(sizeof(Complexo));
    printf("Defina o valor real: ");
    scanf("%f", &num->real);
    printf("Defina o valor imaginario: ");
    scanf("%f", &num->imag);
    return num;
}

Complexo* somaa(Complexo* c1, Complexo* c2) {
    Complexo* resultado = (Complexo*) malloc(sizeof(Complexo));
    resultado->real = c1->real + c2->real;
    resultado->imag = c1->imag + c2->imag;
    return resultado;
}
Complexo* subtracaoo(Complexo* c1, Complexo* c2) {
    Complexo* resultado = (Complexo*) malloc(sizeof(Complexo));
    resultado->real = c1->real - c2->real;
    resultado->imag = c1->imag - c2->imag;
    return resultado;
}
Complexo* multiplicacaoo(Complexo* c1, Complexo* c2) {
    Complexo* resultado = (Complexo*) malloc(sizeof(Complexo));
    resultado->real = c1->real * c2->real - c1->imag * c2->imag;
    resultado->imag = c1->real * c2->imag + c1->imag * c2->real;
    return resultado;
}
Complexo* divisaoo(Complexo* c1, Complexo* c2) {
    Complexo* resultado = (Complexo*) malloc(sizeof(Complexo));
    float dnm = c2->real * c2->real + c2->imag * c2->imag;
    resultado->real = (c1->real * c2->real + c1->imag * c2->imag) / dnm;
    resultado->imag = (c1->imag * c2->real - c1->real * c2->imag) / dnm;
    return resultado;
}
void destruir_complexo(Complexo* c) {
    free(c);
}

int main() {
    Complexo *c1, *c2, *soma, *subtracao, *multiplicacao, *divisao;
    c1 = cria();
    c2 = cria();
    soma = somaa(c1, c2);
    subtracao = subtracaoo(c1, c2);
    multiplicacao = multiplicacaoo(c1, c2);
    divisao = divisaoo(c1, c2);
    printf("Soma: %.2f + i%.2f\n", soma->real, soma->imag);
    printf("Subtracao: %.2f + i%.2f\n", subtracao->real, subtracao->imag);
    printf("Multiplicacao: %.2f + i%.2f\n", multiplicacao->real, multiplicacao->imag);
    printf("Divisao: %.2f + i%.2f\n", divisao->real, divisao->imag);
    destruir_complexo(c1);
    destruir_complexo(c2);
    destruir_complexo(soma);
    destruir_complexo(subtracao);
    destruir_complexo(multiplicacao);
    destruir_complexo(divisao);
    return 0;
}
