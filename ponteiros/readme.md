# Ponteiros em C

Esta pasta reúne os exercícios práticos sobre ponteiros realizados durante a disciplina de Estrutura de Dados I. Os códigos foram desenvolvidos em linguagem C e acompanham a [lista de exercícios](lista-ponteiros.pdf).

## O que são ponteiros?

Ponteiros são variáveis que armazenam o endereço de memória de outra variável. Dizemos que um ponteiro **aponta** para uma variável quando contém o endereço dessa variável.

Um ponteiro deve ser declarado de acordo com o tipo do dado que ele aponta:

```c
int *ponteiro_int;
float *ponteiro_float;
char *ponteiro_char;
```

Os principais operadores utilizados são:

| Operador | Nome | Finalidade |
| --- | --- | --- |
| `&` | Operador endereço | Obtém o endereço de memória de uma variável |
| `*` | Operador desreferência | Obtém ou modifica o valor armazenado no endereço apontado |

Exemplo:

```c
int valor = 10;
int *ponteiro = &valor;

*ponteiro = 20; // altera o valor da variável valor para 20
```

## Por que usar ponteiros?

Ponteiros permitem trabalhar diretamente com endereços de memória e são utilizados em situações como:

- manipulação de arrays e strings;
- passagem de argumentos por referência;
- retorno de vários valores em uma função;
- alocação dinâmica de memória;
- implementação de estruturas encadeadas, como listas, pilhas, árvores e grafos.

Ao passar o endereço de uma variável para uma função, é possível alterar o conteúdo original dessa variável.

## Exercícios realizados

| Questão | Conteúdo trabalhado | Arquivo |
| --- | --- | --- |
| 1 | Ponteiros para `int`, `float` e `char`; alteração de valores | [questao-1.c](questao-1.c) |
| 2 | Comparação entre endereços de duas variáveis inteiras | [questao-2.c](questao-2.c) |
| 3 | Leitura de variáveis e comparação de seus endereços | [questao-3.c](questao-3.c) |
| 4 | Troca de valores por meio de passagem por referência | [questao-4.c](questao-4.c) |
| 5 | Ordenação de dois valores utilizando ponteiros | [questao-5.c](questao-5.c) |
| 6 | Dobro de dois valores armazenado pelas próprias variáveis | [questao-6.c](questao-6.c) |
| 7 | Soma de dois números com alteração do primeiro parâmetro | [questao-7.c](questao-7.c) |
| 8 | Impressão dos endereços dos elementos de um array de `float` | [questao-8.c](questao-8.c) |
| 9 | Impressão dos endereços dos elementos de uma matriz de `float` | [questao-9.c](questao-9.c) |

O arquivo [exemplo.c](exemplo.c) apresenta uma demonstração básica de declaração de ponteiro, obtenção de endereço e desreferência.

## Compilando e executando

Cada exercício pode ser compilado individualmente. Por exemplo:

```bash
gcc questao-1.c -o questao-1
./questao-1
```

Para compilar o exemplo:

```bash
gcc exemplo.c -o exemplo
./exemplo
```