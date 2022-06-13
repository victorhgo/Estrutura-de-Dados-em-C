/* Problema 2 - Um programa para lidar com numeros complexos.
Queremos somar dois números complexos lidos e calcular o valor absoluto.
(v(a²+b²)) */

#include "complexos.h"
#include <stdio.h>
#include <math.h>

int main(){
    complexo a, b, c;
    
    scanf("%lf %lf", &a.real, &a.imag);
    scanf("%lf %lf", &b.real, &b.imag);
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;

    printf("%f\n", sqrt(pow(2,c.real) + pow(2,c.imag)));
    return 0;
}

