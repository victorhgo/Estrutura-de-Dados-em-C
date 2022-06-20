/* 6.1.4 - Faça a multiplicação de duas matrizes. Receba os valores e
as ordens das matrizes a partir do usuário. Faça todas as
consistências necessárias. */

#include <stdio.h>

int main(){
    int i, j, k, rows1, rows2, cols1, cols2;
// On the first step we will receive the rows and colums for the first matrix.
    printf("Given a matrix m * n, enter a value for m: ");
    scanf("%i", &rows1);

// For the columns
    printf("Now enter a value for n: ");
    scanf("%i", &cols1);

    printf("Your matrix will have %i (rows) * %i (columns).\n", rows1, cols1);
// This matrix will be called matrix1
    int matrix1[rows1][cols1];

// On the second step we will receive the rows and colums for the second matrix.
    printf("Given a matrix m * n, enter a value for m: ");
    scanf("%i", &rows2);

// For the columns
    printf("Now enter a value for n: ");
    scanf("%i", &cols2);
    printf("Your matrix will have %i (rows) * %i (columns).\n", rows2, cols2);

// This matrix will be called matrix1
    int matrix2[rows2][cols2];

// Test if matrices are compatible for multiplication:
// The multiplication is only possible when a matrix (m * n) * (x * y) 
// where m = y, the new matrix will have x * n:
    if (rows1 != cols2) {
        printf("ERROR: The entered matrices can't be multiplied!!!\n");
        return 0;
    }
// To create the resulting matrix with x * n:    
    int res_matrix[rows1][cols2];    

// To receive receive the values for the first matrix:
    printf("Enter the values for the first matrix\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("Enter a value for position %i x %i: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

// Now we receive the values for the second matrix:
    printf("Enter the values for the second matrix\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            printf("Enter a value for position %i x %i: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

/*  To multiply the first matrix with the second one, we need to initialize
    the resulting matrix with 0. Then we can start a for loop where
    we take the resulting matrix and iterates the multiplication result for
    each element in: Rows1 * Cols1, then Rows2 * Cols2 ... Rowsn * Colsn! */ 
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            res_matrix[i][j] = 0;
            for (k = 0; k < rows2; k++) {
                res_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }    
        }
    }

// To print the new resulting matrix:
    printf("The product of the two matrices is: \n");
    for(i = 0; i < rows1; i++){
        for(j=0; j < cols2; j++){
            printf("For position %d x %d = %d\n",i, j, res_matrix[i][j]);
        }
    }    
}