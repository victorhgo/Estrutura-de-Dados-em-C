/* 3.3.10 - Faça um programa que calcule o fatorial de qualquer 
número digitado pelo usuário, sabendo que o fatorial de um 
número é o produtório dos números inteiros entre 1 e ele mesmo. */

#include <stdio.h>

int main(){

    int count = 1, factorial = 1, number;
    printf("What number would you like to factorate? ");
    scanf("%d", &number);
//    1 * 2 * 3 * ... * n
    while(count <= number){
        factorial = count * factorial;
        count++;
    }
    printf("The factorial of %d is %d", number, factorial);
}