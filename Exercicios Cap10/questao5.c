#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5];
    int *ptr = a;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para a[%d]: ", i);
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < 5; i++) {
        printf("O dobro de a[%d] (%d) é: %d\n", i, *(ptr + i), *(ptr + i) * 2);
    }

    return 0;
}
