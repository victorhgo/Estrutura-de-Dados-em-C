/* 1.7.10 - Write a program that calculates the average temperature of a day
 The user must enter 5 different temperatures measured during the day, and print
 the average result.
*/

#include <stdio.h>

int main(){
    int temp1, temp2, temp3, temp4, temp5, average;
    printf("Enter the first temperature (in °C): ");
    scanf("%d", &temp1);
    printf("Enter the second temperature (in °C): ");
    scanf("%d", &temp2);
    printf("Enter the third temperature (in °C): ");
    scanf("%d", &temp3);
    printf("Enter the fourth temperature (in °C): ");
    scanf("%d", &temp4);
    printf("Enter the fifth temperature (in °C): ");
    scanf("%d", &temp5);

    average = (temp1 + temp2 + temp3 + temp4 + temp5) / 5;

    printf("The average temperature for today is %d °C\n", average);

}