#include <stdio.h>

int main() {
    int x = 10;
    double y = 9.99;
    char z = 'A';

    // Ponteiros para cada tipo de variável
    int *ponteiro_x = &x;
    double *ponteiro_y = &y;
    char *ponteiro_z = &z;

    printf("Valores iniciais:\n");
    printf("Valor de x: %d\n", x);
    printf("valor de y: %.2f\n", y);
    printf("valor de z: %c\n", z);

    *ponteiro_x = 12;
    *ponteiro_y = 15.5;
    *ponteiro_z = 'B';

    printf("\nValores após alteração via ponteiros:\n");
    printf("Valor de x: %d\n", x);
    printf("valor de y: %.2f\n", y);
    printf("valor de z: %c\n", z);

    return 0;
}
