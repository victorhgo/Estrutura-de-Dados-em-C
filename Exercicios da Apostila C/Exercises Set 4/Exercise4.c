/* 4.2.4 - Faça um programa que carregue um  vetor de inteiros, 
permitindo que o usuário defina a quantidade de elementos a 
serem carregados. O usuário também deve digitar o valor de um 
elemento o qual deseja saber quantos destes elementos existem 
no vetor. */

#include <stdio.h>

int main(){
    int i, count = 0, num, elements;

    printf("How much elements would you like to enter? ");
    scanf("%i", &elements); // First we enter the vector's index size. 

    // We  declare the vector when we have the exact value for its index.
    int integers[elements]; 
    // Put the entered numbers inside integers vector.
    for(i = 0; i < elements; i++){
        printf("Enter the element %d: ", i);
        scanf("%i", &integers[i]);
    }
    // Enter the number in which we would like to count in the vector:
    printf("Which number would you like to count in the vector? ");
    scanf("%i", &num);

    // A loop to "search" the entered number above and count if found.
    for(i = 0; i < elements; i++){
        if(integers[i] == num){
        count++;
        }
    }
    printf("The number %i was entered %i times", num, count);
}