/* 4.2.1 - Faça um programa que receba 5 valores inteiros em um 
vetor e mostre na tela, os valores na ordem inversa. */

#include <stdio.h>

int main(){
    int i, vector[5];

    for(i = 0; i < 5; i++){
        printf("Enter a number to store in the vector variable\n");
        scanf("%d", &vector[i]);
    }
    for(i = (i-1); i >= 0; i--){
    printf("The entered numbers are %d \n", vector[i]);
    }
}