#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Essa parte serve para inverter uma palavra */
void inverter_palavra(char *inicio, char *fim) {
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

/* Essa parte serve para inverter as letras de cada palavra */
void inverter_sentenca(char *sentenca) {
    char *inicio = sentenca;
    char *fim = sentenca;
    
    while (*fim != '\0') {
        if (isspace(*fim)) {
            inverter_palavra(inicio, fim - 1);
            inicio = fim + 1;
        }
        fim++;
    }
    
    inverter_palavra(inicio, fim - 1);
}

int main() {
    char sentenca[] = "AMU MEGASNEM ATERCES";
    
    printf("Sentença original: %s\n", sentenca);
    
    inverter_sentenca(sentenca);
    
    printf("Sentença invertida: %s\n", sentenca);
    
    return 0;
}
