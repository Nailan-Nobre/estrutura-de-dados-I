#include <stdio.h>

int main() {
    float array[3] [3] = {
        {1.0, 2.0, 3.0}, 
        {4.0, 5.0, 6.0}, 
        {7.0, 8.0, 9.0}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereço de array[%d][%d]: %p\n", i, j, (void*)&array[i][j]);
        }
    }
}