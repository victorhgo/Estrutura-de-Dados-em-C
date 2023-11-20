/* ax² + bx + c = 0 */

#include <stdio.h>
#include <math.h>

struct numbers{
    float a, b, c, real, complex; 
};

void process_numbers(float a, float b, float c, float real, float complex){
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
        complex = (sqrt(-((pow(b,2) - (4 * a * c)))));
        // Finish the function for Complex Nature.
        printf("x ∈ C | {x1 = %.2f + %.2fi and x2 = %.2f - %.2fi}\n", real, complex, real, complex);
    }
}

int main(){

    scanf("%f", &a);
    if (a == 0){
        printf("The value of a cannot be 0!!!\n");
        return 0;
    }
    scanf("%f", &b);
    scanf("%f", &c);
    process_numbers(a, b, c, real,complex);
    return 0;
}