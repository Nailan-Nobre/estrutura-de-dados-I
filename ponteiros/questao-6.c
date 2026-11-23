#include <stdio.h>

void operacao(int *a, int *b) {
    int dobroa = *a * 2;
    int dobrob = *b * 2;
    *a = dobroa;
    *b = dobrob;
    printf("A soma do dobro de a e b é: %d\n", dobroa + dobrob);

}

int main() {
    int a, b;

    printf("Digite um valor para a: ");
    scanf("%d", &a);
    printf("Digite um valor para b: ");
    scanf("%d", &b);
    printf("Valores antes da operação: a = %d, b = %d\n", a, b);

    operacao(&a, &b);
    printf("Valores após a operação: a = %d, b = %d\n", a, b);
    
    return 0;
}
