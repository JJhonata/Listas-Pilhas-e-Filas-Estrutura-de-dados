#include <stdio.h>
#include <stdlib.h>

int main() {

    float array[10];

    for (int i = 0; i < 10; i++) {
        printf("Endereço de array[%d]: %p\n", i, (void*)&array[i]);
    }

    return 0;
}
