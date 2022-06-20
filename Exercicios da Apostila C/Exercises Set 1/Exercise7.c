/* 1.7.7 - Write a program that receives a number and returns its square */

// Since there are two ways of writing this program, let's start for the easy one.

/* Easy mode, using no library except stdio:

#include <stdio.h>

int main(){
    float number, square;
    printf("Enter a number: ");
    scanf("%f", &number);

    square = number * number;

    printf("The square of %.2f is %.2f\n", number, square);

    return 0;
}

*/

/* A "fancy" way to do this is using a native C library called math.h that provides
some mathematical functions like square root and the square of a number */

// when compiling using gcc, don't forget to use -lm parameter to link the math library.

#include <stdio.h>
#include <math.h>

int main() {
    float square;

    printf("Enter a number: ");
    scanf("%f", &square);
    
    // to use the funcion pow(power of) = pow(base, exponent)
    printf("The square of %.2f is %.2lf\n", square, pow(square, 2.0)); 

    return 0;

}