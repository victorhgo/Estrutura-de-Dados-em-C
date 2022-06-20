/* 2.3.12 - Faça um programa que, leia os 3 números, a partir do
usuário, correspondentes aos coeficientes de uma equação do 2o
grau.   Através   de   Bascara,   calcule,   se   possível,   as   raízes   da
equação, realizando todas as consistências necessárias.  Faça o
algoritmo e o fluxograma antes do programa. */

// To compile with gcc, use -lm

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,real,imaginary;

    printf("For a Quadratic Equation where ax² + bx + c = 0\n");
    printf("Enter a value for a: ");
    scanf("%f", &a);

    if(a == 0) {
        printf("The value of a cannot be 0!!!\n");
        return 0;
    }

    printf("Enter a value for b: ");
    scanf("%f", &b);
    printf("Enter a value for c: ");
    scanf("%f", &c);

    if (((pow(b,2) - (4 * a * c))) == 0){
        printf("x ∈ R | {x = %.2f}\n", ((-b) / (2 * a)));
    }
    if(((pow(b,2) - (4 * a * c)) > 0)){
        printf("x ∈ R | {x = %.2f and x = %.2f}\n", (((-b) + sqrt((pow(b,2) - (4 * a * c)))) / (2 * a)),
        (((-b) - sqrt((pow(b,2) - (4 * a * c)))) / (2 * a)));
    }
    if(((pow(b,2) - (4 * a * c)) < 0)){
        printf("x ∉ R\n");
        real = ((-b) / (2 * a));
        imaginary = (sqrt(-((pow(b,2) - (4 * a * c)))));
        // Finish the function for Complex Nature.
        printf("x ∈ C | {x1 = %.2f + %.2fi and x2 = %.2f - %.2fi}\n", real, imaginary, real, imaginary);
    }
    return 0;
}