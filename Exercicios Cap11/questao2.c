#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nome[100];
    float notas[3];
} Aluno;

int main() {

    Aluno *aluno_ptr = (Aluno *)malloc(sizeof(Aluno));
    if (!aluno_ptr) {

        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Tamanho da estrutura Aluno: %zu bytes\n", sizeof(Aluno));

    free(aluno_ptr);
    return 0;
}
