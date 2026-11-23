#include <stdio.h>

void ordenar(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x, y;

    printf("digite o valor para x: ");
    scanf("%d", &x);
    printf("digite o valor para y: ");
    scanf("%d", &y);
    printf("Valores antes da ordenação: x = %d, y = %d\n", x, y);
    ordenar(&x, &y);
    printf("Valores ordenados: x = %d, y = %d\n", x, y);

    return 0;

}
