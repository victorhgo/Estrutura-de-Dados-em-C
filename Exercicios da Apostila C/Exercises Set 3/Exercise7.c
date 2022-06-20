/* 3.4.7 - Faça um programa que calcule e mostre o quadrado de um 
número N  inteiro positivo, digitado pelo usuário. O cálculo deve 
ser feito através da soma dos N primeiros números ímpares. Ex.: 
Se N=3 o programa calculará 1+3+5=9, que é o quadrado de 3. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    int number, square = 0, count = 0, odd = 1;
    printf("Enter a number to calculate it's square: ");
    scanf("%d", &number);

    while(count < abs(number)){
        square = square + odd;
        odd = odd + 2;
        count++;
    }    
    printf("The square of %d is %d\n", number, square);
    
    getch();
}