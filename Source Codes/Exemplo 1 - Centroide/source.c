/* MC202 - Professor Rafael Crivellari Saliba Schouery */

#include <stdio.h>
#define MAX 100

typedef struct ponto{
    double x, y;
}ponto;

int main(){
    ponto v[MAX], centro;
    int i, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
    scanf("%lf %lf", &v[i].x, &v[i].y);
    }

    centro.x = centro.y = 0;

    for (i = 0; i < n; i++) {
    centro.x += v[i].x / n;
    centro.y += v[i].y / n;
    }

    printf("%f %f\n", centro.x, centro.y);
    return 0;
}

/* E se estiver mais do que MAX pontos? 
Digamos que um usuário precise resolver pra 110 pontos:

O problema é que o vetor está com tamanho fixo (MAX):

O primeiro problema é não conseguir mais do que 100 pontos.

*/



