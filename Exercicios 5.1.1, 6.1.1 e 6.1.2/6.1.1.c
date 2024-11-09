#include <stdio.h>
#include <stdlib.h>

#define N 5

typedef struct {
    int p[N];
    int t;
} Pilha;

/* Essa parte inicializa a pilha */
void inicializa_pilha(Pilha *pilha) {
    pilha->t = -1;
}

/* Essa parte verifica se a pilha está vazia */
int pilha_vazia(Pilha *pilha) {
    return pilha->t == -1;
}

/* Essa parte verifica se a pilha está cheia */
int pilha_cheia(Pilha *pilha) {
    return pilha->t == N - 1;
}

/* Essa parte remove um elemento da pilha ou seja desempilha */
int desempilhar(Pilha *pilha) {
    if (pilha_vazia(pilha)) {
        printf("Pilha vazia. Não é possível remover elementos.\n");
        return -1;
    }
    return pilha->p[pilha->t--];
}

/* Essa parte insere um elemento na pilha ou seja empilha */ 
void empilhar(Pilha *pilha, int y) {
    if (pilha_cheia(pilha)) {
        printf("Pilha cheia. Não é possível inserir elementos.\n");
        return;
    }
    pilha->p[++pilha->t] = y;
    printf("Empilhado: %d\n", y);
}

/* Essa parte serve para exibir a pilha */
void exibir_pilha(Pilha *pilha) {
    printf("Pilha: ");
    for (int i = 0; i <= pilha->t; i++) {
        printf("%d ", pilha->p[i]);
    }
    printf("\n");
}

int main() {
    Pilha pilha;
    inicializa_pilha(&pilha);

    empilhar(&pilha, 25);
    empilhar(&pilha, 30);
    empilhar(&pilha, 35);
    exibir_pilha(&pilha);

    desempilhar(&pilha);
    exibir_pilha(&pilha);

    empilhar(&pilha, 40);
    empilhar(&pilha, 45);
    exibir_pilha(&pilha);

    return 0;
}