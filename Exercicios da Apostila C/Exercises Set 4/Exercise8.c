/* 4.2.8 - Faça um programa que crie um vetor, digitado pelo usuário,
com a idade de 100 pessoas. Mostrar a media aritmética e a
freqüência absoluta de uma determinada idade digitada pelo
usuário. Freqüência absoluta de um valor é o número de vezes
que o mesmo aparece no conjunto de valores (vetor) */

#include <stdio.h>

int main(){
    int age[100], i, counter = 0, verify_age;
    float summatory = 0;

    // Enter the age and store it at the vector age.
    for(i = 0; i < 100; i++){
        printf("Enter an age: ");
        scanf("%d", &age[i]);
    }
    /* The average will be each age in the vector (summatory of age) 
    divided by 100 */
    for (i = 0; i < 100; i++) {
        summatory = summatory + age[i];
    }
    printf("The average of the entered ages is %.2f\n", (summatory / 100));

    // The absolute frequency will be how much time an age was entered.
    printf("Which age would you like to count how many time was entered: ");
    scanf("%d", &verify_age);

    for (i = 0; i < 100; i++){
        if (age[i] == verify_age){
            counter++;
        }
    }
    printf("Age %d was entered %d times\n", verify_age, counter);
}