/*Atividades
1. Criar um TDA chamado LISTA contendo como valor um vetor de números inteiros e um valor que representa a quantidade de elementos no vetor. Crie as seguintes operações para esse TDA:
//- Criar uma nova LISTA com uma quantidade de elementos definida.
//- Liberar o espaço na memória de uma LISTA.
//- Inserir elementos em uma LISTA. (os valores podem ser inseridos manualmente ou utilizando funções para gerar números aleatórios)
//- Inserir elemento de forma ordenada em uma LISTA. (os valores podem ser inseridos manualmente ou utilizando funções para gerar números aleatórios)
//- Imprimir os elementos de uma LISTA (algoritmo iterativo)
//- Buscar um elemento em uma LISTA de forma sequencial.
//- Buscar um elemento na lista de forma sequencial aproveitando que os elementos da LISTA estão ordenados.
//- Busca binaria de um elemento em uma LISTA (algoritmo iterativo)
//- Busca binaria de um elemento em uma LISTA (algoritmo recursivo)
//- Imprimir os elementos de uma LISTA (algoritmo recursivo)
//- Buscar o maior elemento em uma LISTA (algoritmo iterativo)
//- Buscar o maior elemento em uma LISTA (algoritmo recursivo)
//- Buscar o menor elemento em uma LISTA (algoritmo iterativo)
//- Buscar o menor elemento em uma LISTA (algoritmo recursivo)
//- Retornar a soma de todos os elementos de uma LISTA (algoritmo iterativo)
//- Retornar a soma de todos os elementos de uma LISTA (algoritmo recursivo)
//- Retornar o produto de todos os elementos de uma LISTA (algoritmo iterativo)
- Retornar o produto de todos os elementos de uma LISTA (algoritmo recursivo)

Testar todas operações do TDA no programa principal da seguinte forma:
//1. Perguntar ao usuário o tamanho de uma LISTA, criar a lista e preencher os valores da LISTA de forma não ordenada.
//2. Imprimir todos os elementos da LISTA.
//3. Perguntar para o usuário sobre um número que ele quer buscar na LISTA (inserir como teste um número que existe na LISTA e depois um que não esteja na LISTA) e mostrar o resultado da busca sequencial.
//4. Cria uma segunda LISTA de tamanho 30 e preencher seus elementos de forma ordenada.
//5. Imprimir todos os elementos da segunda LISTA.
/6. Perguntar para o usuário sobre um número que ele quer buscar na segunda LISTA (inserir como teste um número que existe na LISTA e depois um que não exista) 
     e mostrar o resultado da busca sequencial, busca sequencial ordenada e busca binaria interativa e recursiva.
//7. Fazer mudanças nos códigos das operações da busca sequencial, busca sequencial ordenada e busca binaria interativa para que imprima a quantidade de comparações 
   que foi necessário fazer. Comparar os resultados buscando um valor que existe na LISTA e um que não existe.
//8. Imprimir o maior elemento da primeira LISTA.
//9. Imprimir o menor elemento da primeira LISTA.
//10. Imprimir a soma dos elementos da primeira LISTA.
//11. Imprimir o produto dos elementos da primeira LISTA.
12. Fazer mudanças nos códigos da operação busca binaria recursiva para que imprima a quantidade de comparações que foi necessário fazer.*/

#include <stdio.h>
#include <stdlib.h>
#include "LISTA.h"

int main(int argc, char *argv[]) {
	
	lista lst;
	int tam;
	
	/*1. Perguntar ao usuário o tamanho de uma LISTA, criar a lista e preencher os valores da LISTA de forma não ordenada.*/
	
	tam = criar();
	alocar(&lst, tam);
	coloca(&lst, tam);
	
	/*2. Imprimir todos os elementos da LISTA.*/
	
	imprime_itr(&lst, tam);
	printf("\nA lista por forma recursiva: ");
	imprime_recursivo(&lst, tam - 1, 0 );
	/*3. Perguntar para o usuário sobre um número que ele quer buscar na LISTA (inserir como teste um número que existe na LISTA e depois um que não esteja na LISTA) e mostrar o resultado da busca sequencial.*/
	
	acha(&lst, tam);
	
	/*4. Cria uma segunda LISTA de tamanho 30 e preencher seus elementos de forma ordenada.*/
	
	coloca2(&lst);
	
	/*5. Imprimir todos os elementos da segunda LISTA.*/
	
	imprime_itr2(&lst, 30);
	
	/*6. Perguntar para o usuário sobre um número que ele quer buscar na segunda LISTA (inserir como teste um número que existe na LISTA e depois um que não exista) 
	     e mostrar o resultado da busca sequencial, busca sequencial ordenada e busca binaria interativa e recursiva.*/
	/*7. Fazer mudanças nos códigos das operações da busca sequencial, busca sequencial ordenada e busca binaria interativa para que imprima a quantidade de comparações 
   que foi necessário fazer. Comparar os resultados buscando um valor que existe na LISTA e um que não existe.*/
	
	acha2porsequencialsimples(&lst);
	acha2porbuscasequencialordenada(&lst);
	acha2porbuscabinariainterativa(&lst);
	
	int valor, inicio = 0, fim = 29;
	printf("\nPor forma de busca binaria recursiva:\nDefina um valor para se achar na lista: ");
    scanf("%d", &valor);
    
	acha2porbuscabinariarecursiva(&lst, valor, inicio, fim);
	
	/*8. Imprimir o maior elemento da primeira LISTA.*/
	maiormenorelementoiterativo(&lst, tam);
	printf("\nPor forma de recursiva: ");
	int maior = lst.vetor[tam-1];
	maiorelementorecursivo(&lst, tam, &maior);
	
	/*9. Imprimir o menor elemento da primeira LISTA.*/
	int menor = lst.vetor[tam-1];
	menorelementorecursivo(&lst, tam, &menor);
	
	/*10. Imprimir a soma dos elementos da primeira LISTA.*/
	
	soma_itr(&lst, tam);
	somarecursiva(&lst, tam, 0);
	
	/*11. Imprimir o produto dos elementos da primeira LISTA.*/
	
	mult_itr(&lst, tam);
	multirecursiva(&lst, tam, 1);
	
	libera(&lst);
	return 0;
}