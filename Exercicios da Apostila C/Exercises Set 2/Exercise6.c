/* 2.3.6 - Uma empresa deseja bonificar seus funcionários de acordo 
com a quantidade de vendas do mês. O gerente lhe entregou 
uma tabela para que você faça um programa que mostre o valor 
das bonificações.
< 1500 = 5%
> 1500 and < 3500 = 7%
> 3500 = 10
*/

#include <stdio.h>

int main(){
    float sell;
    printf("How much did the employee sell this month? ");
    scanf("%f", &sell);

    if (sell > 3500) {
        printf("This employee will receive %.2f R$\n", 0.1 * sell);
    }  
    if(sell >= 1500 && sell <= 3500){
        printf("This employee will receive %.2f R$\n", 0.07 * sell);
    }  
    if(sell < 1500){
        printf("This employee will receive %.2f R$\n", 0.05 * sell);
    }

    return 0;
} 