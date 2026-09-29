#include <stdio.h>

int main()
{
    float A [2][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}};
    float B[2][3] = {{7.0, 8.0, 9.0}, {10.0, 11.0, 12.0}};
    float C[2][3];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%.1f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}