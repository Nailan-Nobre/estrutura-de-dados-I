#include <stdio.h>

int main()
{
    // Encontra o maior elemento em um array
    int arr[5] = {15, 25, 12, 32, 22};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int maior = arr[0];

    for (int i = 1; i < tamanho; i++) //quando há apenas um elemento no for não precisa colocar '{}'
        if (arr[i] > maior) //quando há apenas um elemento no if não precisa colocar '{}'
            maior = arr[i];

    printf("O maior elemento do array eh: %d\n", maior);

    return 0;
}