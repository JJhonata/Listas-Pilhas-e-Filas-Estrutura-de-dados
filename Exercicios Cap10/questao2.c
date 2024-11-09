#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    printf("Digite um valor para a: ");
    scanf("%d", &a);

    printf("Digite um valor para b: ");
    scanf("%d", &b);

    int *ptr_a = &a;
    int *ptr_b = &b;

    if (ptr_a > ptr_b) {
        printf("O conteúdo do maior endereço (%p) é: %d\n", (void*)ptr_a, *ptr_a);
    } else if (ptr_b > ptr_a) {
        printf("O conteúdo do maior endereço (%p) é: %d\n", (void*)ptr_b, *ptr_b);
    } else {
        printf("Os endereços são iguais, e o conteúdo é: %d\n", *ptr_a);
    }

    return 0;
}
