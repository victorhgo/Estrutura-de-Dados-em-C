/* Problema 2 - Um programa para lidar com numeros complexos.
Queremos somar dois números complexos lidos e calcular o valor absoluto.
(v(a²+b²)) */
#include <stdio.h>
#include "complexos.h"

int main(){
    complexo a, b, c;
    a = complexo_le();
    b = complexo_le();
    c = complexo_soma(a, b);
    complexo_imprime(c);
    printf("%f\n", complexo_absoluto(c));
    return 0;
}

