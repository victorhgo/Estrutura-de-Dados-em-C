/* 6.1.3 Faça um programa em C que receba do usuário uma matriz
NxM (N é o número de linhas e M o número de colunas) de
números inteiros, e armazene na linha N-1 o somatório dos
elementos de cada coluna (linhas de 0 a N-2). Exibir os
resultados */

#include <stdio.h>

int main(){
    int i, j, rows, cols, sum = 0;   
// On the first step we will receive the rows and colums for a matrix numbers
    printf("Given a matrix m * n, enter a value for m: ");
    scanf("%i", &rows);

    if (rows < 3) {
        printf("Invalid format!\n");
        return 0;
    }

    printf("Now enter a value for n: ");
    scanf("%i", &cols);
    printf("Your matrix will have %i (rows) * %i (columns).\n", rows, cols);

    int numbers[rows][cols]; // our matrix will be created based on what the user desires.

// Now we will need to enter to be stored into the matrix numbers, except for the last line, wich will be i - 1:
    for (i = 0; i < (rows - 1); i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter an integer to be stored in position %i x %i: ", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }
// Now we need to make the sum:
    for (j = 0; j < cols; j++){
        sum = 0;
        for (i = 0; i < (rows - 1); i++) {
            sum = sum + numbers[i][j];
        }
        i++;
        numbers[i][j] = sum;
        printf("Sum for column %i stored at position %i x %i is %i\n", j, i, j, numbers[i][j]);
    }
}