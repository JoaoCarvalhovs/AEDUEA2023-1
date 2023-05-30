#include "LISTA.h"
#include <stdio.h>
#include <stdlib.h>

int criar(){
	int tamanho;
    printf("Qual o tamanho dessa lista?\n");
    scanf("%d", &tamanho);
    return tamanho;
}
void alocar(lista *lst, int tamanho){
    lst->vetor = (int*) malloc (tamanho * sizeof(lista));
    
}
void libera(lista* lista){
    free(lista);
}
void coloca(lista* lst, int tamanho){
    int i;
    for(i=0 ; i < tamanho; i+=1){
        printf("Qual o %d valor da sua lista?\n", i+1);
        scanf("%d", &(lst->vetor[i]));
    }
}
void coloca2(lista* lst){
	int i;
	printf("\n");
	for(i=0;i<30;i+=1){
		printf("Qual o %d valor da lista?", i+1);
		scanf("%d", &(lst->vetor2[i]));
	}
}
void imprime_itr(lista* lst, int tamanho){
    int i;
    printf("A lista de forma iterativa: ");
    for(i=0;i<tamanho-1;i+=1){
        printf("%d, ", (lst->vetor[i]));
    }
    printf("%d", (lst->vetor[i]));
}
void imprime_recursivo(lista* lst, int fim, int inicio){
	if(inicio == fim){
		printf("%d", lst->vetor[fim]);
	}
	if(inicio<fim){
		printf("%d, ", lst->vetor[inicio]);
		imprime_recursivo(lst, fim, inicio+1);
		
	}
}
void imprime_itr2(lista* lst, int tamanho){
    int i;
    printf("A lista de forma iterativa: ");
    for(i=0;i<tamanho-1;i+=1){
        printf("%d, ", (lst->vetor2[i]));
    }
    printf("%d", (lst->vetor2[tamanho-1]));
}
void acha(lista* lst, int tamanho){
    int valor;
    int i;
    printf("\n-------------------------------------------\nPor forma sequencial simples:\ndefina um valor para se achar na lista: ");
    scanf("%d", &valor);
    for( i = 0 ;  i < tamanho ; i += 1){
        if(lst->vetor[i] == valor){
            printf("O valor %d esta na posicao: %d\n", valor, i+1);
            printf("-------------------------------------------");
            return;
        }
    }
    printf("valor não encontrado");
    printf("\n-------------------------------------------");
}
void acha2porsequencialsimples(lista* lst){
    int valor, moves = 0;
    int i;
    printf("\n-------------------------------------------\nPor forma sequencial simples:\ndefina um valor para se achar na lista: ");
    
    scanf("%d", &valor);
    
    //printf("%d", valor);
    
    for(i = 0 ;  i < 10 ; i += 1){
    	moves+=1;
    	//printf("%d", (lst->vetor2[i]));
        if(lst->vetor2[i] == valor){
            printf("O valor %d esta na posicao: %d\n", valor, i+1);
            printf("\n%d moves\n-------------------------------------------", moves);
            return;
        }
    }
    printf("valor não encontrado");
    printf("\n-------------------------------------------");
}
void acha2porbuscasequencialordenada(lista* lst) {
    int valor, moves=0;
    printf("\n-------------------------------------------\nPor forma sequencial ordenado:\nDefina um valor para se achar na lista: ");
    scanf("%d", &valor);
    //printf("valor: %d\n", valo);
    int i;
    for (i = 0; i < 30; i+=1) {
    	moves+=1;
    	//printf("vagr: %d\n", (lst->vetor2[i]));
        if (lst->vetor2[i] == valor) {
            printf("O valor %d esta na posicao: %d\n", valor, i + 1);
            printf("%d moves\n-------------------------------------------\n", moves);
            return;
        }
		if (lst->vetor2[i] > valor) {
            break;
        }
    }
    printf("valor nao encontrado");
    printf("\n-------------------------------------------");
}
void acha2porbuscabinariainterativa(lista *lst){
	int valor, esquerda = 0, direita = 29, moves = 0;
    printf("\n-------------------------------------------\nPor forma de busca binaria:\nDefina um valor para se achar na lista: ");
    scanf("%d", &valor);
    
    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        moves+=1;
        if (lst->vetor2[meio]  == valor) {
            printf("O valor %d esta na posicao: %d\n%d moves\n", valor, meio + 1, moves);
            printf("\n-------------------------------------------");

            return;
        } else if (lst->vetor2[meio] < valor) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
	printf("valor nao encontrado");
    printf("\n-------------------------------------------");
}
void acha2porbuscabinariarecursiva(lista *lst, int valor, int inicio, int fim){
	int meio = (inicio+fim)/2;
	if (inicio > fim){
		printf("valor nao encontrado");
    	printf("\n-------------------------------------------");
    	return;
	}
	if (inicio < fim){
		if(lst->vetor2[meio] == valor){
			printf("O valor %d esta na posicao: %d\n%d moves\n", valor, meio+1);
            printf("\n-------------------------------------------");
			return;
		}
		if(lst->vetor2[meio] < valor){
			acha2porbuscabinariarecursiva(lst, valor, inicio+1, fim);	
		}
		else{
			acha2porbuscabinariarecursiva(lst, valor, inicio, fim-1);	
		}
	}
}
void maiormenorelementoiterativo(lista* lst, int tamanho){
	int i, maior, menor;
	for(i=0;i<tamanho;i+=1){
		if(i==0){
			maior = lst->vetor[i];
			menor = lst->vetor[i];
		}
		if(lst->vetor[i] > maior){
			maior = lst->vetor[i];
		}
		if(lst->vetor[i] < menor){
			menor = lst->vetor[i];
		}		
	}
	printf("\nPor metodo iterativo na PRIMEIRA LISTA o menor valor eh %d e o maior eh %d\n", menor, maior);
}
void maiorelementorecursivo(lista* lst, int tamanho, int* maior){
	if(tamanho == 0){
		if(lst->vetor[0] > *maior){
			*maior = lst->vetor[0]; 
		}
		printf("O maior valor da lista eh: %d\n", *maior);
		return;
	}
	if (tamanho > 0){
		if(lst->vetor[tamanho] > *maior){
			*maior = lst->vetor[tamanho];
		}
		maiorelementorecursivo(lst, tamanho - 1, maior);
	}
}
void menorelementorecursivo(lista* lst, int tamanho, int* menor){
	if(tamanho == 0){
		if(lst->vetor[0]<*menor){
			*menor = lst->vetor[0]; 
		}
		printf("O menor valor da lista eh: %d\n", *menor);
		return;
	}
	if (tamanho > 0){
		if(lst->vetor[tamanho] < *menor){
			*menor = lst->vetor[tamanho];
		}
		menorelementorecursivo(lst, tamanho - 1, menor);
	}
}
void mult_itr(lista* lst, int tamanho){
    int i, mult=1;
    printf("A Multiplicacao de forma iterativa dos termos: ");
    for(i=0;i<tamanho;i+=1){
        mult *= (lst->vetor[i]);
    }
    printf("%d\n", mult);
}
void soma_itr(lista* lst, int tamanho){
    int i, soma = 0;
    printf("A Soma de forma iterativa dos termos: ");
    for(i=0;i<tamanho;i+=1){
        soma += (lst->vetor[i]);
    }
    printf("%d\n", soma);
}
void somarecursiva(lista* lst, int tamanho, int soma) {
    if (tamanho == 0) {
    	soma += lst->vetor[tamanho];
        printf("\nValor da soma por recursividade: %d\n", soma);
    } else {
    	soma += lst->vetor[tamanho];
        somarecursiva(lst, tamanho - 1, soma);
    }
}
void multirecursiva(lista* lst, int tamanho, int mult) {
    if (tamanho == 0) {
    	mult *= lst->vetor[tamanho];
        printf("\nValor da multiplicacao por recursividade: %d\n",mult);
    } else {
    	mult *= lst->vetor[tamanho];
        multirecursiva(lst, tamanho - 1, mult);
    }
}
void acha2porbuscabinariarecursiva2(lista *lst, int valor, int inicio, int fim, int cont){
	int meio = (inicio+fim)/2;
	if (inicio > fim){
		cont = 0;
		printf("valor nao encontrado");
    	printf("\n-------------------------------------------");
    	return;
	}
	if (inicio < fim){
		cont += 1;
		if(lst->vetor2[meio] == valor){
			printf("O valor %d esta na posicao: %d\n%d moves\n", valor, meio+1);
            printf("\n-------------------------------------------");
			return;
		}
		if(lst->vetor2[meio] < valor){
			acha2porbuscabinariarecursiva(lst, valor, inicio+1, fim);	
		}
		else{
			acha2porbuscabinariarecursiva(lst, valor, inicio, fim-1);	
		}
	}
}