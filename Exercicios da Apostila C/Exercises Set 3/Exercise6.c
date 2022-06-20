/* 3.3.6 - Implementar um programa que imprima a tabuada de um 
número digitado pelo usuário. */

#include <stdio.h>

int main(){
    int num, count = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(count <= 10){
        printf("%d X %d = %d\n", num, count, num * count);
        count++;
    }
    return 0;
}