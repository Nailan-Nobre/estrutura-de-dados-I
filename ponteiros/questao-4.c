#include <stdio.h>

void trocar_valor(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Antes: x = %d, y = %d\n", x, y);
    trocar_valor(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;

}
