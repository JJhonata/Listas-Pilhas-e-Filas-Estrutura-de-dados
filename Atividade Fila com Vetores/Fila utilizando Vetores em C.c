#include <stdio.h>
#include <stdlib.h>


#define MAX 10


int fila[MAX];
int frente = 0;
int tras = -1;
int tamanho = 0;

#define false 0
#define true 1


int filaCheia() {
    return tamanho == MAX;
}

int filaVazia() {
    return tamanho == 0;
}

int enfileirar(int valor) {
    if (filaCheia()) {
        printf("Fila cheia, nao é possível adicionar mais item.\n");
        return false;
    }
    tras = (tras + 1) % MAX;
    fila[tras] = valor;
    tamanho++;
    return true;
}

int desenfileirar(int *valor) {
    if (filaVazia()) {
        printf("Fila esta vazia, nao é possível remover nenhum item.\n");
        return false;
    }
    *valor = fila[frente];
    frente = (frente + 1) % MAX;
    tamanho--;
    return true;
}

void imprimirFila() {
    if (filaVazia()) {
        printf("Fila vazia!\n");
        return;
    }
    int i = frente;
    int count = tamanho;
    while (count > 0) {
        printf("%d ", fila[i]);
        i = (i + 1) % MAX;
        count--;
    }
    printf("\n");
}

int main() {
    enfileirar(1);
    enfileirar(2);
    enfileirar(3);
    enfileirar(4);
    enfileirar(5);
    enfileirar(6);
    enfileirar(7);
    enfileirar(8);
    enfileirar(9);
    enfileirar(10);


    printf("Fila depois de enfileirar 10 elementos: ");
    imprimirFila();

    int valorRemovido;
    desenfileirar(&valorRemovido);
    printf("Removido: %d\n", valorRemovido);

    printf("Fila depois de remover um elemento: ");
    imprimirFila();

    return 0;
}
