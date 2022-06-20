/* 4.2.2 - Faça um programa que receba as notas de 10 alunos de uma
classe em um vetor e mostre a média das notas. */

#include <stdio.h>

int main(){
    int i;
    float grades[10], average, sum;

    for(i = 0; i < 10; i++){
        printf("Enter the grades for students: ");
        scanf("%f", &grades[i]);
        sum = sum + grades[i];
    }
    // i + 1 to use the exactly amount of entered grades.
    average = sum / (i + 1);
    printf("The average grades of class is %.2f", average); 
}
