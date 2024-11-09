#include <stdio.h>
#include <stdlib.h>

#define N 5

typedef struct {
    int f[N];
    int s;
    int t;
} Fila;

/* Essa parte serve para inicializa a fila */
void inicializa_fila(Fila *fila) {
    fila->s = 0;
    fila->t = 0;
}

/* Essa parte verifica se a fila está vazia */
int fila_vazia(Fila *fila) {
    return fila->s == fila->t;
}

/* Essa parte verifica se a fila está cheia */
int fila_cheia(Fila *fila) {
    return fila->t == N;
}

/* Essa parte remove um elemento da fila */
int remover(Fila *fila) {
    if (fila_vazia(fila)) {
        printf("Fila vazia. Não é possível remover elementos.\n");
        return -1;
    }
    int removido = fila->f[fila->s++];
    printf("Removido: %d\n", removido);
    return removido;
}

/* Essa parte insere um elemento na fila */
void inserir(Fila *fila, int y) {
    if (fila_cheia(fila)) {
        printf("Fila cheia. Não é possível inserir elementos.\n");
        return;
    }
    fila->f[fila->t++] = y;
    printf("Inserido: %d\n", y);
}

/* Essa parte é para imprimir o estado atual da fila */
void imprimir_fila(Fila *fila) {
    printf("Fila: ");
    for (int i = fila->s; i < fila->t; i++) {
        printf("%d ", fila->f[i]);
    }
    printf("\n");
}

int main() {
    Fila fila;
    inicializa_fila(&fila);

    inserir(&fila, 30);
    inserir(&fila, 40);
    inserir(&fila, 50);
    imprimir_fila(&fila);

    remover(&fila);
    imprimir_fila(&fila);

    inserir(&fila, 60);
    inserir(&fila, 70);
    imprimir_fila(&fila);

    remover(&fila);
    imprimir_fila(&fila);

    return 0;
}
