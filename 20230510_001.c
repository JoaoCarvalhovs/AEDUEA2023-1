/*1. TDA String em C
Suponha que uma cadeia de caracteres S contenha uma frase qualquer. Vamos construir um programa que, utilizando as operações disponíveis na biblioteca string.h,
verifique se a frase possui pelo menos uma ocorrência de um caractere P, também lido. Em caso afirmativo, imprimir  SIM;  caso contrário, imprimir NÃO.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char frase[50], P;
	printf("Escreva a tal frase:\n");
	fgets(frase, 100, stdin);
	printf("Escreva o Caractere:\n");
	scanf("%c", &P);
	if(strchr(frase, P)){
	printf("SIM");
	}else{printf("Nao");
	}
}