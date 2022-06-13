/* Problema 2 - Um programa para lidar com numeros complexos.
Queremos somar dois números complexos lidos e calcular o valor absoluto.
(v(a²+b²)) */

#include <stdio.h>
#include <math.h>

typedef struct{
    double real;
    double imag;
} complexo;

int main(){
    complexo a, b, c;
    
    scanf("%lf %lf", &a.real, &a.imag);
    scanf("%lf %lf", &b.real, &b.imag);
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;

    printf("%f\n", sqrt(pow(2,c.real) + pow(2,c.imag)));
    return 0;
}

// Utilizando funções:

complexo complexo_novo(double real, double imag){
    complexo c;
    c.real = real;
    c.imag = imag;
    return c;
}

complexo complexo_soma(complexo a, complexo b){
    return complexo_novo(a.real + b.real, a.imag + b.imag);
}

complexo complexo_le(){
    complexo a;
    scanf("%lf %lf", &a.real, &a.imag);
    return a;
}