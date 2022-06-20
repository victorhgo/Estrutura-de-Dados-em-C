/* 2.3.5 - Um restaurante oferece um desconto de 7% para todos os 
clientes que gastarem mais que R$ 250,00 no fechamento da 
conta. Faça um programa que pergunte ao usuário qual o valor da
conta e mostre o valor real a ser pago.
*/

#include <stdio.h>

int main(){

    float bill;

    printf("Enter the amount to be paid by the customer: ");
    scanf("%f", &bill);

    if(bill > 250) {
        bill = bill - (0.07 * bill);
        printf("This customers is eligible to receive the discount and he will pay %.2f R$\n", bill);
    }
    else {
        printf("The customer will pay %.2f R$\n", bill);
    }
    return bill;
}
