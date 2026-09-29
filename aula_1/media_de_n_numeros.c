#include <stdio.h>

int main()
{
    int i, soma = 0;
    float media;
    int n;
    printf("digite quantos numeros deseja calcular a media: ");
    scanf("%d", &n);

    i = 0;
    while (i < n)
    {
        int num;
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &num);
        soma += num;
        i++;
    }

    media = (float)soma / n;
    printf("A media dos %d numeros e: %.2f\n", n, media);

    return 0;
}