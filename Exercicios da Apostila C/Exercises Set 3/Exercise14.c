/* 3.3.14 - Faça um programa que calcule o fatorial de qualquer 
número digitado pelo usuário, sabendo que o fatorial de um 
número é o produtório dos números inteiros entre 1 e ele mesmo */

#include <stdio.h>

int main(){
    int count = 0;
    long int factorial = 1, number;

    printf("Enter a number n to calculate it's factorial in the form of n!\n");
    printf("number n = ");
    scanf("%d", &number);
    
    while(count < number){
        factorial = factorial * (number - count);
        count++;
    }
    printf("%d! is equal to %d",number, factorial);
}