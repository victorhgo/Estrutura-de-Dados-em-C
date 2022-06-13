/* Problema 1 (Exemplo): Dado um conjunto de pontos do plano, como calcular o centroide? */

#include <stdio.h>
#define MAX 100 // Tamanho máximo dos vetores

int main() {
    double x[MAX], y[MAX]; // Posições x e y.
    double cx, cy; // Coordenadas do centroide x e y.
    int i, n; // N quantidade de pontos

    scanf("%d", &n); // Ler a quantidade de pontos

    for (i = 0; i < n; i++) {
    // Ler as coordenadas x e y de cada ponto:  
        scanf("%lf %lf", &x[i], &y[i]);
    }
    cx = cy = 0; // começar o centroide como 0;

// Para calcular a média.
    for (i = 0; i < n; i++) {
        cx += x[i] / n;
        cy += y[i] / n;
    }

// Imprimir a coordenada do centróide.
    printf("%f %f", cx,cy);
    return 0;
}