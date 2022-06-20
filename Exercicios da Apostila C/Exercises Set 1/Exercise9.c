/* 1.7.9 - Write a program that receives two number and returns the 
multiplication, sum, subtraction and divison */

#include <stdio.h>

#define multiplication number1 * number2
#define divison number1 / number2
#define subtraction number1 - number2
#define sum number1 + number2

int main(){
    float number1, number2, result;

    printf("Enter the first number: ");
    scanf("%f", &number1);
    printf("Enter the the second number: ");
    scanf("%f", &number2);

    result = multiplication;

    printf("The multiplication of %.2f and %.2f is %.2f\n", number1, number2, result);

    result = divison;

    printf("The divison of %.2f by %.2f is %.2f\n", number1, number2, result);

    result = sum;

    printf("The sum of %.2f and %.2f is %.2f\n", number1, number2, result);

    result = subtraction;

    printf("The subtraction of %.2f and %.2f is %.2f\n", number1, number2, result);
    

    return 0;
}

