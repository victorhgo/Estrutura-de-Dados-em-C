/* 3.3.4 - Faça um programa que permita que o usuário digite a idade 
de 10 funcionários e após a digitação, mostre a somatória das 
idades. A soma das idades deve ser feita dentro do looping e 
apenas a exibição fora dele. */

#include <stdio.h>

int main(){
    int age = 0, age_sum = 0, count = 0;

    while (count < 10) {
        printf("Enter the age: ");
        scanf("%d", &age);
        age_sum = age_sum + age;
        count++;
    }
    printf("The sum of ages is: %d\n", age_sum);
    return 0;
}