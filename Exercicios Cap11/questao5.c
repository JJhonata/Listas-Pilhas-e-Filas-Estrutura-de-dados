#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    do {
        printf("Digite um valor inteiro não-negativo para N: ");
        scanf("%d", &N);
        if (N < 1) {
            printf("Valor inválido! O valor de N deve ser positivo.\n");
        }
    } while (N < 1);

    int* vetor = (int*)malloc(N * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        do {
            printf("Digite o valor %d (deve ser maior ou igual a 2): ", i + 1);
            scanf("%d", &vetor[i]);
            if (vetor[i] < 2) {
                printf("Valor inválido! O valor deve ser maior ou igual a 2.\n");
            }
        } while (vetor[i] < 2);
    }

    printf("Os valores do vetor são:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
