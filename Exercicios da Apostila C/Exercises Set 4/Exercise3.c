/* 4.2.3 - Faça um programa que receba, em um vetor, 200 valores 
inteiros, a partir do usuário. Após o carregamento, mostre para o 
usuário apenas o conteúdo dos índices pares. */

#include <stdio.h>

int main(){
    int i = 0, numbers[200];
    // To receive data inside vector numbers
    while(i < 200){
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
        i++;
    }
    // When the number % 2 == 0 it means that the number is even.    
    for(i = 0; i < 200; i++){
        if(numbers[i] % 2 == 0){
            printf("%d\n", numbers[i]);
        }
    }
}