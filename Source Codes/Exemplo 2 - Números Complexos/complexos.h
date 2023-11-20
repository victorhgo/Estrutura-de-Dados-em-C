/* MC202 - Professor Rafael Crivellari Saliba Schouery
Implementação: Será definido a struct e os protótipos de função */

typedef struct{
    double real;
    double imag;
} complexo;

complexo complexo_novo(double real, double imag);

complexo complexo_soma(complexo a, complexo b);

double complexo_absoluto(complexo a);

void complexo_imprime(complexo a);

complexo complexo_multiplicacao(complexo a, complexo b);

complexo complexo_le();