#include <stdio.h>

void soma(int *a, int *b) {
    printf("digite o valor de a: ");
    scanf("%d", a);
    printf("digite o valor de b: ");
    scanf("%d", b);
    int resultado = *a + *b;
}

int main() {
    int a, b;

    soma(&a, &b);
    printf("A soma de a e b é: %d\n", a + b);

    return 0;
}