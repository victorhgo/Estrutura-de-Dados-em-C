/* 3.3.15 - A seqüência de Fibonacci segue a seguinte ordem: 
0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 , 89 , ...

Repare que cada termo é a somatória dos dois anteriores, sendo 
que os dois primeiros são 0 (zero) e o 1 (um). Faça um programa 
que receba um valor do usuário e imprima os termos da seqüência
de Fibonacci menores que o valor digitado. */

#include <stdio.h>

int main(){
    int num1 = 0, num2 = 1, number, fibonacci = 0;
    printf("Enter a number to calculate the Fibonacci series: ");
    scanf("%d", &number);
    printf("Fibonacci series: %d, %d, ", num1, num2);
    fibonacci = num1 + num2;

    while(fibonacci <= number){  
        printf("%d, ",fibonacci);
        num1 = num2;
        num2 = fibonacci;
        fibonacci = num1 + num2;
    }
    return 0;
}
