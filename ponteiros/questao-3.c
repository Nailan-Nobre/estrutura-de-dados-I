#include <stdio.h>

int main() {
    int x, y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);

    int *ponteiro_x = &x;
    int *ponteiro_y = &y;

    if (ponteiro_x > ponteiro_y) {
        printf("O ponteiro para x é maior que o ponteiro para y.\n");
    } else if (ponteiro_x < ponteiro_y) {
        printf("O ponteiro para y é maior que o ponteiro para x.\n");
    } else {
        printf("Os ponteiros são iguais.\n");
    }

    return 0;
}
