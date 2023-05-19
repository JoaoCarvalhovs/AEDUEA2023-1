/*1. Desenvolva um TAD que represente um cubo. Inclua as funções de inicializações necessárias e as operações que retornem os tamanhos de cada lado, a sua área e o seu volume.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cubo.h"


void tamanho_do_lado(cubo *l){
	printf("defina o tamanho do lado: ");
	scanf("%f",&l->lado);
}
float tamanho_da_area(cubo *a){
	float ar;
	ar = (a->lado)*(a->lado);
	return ar;	
}
float tamanho_do_volume(cubo *v){
	float vol;
	vol = (v->lado)*(v->lado)*(v->lado);
	return vol;	
}

void printa(cubo *p){
	printf("-----------------------------------------\n");
	printf("O valor do lado colocado: %.2f\n", p->lado);
	printf("Area de cada lado: %.2f\n",p->area);
	printf("Area total dos lados: %.2f\n", 6 * (p->area));
	printf("Volume do cubo: %.2f",p->volume);
}
 
int main(){
	cubo *l;
	l = (cubo*) malloc (sizeof(cubo));
	tamanho_do_lado(l);
	l->area = tamanho_da_area(l);
	l->volume = tamanho_do_volume(l);
	printa(l);
	free(l);
	return 0;
}
