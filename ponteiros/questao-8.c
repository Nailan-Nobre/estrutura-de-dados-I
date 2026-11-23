#include <stdio.h>

int main() {
    float array[10] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

    for (int i = 0; i < 10; i++) {
        printf("Endereço de array[%d]: %p\n", i, (void*)&array[i]);
    }

}