#include <stdio.h>

int main() {
    int x = 10, y = 20;

    int *ponteiro_x = &x;
    int *ponteiro_y = &y;

    printf("Endereço de x: %p\n", ponteiro_x);
    printf("Endereço de y: %p\n", ponteiro_y);

    if (ponteiro_x > ponteiro_y) {
        printf("O ponteiro para x é maior que o ponteiro para y.\n");
    } else if (ponteiro_x < ponteiro_y) {
        printf("O ponteiro para y é maior que o ponteiro para x.\n");
    } else {
        printf("Os ponteiros são iguais.\n");
    }

    return 0;
}
