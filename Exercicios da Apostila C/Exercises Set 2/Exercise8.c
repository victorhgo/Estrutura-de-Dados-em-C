/* 2.3.8 - Dados 3 valores representando os lados de um triângulo,
verifique   se   este   triângulo   é   escaleno   (3   lados   diferentes),
isósceles (2 lados iguais) ou eqüilátero (3 lados iguais). */

#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter the A side of the triangle: ");
    scanf("%d", &a);
    printf("Enter the B side of the triangle: ");
    scanf("%d", &b);
    printf("Enter the C side of the triangle: ");
    scanf("%d", &c);

    if (a == b && a == c && c == b) {
        printf("This is a equilateral triangle.\n");
    }
    if (a != b && a != c && c != b){
        printf("This is an scalene triangle.\n");
    }
    if ((a != b && a == c) || (a == b && a != c) || (b == c && b != a)) {
        printf("This is an isosceles triangle.\n");
    }

}