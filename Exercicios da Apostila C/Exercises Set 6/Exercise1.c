/* 6.1.1 Faça um programa que carregue em uma matriz as notas
dos 30 alunos das 3 turmas que um professor leciona. Mostre a
media de cada turma. */

#include <stdio.h>

int main(){

// The matrix were the grades and class will be stored. we will have three classes for thirty students in each.
    int grades[3][30]; 
// I represents the classes and J represents the students.
    int i, j;
// Average will be used to calculate the grade's average of each class.    
    float avrg = 0;

// Loop used to receive and store the grades.
    for (i = 0; i < 3; i++) {
        printf("Enter the grades of class %i:\n", i);
// On this stage we will receive 30 different grades and store in class i.        
        for (j = 0; j < 30; j++) {
            scanf("%i", &grades[i][j]);
        }
    }
// Loop used to calculate the average of each class.
    for (i = 0; i < 3; i++) {
        avrg = 0; // Each time a class is calculated, we need to clear the average to be calculated again.
        for (j = 0; j < 30; j++) {
            avrg += grades[i][j];  
        }
        printf("The grade's average for Class n %i is %.2f\n", i, (avrg / 30));
    }
}