#include <stdio.h>

// Ler o número e as 3 notas de 10 alunos

struct Aluno {
    int num_aluno;
    float nota1, nota2, nota3;
    float media;
};

int main() {
    struct Aluno alunos[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o número do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].num_aluno);

        printf("Digite a nota 1 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota 2 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        printf("Digite a nota 3 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    }

    printf("\nResultados:\n");
    for (i = 0; i < 10; i++) {
        printf("Aluno %d - Número: %d, Média: %.2f\n", i + 1, alunos[i].num_aluno, alunos[i].media);
    }

    return 0;
}
