/* 4.2.5 - Cadastre em um vetor os índices de inflação dos 12 meses
de 2008 (cada índice fará referência a um mês do ano).

a)Mostrar a inflação e o mês (numericamente) de menor índice

b)Mostrar a inflação e o mês (numericamente) de maior índice 

*/

#include <stdio.h>

int main(){
    int i, vector_index = 0;
    float inflation[12];

    for(i = 0; i < 12; i++){
        printf("Enter the inflation index for month %i: ", (i + 1)); 
        scanf("%f", &inflation[i]);
    }
    // For the least inflaction's index
    for (i = 0; i < 12; i++){
        if (inflation[i] <= inflation[vector_index]){
            vector_index = i;
        }
    }
    printf("The smallest inflaction rate was at month %d and was %.2f percent.\n", (vector_index + 1), inflation[vector_index]);
    // For the biggest inflaction's index    
    for (i = 0; i < 12; i++){
        if (inflation[i] >= inflation[vector_index]){
            vector_index = i;
        }
    }
    printf("The biggest inflaction rate was at month %d and was %.2f percent.\n", (vector_index + 1), inflation[vector_index]);     
}