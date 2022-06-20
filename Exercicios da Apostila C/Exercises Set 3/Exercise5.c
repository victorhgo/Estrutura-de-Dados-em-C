/* 3.3.5 - Um usuário tem em suas mãos 100 Notas Fiscais. Faça um 
programa que receba seus valores e calcule o total de todas as 
Notas. */

#include <stdio.h>

int main(){
    int count = 0;
    float value = 0, value_sum = 0;

    while (count < 100) {
        printf("Enter the value in R$: ");
        scanf("%f", &value);
        value_sum = value_sum + value;
        count++;
    }
    printf("The expenses will be: %.2f R$\n", value_sum);
    return 0;
}