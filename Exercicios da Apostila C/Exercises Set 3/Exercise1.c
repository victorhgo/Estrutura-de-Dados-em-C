/* 3.3.1 - Imprima os 10 primeiros números inteiros na tela. */

#include <stdio.h>

int main(){
    
    int num = 0;
    while (num <= 10) {
        printf("%d\n", num);
        num = num + 1;
    }
    return 0;
}