/* 3.3.2 - Imprima o quadrado dos 10 primeiros números inteiros. */

#include <stdio.h>

int main(){
    int num = 0;

    while (num <= 10) {
        printf("%d\n", num * num);
        num++;
    }
    return 0;
}