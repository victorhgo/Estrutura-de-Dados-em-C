/* 2.3.10 - Dados 3 valores quaisquer, verifique se eles podem ser
lados de um triângulo. Lembre que,  em um triângulo, a soma de
dois lados deve ser maior que o maior lado. */

#include <stdio.h>


int main(){
    int a,b,c,highest;
    printf("Enter the three numbers you want to verify: ");
    scanf("%d %d %d", &a, &b, &c);
// Which is the highest side?
// A is the highest side.
    if(a >= b && a >= c){
        highest = a;
        if (b + c >= highest) {
            printf("Those numbers are sides of a triangle\n");
        }
        else{
            printf("Those numbers are not sides of a triangle\n");
        }
    }
// B is the highest size.    
    else if(b >= a && b >= c){
        highest = b;
        if (a + c >= highest) {
            printf("Those numbers are sides of a triangle\n");
        }
        else {
            printf("Those numbers are not sides of a triangle\n");
        }
    }
// C is the highest side    
    else{
        highest = c;
        if (a + b >= c){
            printf("Those numbers are sides of a triangle\n");
        }
        else{
            printf("Those numbers are not sides of a triangle\n");
        }
    }
}