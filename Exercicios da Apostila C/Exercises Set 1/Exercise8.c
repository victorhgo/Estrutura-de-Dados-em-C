/* 1.7.8 - Write a program that receives two number and returns the multiplication */

#include <stdio.h>
#define multiplication number1 * number2

int main(){
    float number1, number2, result;

    printf("Enter the first number: ");
    scanf("%f", &number1);
    printf("Enter the the second number: ");
    scanf("%f", &number2);

    result = multiplication;

    printf("%.2f * %.2f is %.2f\n", number1, number2, result);

    return 0;
}

