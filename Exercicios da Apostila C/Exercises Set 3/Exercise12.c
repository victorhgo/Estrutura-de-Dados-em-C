/* 3.3.12 Faça um programa que leia uma coleção de números 
inteiros e calcule sua média quadrática. A média quadrática é 
dada pela fórmula: MQ = SQRT((x^2)+(x^2)+(x^2)...) */

#include <stdio.h>
#include <math.h>

int main(){
    int num, sqr_avrg = 0;

    printf("Enter the numbers to calculate it's Square Average, enter 0 to calculate:\n");
    scanf("%d", &num);

    while(num != 0){
        sqr_avrg = sqr_avrg + (num * num);
        scanf("%d", &num);
    }
    printf("The Square Average of the entered numbers is %.2f\n", sqrt(sqr_avrg));

    return 0;
}