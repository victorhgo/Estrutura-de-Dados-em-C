/* 1.7.11 - Exchange table

*/

#include <stdio.h>

#define usd 5.04
#define eu 5.52
#define gbp 6.59

int main() {

    float brl, exchanged_value;
    printf("Enter your amount (in R$): ");

    scanf("%f", &brl);

    exchanged_value = brl / usd;
    printf("The exchange for USD$ today is %.2f R$ and your money is worthy %.2f USD$\n", usd, exchanged_value);

    exchanged_value = brl / eu;
    printf("The exchange for EU€ today is %.2f R$ and your money is worthy %.2f EU€\n", eu, exchanged_value);

    exchanged_value = brl / gbp;
    printf("The exchange for GBP£ today is %.2f R$ and your money is worthy %.2f GBP£\n", gbp, exchanged_value);

}