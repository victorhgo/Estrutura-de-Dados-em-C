/* 3.3.3 - Faça um programa que permita que o usuário digite a idade 
de 10 funcionários */

#include <stdio.h>

int main(){
    int age, count = 0;

    while (count <= 10) {       
        printf("Enter the age: ");
        scanf("%d", &age);
        printf("Age is %d\n", age);
        count++;
    }
    return 0;
}