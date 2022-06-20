/* 6.1.2 - Faça um programa que mostre o menor valor de uma
matriz. Receba os valores e a ordem da matriz, a partir do
usuário. */

#include <stdio.h>

int main(){
    int i, j, rows, cols, lowest;   
// On the first step we will receive the rows and colums for a matrix numbers
    printf("Given a matrix m * n, enter a value for m: ");
    scanf("%i", &rows);
    printf("Now enter a value for n: ");
    scanf("%i", &cols);
    printf("Your matrix will have %i (rows) * %i (columns).\n", rows, cols);

    int numbers[rows][cols]; // our matrix will be created based on what the user desires.

// Now we will need to enter to be stored into the matrix numbers:
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter an integer to be stored in position %i x %i: ", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }    
// Now we will create an algorithm to verify wich will be the lowest value entered.
    lowest = numbers[0][0]; // To initialize the variable with the first element:
// Initialize the loop to verify wich is the lowest entered number:
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (numbers[i][j] < lowest) {
                lowest = numbers[i][j];
            }
        }
    }
    printf("The lowest entered value is %d\n", lowest);
}