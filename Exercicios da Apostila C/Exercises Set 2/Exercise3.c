/* 2.3.3 - Permita que o usuário digite um valor inteiro, teste se este 
valor é maior que 10, caso seja, imprima “Maior que 10”; caso 
contrário, imprima “Menor ou igual a 10”.

*/

#include <stdio.h>

int main(){

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 10) {
        printf("%d is greater than 10\n", number);
    }
    else {
        printf("%d is equal or less than 10\n", number);
    }

    return number;

}