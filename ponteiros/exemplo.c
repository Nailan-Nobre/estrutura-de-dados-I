#include <stdio.h>

int main() {
    int x = 10;

    // 'Ponteiro' (*) que aponta para o 'endereço de memória' (&) da variável x
    int *ponteiro = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de memoria de x: %p\n", (void*)&x);
    printf("O ponteiro está apondando para: %p\n", (void*)ponteiro);
    printf("Valor apontado: %d\n", *ponteiro);

    return 0;
}
