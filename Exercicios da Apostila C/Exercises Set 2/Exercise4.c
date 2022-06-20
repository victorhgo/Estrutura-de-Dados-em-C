/*2.3.4 - Uma empresa não pretende contratar candidatos com mais 
de 40 anos. Faça um programa que receba a idade do candidato e
mostre uma mensagem se ele está apto ou não para a vaga. 
*/

#include <stdio.h>

int main(){

    int age;
    printf("Enter employee's age: ");
    scanf("%d", &age);

    if (age > 40) {
        printf("With the age %d this candidate is not able to work in the company.\n", age);
    }
    else {
        printf("With the age %d this candidate is able to work in the company\n", age);
    }

    return age;

}