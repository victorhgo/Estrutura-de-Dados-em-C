/* Implementação: Será definido a struct e os protótipos de função */

typedef struct{
    double real;
    double imag;
} complexo;

complexo complexo_novo(double real, double imag){
    complexo c;
    c.real = real;
    c.imag = imag;
    return c;
}

complexo complexo_soma(complexo a, complexo b){
    return complexo_novo(a.real + b.real, a.imag + b.imag);
}
