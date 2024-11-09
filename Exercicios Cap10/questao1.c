#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    int b = 20;

    int *ptr_a = &a;
    int *ptr_b = &b;

    if (ptr_a > ptr_b) {
        printf("O endereço de a (%p) é maior.\n", (void*)ptr_a);
    } else if (ptr_b > ptr_a) {
        printf("O endereço de b (%p) é maior.\n", (void*)ptr_b);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
